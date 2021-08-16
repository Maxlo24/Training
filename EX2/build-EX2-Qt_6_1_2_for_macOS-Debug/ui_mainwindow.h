/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *StartButton;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *InputlineEdit;
    QLineEdit *OutputName;
    QComboBox *FiltercomboBox;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 534);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(640, 440, 141, 41));
        StartButton = new QPushButton(centralwidget);
        StartButton->setObjectName(QString::fromUtf8("StartButton"));
        StartButton->setGeometry(QRect(20, 440, 221, 41));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(260, 10, 521, 411));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 111, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 120, 111, 21));
        InputlineEdit = new QLineEdit(centralwidget);
        InputlineEdit->setObjectName(QString::fromUtf8("InputlineEdit"));
        InputlineEdit->setGeometry(QRect(20, 50, 221, 24));
        OutputName = new QLineEdit(centralwidget);
        OutputName->setObjectName(QString::fromUtf8("OutputName"));
        OutputName->setGeometry(QRect(20, 150, 221, 24));
        FiltercomboBox = new QComboBox(centralwidget);
        FiltercomboBox->addItem(QString());
        FiltercomboBox->addItem(QString());
        FiltercomboBox->setObjectName(QString::fromUtf8("FiltercomboBox"));
        FiltercomboBox->setGeometry(QRect(20, 230, 221, 24));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 200, 111, 21));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 80, 80, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(StartButton, pushButton);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow, SLOT(browseSlot()));
        QObject::connect(InputlineEdit, SIGNAL(returnPressed()), MainWindow, SLOT(returnedPressedSlot()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        StartButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Input file", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Output file name", nullptr));
        OutputName->setText(QString());
        FiltercomboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Smoothing", nullptr));
        FiltercomboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Median", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "Filter type", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
