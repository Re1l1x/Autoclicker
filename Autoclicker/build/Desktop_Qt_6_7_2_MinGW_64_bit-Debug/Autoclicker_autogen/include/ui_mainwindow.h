/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *closeButton;
    QPushButton *minimizeButton;
    QPushButton *selectMenu1button;
    QPushButton *selectMenu2Button;
    QGroupBox *menu1Box;
    QLabel *labelInterval;
    QLineEdit *interval_s;
    QLabel *labelShortcut;
    QLineEdit *shortcut;
    QLineEdit *interval_ms;
    QLabel *lableLocation;
    QComboBox *modifierBox;
    QLabel *labelPlus;
    QLabel *labelSec;
    QLabel *labelMs;
    QRadioButton *isLocated;
    QLineEdit *locationX;
    QLineEdit *locationY;
    QLabel *labelLocationX;
    QLabel *labelLocationY;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *menu2Box;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(300, 300);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        closeButton = new QPushButton(centralwidget);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(269, -1, 32, 32));
        minimizeButton = new QPushButton(centralwidget);
        minimizeButton->setObjectName("minimizeButton");
        minimizeButton->setGeometry(QRect(239, -1, 32, 32));
        selectMenu1button = new QPushButton(centralwidget);
        selectMenu1button->setObjectName("selectMenu1button");
        selectMenu1button->setEnabled(true);
        selectMenu1button->setGeometry(QRect(-1, -1, 122, 32));
        selectMenu1button->setAutoFillBackground(false);
        selectMenu1button->setAutoDefault(false);
        selectMenu1button->setFlat(false);
        selectMenu2Button = new QPushButton(centralwidget);
        selectMenu2Button->setObjectName("selectMenu2Button");
        selectMenu2Button->setGeometry(QRect(119, -1, 122, 32));
        menu1Box = new QGroupBox(centralwidget);
        menu1Box->setObjectName("menu1Box");
        menu1Box->setGeometry(QRect(0, 30, 301, 271));
        QFont font;
        font.setPointSize(11);
        menu1Box->setFont(font);
        menu1Box->setAutoFillBackground(true);
        labelInterval = new QLabel(menu1Box);
        labelInterval->setObjectName("labelInterval");
        labelInterval->setGeometry(QRect(20, 100, 111, 21));
        QFont font1;
        font1.setPointSize(14);
        labelInterval->setFont(font1);
        labelInterval->setTextFormat(Qt::AutoText);
        interval_s = new QLineEdit(menu1Box);
        interval_s->setObjectName("interval_s");
        interval_s->setGeometry(QRect(20, 130, 51, 22));
        interval_s->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelShortcut = new QLabel(menu1Box);
        labelShortcut->setObjectName("labelShortcut");
        labelShortcut->setGeometry(QRect(20, 20, 141, 16));
        labelShortcut->setFont(font1);
        shortcut = new QLineEdit(menu1Box);
        shortcut->setObjectName("shortcut");
        shortcut->setGeometry(QRect(130, 50, 21, 21));
        shortcut->setMaxLength(1);
        shortcut->setFrame(true);
        shortcut->setCursorPosition(1);
        shortcut->setAlignment(Qt::AlignCenter);
        interval_ms = new QLineEdit(menu1Box);
        interval_ms->setObjectName("interval_ms");
        interval_ms->setGeometry(QRect(120, 130, 51, 22));
        interval_ms->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        interval_ms->setClearButtonEnabled(false);
        lableLocation = new QLabel(menu1Box);
        lableLocation->setObjectName("lableLocation");
        lableLocation->setGeometry(QRect(20, 180, 121, 16));
        lableLocation->setFont(font1);
        modifierBox = new QComboBox(menu1Box);
        modifierBox->addItem(QString());
        modifierBox->addItem(QString());
        modifierBox->addItem(QString());
        modifierBox->setObjectName("modifierBox");
        modifierBox->setGeometry(QRect(20, 50, 71, 21));
        labelPlus = new QLabel(menu1Box);
        labelPlus->setObjectName("labelPlus");
        labelPlus->setGeometry(QRect(100, 50, 21, 21));
        labelPlus->setFont(font1);
        labelPlus->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        labelSec = new QLabel(menu1Box);
        labelSec->setObjectName("labelSec");
        labelSec->setGeometry(QRect(70, 130, 31, 21));
        labelSec->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        labelMs = new QLabel(menu1Box);
        labelMs->setObjectName("labelMs");
        labelMs->setGeometry(QRect(170, 130, 31, 21));
        labelMs->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        isLocated = new QRadioButton(menu1Box);
        isLocated->setObjectName("isLocated");
        isLocated->setEnabled(true);
        isLocated->setGeometry(QRect(150, 180, 21, 21));
        locationX = new QLineEdit(menu1Box);
        locationX->setObjectName("locationX");
        locationX->setGeometry(QRect(40, 210, 51, 22));
        locationX->setMaxLength(32767);
        locationX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        locationY = new QLineEdit(menu1Box);
        locationY->setObjectName("locationY");
        locationY->setGeometry(QRect(130, 210, 51, 22));
        locationY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelLocationX = new QLabel(menu1Box);
        labelLocationX->setObjectName("labelLocationX");
        labelLocationX->setGeometry(QRect(20, 210, 21, 16));
        labelLocationX->setFont(font1);
        labelLocationY = new QLabel(menu1Box);
        labelLocationY->setObjectName("labelLocationY");
        labelLocationY->setGeometry(QRect(110, 210, 16, 16));
        labelLocationY->setFont(font1);
        label = new QLabel(menu1Box);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 50, 49, 16));
        label_2 = new QLabel(menu1Box);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 240, 191, 16));
        menu2Box = new QGroupBox(centralwidget);
        menu2Box->setObjectName("menu2Box");
        menu2Box->setGeometry(QRect(0, 30, 301, 271));
        menu2Box->setAutoFillBackground(true);
        menu2Box->setFlat(false);
        MainWindow->setCentralWidget(centralwidget);
        menu2Box->raise();
        menu1Box->raise();
        closeButton->raise();
        minimizeButton->raise();
        selectMenu1button->raise();
        selectMenu2Button->raise();

        retranslateUi(MainWindow);

        selectMenu1button->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(whatsthis)
        MainWindow->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        closeButton->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        minimizeButton->setText(QCoreApplication::translate("MainWindow", "_", nullptr));
        selectMenu1button->setText(QCoreApplication::translate("MainWindow", "AutoClick", nullptr));
        selectMenu2Button->setText(QCoreApplication::translate("MainWindow", "Macro", nullptr));
        menu1Box->setTitle(QString());
        labelInterval->setText(QCoreApplication::translate("MainWindow", "Click interval", nullptr));
        interval_s->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelShortcut->setText(QCoreApplication::translate("MainWindow", "Launch shortcut", nullptr));
        shortcut->setInputMask(QString());
        shortcut->setText(QCoreApplication::translate("MainWindow", "K", nullptr));
        interval_ms->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        lableLocation->setText(QCoreApplication::translate("MainWindow", "Fixed Location", nullptr));
        modifierBox->setItemText(0, QCoreApplication::translate("MainWindow", "CTRL", nullptr));
        modifierBox->setItemText(1, QCoreApplication::translate("MainWindow", "SHIFT", nullptr));
        modifierBox->setItemText(2, QCoreApplication::translate("MainWindow", "ALT", nullptr));

        labelPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        labelSec->setText(QCoreApplication::translate("MainWindow", "sec", nullptr));
        labelMs->setText(QCoreApplication::translate("MainWindow", "ms", nullptr));
        isLocated->setText(QString());
        locationX->setInputMask(QString());
        locationX->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        locationY->setInputMask(QString());
        locationY->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelLocationX->setText(QCoreApplication::translate("MainWindow", "X:", nullptr));
        labelLocationY->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "(or F1)", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "(F2 - copy current position)", nullptr));
        menu2Box->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
