/********************************************************************************
** Form generated from reading UI file 'coffeshop.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COFFESHOP_H
#define UI_COFFESHOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CoffeShop
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QStackedWidget *stackedWidget;
    QWidget *stackedWidgetPage1;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QStackedWidget *stackedWidget_5;
    QWidget *stackedWidget_5Page1;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *ShowCart;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *completePurchase;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *AllProductType;
    QPushButton *coldType;
    QPushButton *hotType;
    QPushButton *foodType;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CoffeShop)
    {
        if (CoffeShop->objectName().isEmpty())
            CoffeShop->setObjectName("CoffeShop");
        CoffeShop->resize(800, 600);
        CoffeShop->setStyleSheet(QString::fromUtf8("background-color:#CB925D;\n"
"color:white;"));
        centralwidget = new QWidget(CoffeShop);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_3);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(frame_3);
        label->setObjectName("label");
        label->setMinimumSize(QSize(20, 20));
        label->setMaximumSize(QSize(20, 20));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icon/image/favicon.webp")));
        label->setScaledContents(true);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(frame_3);
        label_2->setObjectName("label_2");
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(14);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);


        verticalLayout->addWidget(frame_3);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setStyleSheet(QString::fromUtf8("\n"
"background-color:#46200B;\n"
"border:none;"));
        stackedWidget->setFrameShape(QFrame::StyledPanel);
        stackedWidget->setFrameShadow(QFrame::Raised);
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName("stackedWidgetPage1");
        verticalLayout_2 = new QVBoxLayout(stackedWidgetPage1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame_4 = new QFrame(stackedWidgetPage1);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEdit = new QLineEdit(frame_4);
        lineEdit->setObjectName("lineEdit");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Impact")});
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("height:40px;\n"
"background-color:#CB925D;\n"
"color:white;\n"
"font-size:16px;\n"
"padding:0 5px;"));

        horizontalLayout_2->addWidget(lineEdit);

        pushButton = new QPushButton(frame_4);
        pushButton->setObjectName("pushButton");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Impact")});
        font2.setPointSize(11);
        pushButton->setFont(font2);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("height:40px;\n"
"background-color:#CB925D;\n"
"padding:0 5px;"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_2->addWidget(frame_4, 0, Qt::AlignTop);

        stackedWidget_5 = new QStackedWidget(stackedWidgetPage1);
        stackedWidget_5->setObjectName("stackedWidget_5");
        stackedWidget_5->setFrameShape(QFrame::StyledPanel);
        stackedWidget_5->setFrameShadow(QFrame::Raised);
        stackedWidget_5Page1 = new QWidget();
        stackedWidget_5Page1->setObjectName("stackedWidget_5Page1");
        verticalLayout_3 = new QVBoxLayout(stackedWidget_5Page1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        ShowCart = new QScrollArea(stackedWidget_5Page1);
        ShowCart->setObjectName("ShowCart");
        ShowCart->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color:#D9D9D9;\n"
"	color:black;\n"
"}\n"
"\n"
"QFrame>QPushButton{\n"
"	padding:3px;\n"
"}"));
        ShowCart->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 746, 271));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setObjectName("verticalLayout_4");
        ShowCart->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(ShowCart);

        stackedWidget_5->addWidget(stackedWidget_5Page1);

        verticalLayout_2->addWidget(stackedWidget_5);

        frame = new QFrame(stackedWidgetPage1);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        completePurchase = new QPushButton(frame);
        completePurchase->setObjectName("completePurchase");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Impact")});
        font3.setPointSize(12);
        completePurchase->setFont(font3);
        completePurchase->setCursor(QCursor(Qt::PointingHandCursor));
        completePurchase->setStyleSheet(QString::fromUtf8("width:100px;\n"
"height:40px;\n"
"padding:0 5px;\n"
"background-color:#CB925D;"));

        horizontalLayout_3->addWidget(completePurchase);


        verticalLayout_2->addWidget(frame, 0, Qt::AlignRight);

        stackedWidget->addWidget(stackedWidgetPage1);

        verticalLayout->addWidget(stackedWidget);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        AllProductType = new QPushButton(frame_2);
        AllProductType->setObjectName("AllProductType");
        AllProductType->setFont(font1);
        AllProductType->setStyleSheet(QString::fromUtf8("background-color:#DEDEDE;\n"
"padding:5px 0;\n"
"color:black;\n"
"font-size:16px;\n"
"border:none;"));

        horizontalLayout_4->addWidget(AllProductType);

        coldType = new QPushButton(frame_2);
        coldType->setObjectName("coldType");
        coldType->setFont(font1);
        coldType->setCursor(QCursor(Qt::PointingHandCursor));
        coldType->setStyleSheet(QString::fromUtf8("background-color:#DEDEDE;\n"
"padding:5px 0;\n"
"color:black;\n"
"font-size:16px;\n"
"border:none;"));

        horizontalLayout_4->addWidget(coldType);

        hotType = new QPushButton(frame_2);
        hotType->setObjectName("hotType");
        hotType->setFont(font1);
        hotType->setCursor(QCursor(Qt::PointingHandCursor));
        hotType->setStyleSheet(QString::fromUtf8("background-color:#DEDEDE;\n"
"padding:5px 0;\n"
"color:black;\n"
"font-size:16px;\n"
"border:none;"));

        horizontalLayout_4->addWidget(hotType);

        foodType = new QPushButton(frame_2);
        foodType->setObjectName("foodType");
        foodType->setFont(font1);
        foodType->setCursor(QCursor(Qt::PointingHandCursor));
        foodType->setStyleSheet(QString::fromUtf8("background-color:#DEDEDE;\n"
"padding:5px 0;\n"
"color:black;\n"
"font-size:16px;\n"
"border:none;"));

        horizontalLayout_4->addWidget(foodType);


        verticalLayout->addWidget(frame_2);

        CoffeShop->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CoffeShop);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        CoffeShop->setMenuBar(menubar);
        statusbar = new QStatusBar(CoffeShop);
        statusbar->setObjectName("statusbar");
        CoffeShop->setStatusBar(statusbar);

        retranslateUi(CoffeShop);

        QMetaObject::connectSlotsByName(CoffeShop);
    } // setupUi

    void retranslateUi(QMainWindow *CoffeShop)
    {
        CoffeShop->setWindowTitle(QCoreApplication::translate("CoffeShop", "CoffeShop", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("CoffeShop", "CoffeShop", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("CoffeShop", "Search ...", nullptr));
        pushButton->setText(QCoreApplication::translate("CoffeShop", "PushButton", nullptr));
        completePurchase->setText(QCoreApplication::translate("CoffeShop", "Purchase", nullptr));
        AllProductType->setText(QCoreApplication::translate("CoffeShop", "All Product", nullptr));
        coldType->setText(QCoreApplication::translate("CoffeShop", "Cold Drink", nullptr));
        hotType->setText(QCoreApplication::translate("CoffeShop", "Hot Drink", nullptr));
        foodType->setText(QCoreApplication::translate("CoffeShop", "Food", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CoffeShop: public Ui_CoffeShop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COFFESHOP_H
