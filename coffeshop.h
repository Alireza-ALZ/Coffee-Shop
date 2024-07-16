#ifndef COFFESHOP_H
#define COFFESHOP_H

#include "ui_coffeshop.h"
#include "ui_FactorPage.h"
#include <QMainWindow>
#include <QWidget>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QCoreApplication>
#include <QDir>
#include <QFile>
#include <QByteArray>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QVector>
#include <QMessageBox>
#include <QSpinBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class CoffeShop;
}
QT_END_NAMESPACE

class CoffeShop : public QMainWindow
{
    Q_OBJECT

public:
    CoffeShop(QWidget *parent = nullptr);
    ~CoffeShop();
    QVector<QVector<QString>> selectedproduct;



    QJsonArray getAllProduct(){
        QDir appDir(QCoreApplication::applicationDirPath());
        QFile jsonFile = appDir.filePath("data.json");
        jsonFile.open(QIODevice::ReadOnly);

        QByteArray ReadAllData = jsonFile.readAll();
        QJsonDocument changeDataTOjson = QJsonDocument::fromJson(ReadAllData);
        QJsonObject jsonOBJ = changeDataTOjson.object();
        QJsonArray AllProduct = jsonOBJ["Product"].toArray();

        jsonFile.close();
        return AllProduct;
    }


    QFrame * creatCart(QString name , QString price , QString number){
        QFrame *newFrame = new QFrame();
        newFrame->setFrameShape(QFrame::Box);
        newFrame->setLineWidth(1);


        QHBoxLayout *newBoxLayout = new QHBoxLayout(newFrame);


        QPushButton *clickButton = new QPushButton("", newFrame);
        clickButton->setObjectName("shop_off");
        clickButton->setIcon(QIcon(":/icon/image/cartfile.png"));
        clickButton->setMaximumSize(20,20);
        newBoxLayout->addWidget(clickButton);

        QSpinBox *numberOfProduct = new QSpinBox(newFrame);
        newBoxLayout->addWidget(numberOfProduct);

        QLabel *priceL = new QLabel(this->formattedPrice(price));
        QLabel *nameL = new QLabel(name);
        QLabel *numberL = new QLabel("."+number);
        numberL->setAlignment(Qt::AlignRight | Qt::AlignCenter);
        priceL->setAlignment(Qt::AlignRight | Qt::AlignCenter);
        nameL->setAlignment(Qt::AlignRight | Qt::AlignCenter);
        newBoxLayout->addWidget(priceL);
        newBoxLayout->addWidget(nameL);
        newBoxLayout->addWidget(numberL);


        newFrame->setLayout(newBoxLayout);
        return newFrame;
    }


    QString formattedPrice(QString previousPrice){
        for (int i = previousPrice.length() - 3;i > 0;i -= 3){
            previousPrice.insert(i, ",");
        }
        return previousPrice;
    }


    bool removeAllProduct(){
        QList<QFrame *> allFrames = ui->ShowCart->findChildren<QFrame *>();
        for(QFrame *frame : allFrames){
            frame->deleteLater();
        }
        return true;
    }


    void showTypeOfProduct(QString type){
        this->removeAllProduct();
        QJsonArray allProduct = this->getAllProduct();
        int number = 1;
        foreach(QJsonValue value , allProduct){
            QJsonObject product = value.toObject();
            if(product["type"] == type){
                ui->scrollAreaWidgetContents->layout()->addWidget(this->creatCart(product["name"].toString() , product["price"].toString() , QString::number(number++)));
            }
        }
        QMessageBox::information(this , "User Notif" , "List Updated!");
    }


    void ButtonFrameEvent(QPushButton *button , int cn){
        QString icon = button->icon().name();
        if(button->objectName() == "shop_off"){
            // Setproduct on Array
            button->setIcon(QIcon(":/icon/image/icons8-clear-shopping-cart-60.png"));
            button->setObjectName("shop_on");
        }
        else{
            // deleteproduct from Array
            button->setIcon(QIcon(":/icon/image/cartfile.png"));
            button->setObjectName("shop_off");
        }
    }


    void getAllBtn(){
        QList <QFrame *> allbtnFrames = ui->ShowCart->findChildren<QFrame *>();
        int i=0;
        for(QFrame *frame : allbtnFrames){
            foreach (QPushButton *button, frame->findChildren<QPushButton *>()) {
                connect(button, &QPushButton::clicked, this, [=]() {
                    this->ButtonFrameEvent(button , i/4);
                });
            }
            i++;
        }
    }

    void showAnotherPage(){
        ui2->setupUi(this);
        QPushButton *BackToMainPage = ui2->backToMainPage;
        connect(BackToMainPage , &QPushButton::clicked , this , [=](){
            ui->setupUi(this);
        });
        QFrame *newFram = this->creatCart("Test","50,000","1");
        ui2->scrollAreaWidgetContents->layout()->addWidget(newFram);
    }

private slots:
    void on_coldType_clicked();

    void on_hotType_clicked();

    void on_foodType_clicked();

    void on_AllProductType_clicked();

    void on_completePurchase_clicked();

private:
    Ui::CoffeShop *ui;
    Ui::FactorPage *ui2;
};
#endif // COFFESHOP_H
