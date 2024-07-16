/********************************************************************************
** Form generated from reading UI file 'FactorPage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACTORPAGE_H
#define UI_FACTORPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FactorPage
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *backToMainPage;
    QStackedWidget *stackedWidget_2;
    QWidget *stackedWidget_2Page1;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FactorPage)
    {
        if (FactorPage->objectName().isEmpty())
            FactorPage->setObjectName("FactorPage");
        FactorPage->resize(656, 519);
        FactorPage->setStyleSheet(QString::fromUtf8("background-color:#CB925D;\n"
"color:white;"));
        centralwidget = new QWidget(FactorPage);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(frame);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(16);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        backToMainPage = new QPushButton(frame);
        backToMainPage->setObjectName("backToMainPage");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Impact")});
        font1.setPointSize(14);
        backToMainPage->setFont(font1);
        backToMainPage->setCursor(QCursor(Qt::PointingHandCursor));
        backToMainPage->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color:#46200B;\n"
"color:white;\n"
"max-width:30px;\n"
"min-height:30px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/image/icons8-clear-symbol-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        backToMainPage->setIcon(icon);

        horizontalLayout->addWidget(backToMainPage);


        verticalLayout->addWidget(frame, 0, Qt::AlignTop);

        stackedWidget_2 = new QStackedWidget(centralwidget);
        stackedWidget_2->setObjectName("stackedWidget_2");
        stackedWidget_2->setFrameShape(QFrame::StyledPanel);
        stackedWidget_2->setFrameShadow(QFrame::Raised);
        stackedWidget_2Page1 = new QWidget();
        stackedWidget_2Page1->setObjectName("stackedWidget_2Page1");
        verticalLayout_2 = new QVBoxLayout(stackedWidget_2Page1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        scrollArea = new QScrollArea(stackedWidget_2Page1);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 616, 380));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        stackedWidget_2->addWidget(stackedWidget_2Page1);

        verticalLayout->addWidget(stackedWidget_2);

        FactorPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FactorPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 656, 21));
        FactorPage->setMenuBar(menubar);
        statusbar = new QStatusBar(FactorPage);
        statusbar->setObjectName("statusbar");
        FactorPage->setStatusBar(statusbar);

        retranslateUi(FactorPage);

        QMetaObject::connectSlotsByName(FactorPage);
    } // setupUi

    void retranslateUi(QMainWindow *FactorPage)
    {
        FactorPage->setWindowTitle(QCoreApplication::translate("FactorPage", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("FactorPage", "Your Product as you select :", nullptr));
        backToMainPage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FactorPage: public Ui_FactorPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACTORPAGE_H
