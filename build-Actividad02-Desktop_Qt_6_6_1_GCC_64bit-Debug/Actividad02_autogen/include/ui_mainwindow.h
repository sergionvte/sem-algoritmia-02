/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_6;
    QPushButton *submit;
    QSpinBox *posicionY_spinBox;
    QLabel *label_2;
    QSpinBox *green_spinBox;
    QSpinBox *red_spinBox;
    QSpinBox *posicionX_spinBox;
    QSpinBox *id_spinBox;
    QLabel *label;
    QLabel *label_5;
    QDoubleSpinBox *voltaje_spinBox;
    QLabel *label_3;
    QSpinBox *blue_spinBox;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(536, 486);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        submit = new QPushButton(centralwidget);
        submit->setObjectName("submit");

        gridLayout->addWidget(submit, 7, 0, 1, 2);

        posicionY_spinBox = new QSpinBox(centralwidget);
        posicionY_spinBox->setObjectName("posicionY_spinBox");

        gridLayout->addWidget(posicionY_spinBox, 3, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        green_spinBox = new QSpinBox(centralwidget);
        green_spinBox->setObjectName("green_spinBox");

        gridLayout->addWidget(green_spinBox, 5, 1, 1, 1);

        red_spinBox = new QSpinBox(centralwidget);
        red_spinBox->setObjectName("red_spinBox");

        gridLayout->addWidget(red_spinBox, 4, 1, 1, 1);

        posicionX_spinBox = new QSpinBox(centralwidget);
        posicionX_spinBox->setObjectName("posicionX_spinBox");

        gridLayout->addWidget(posicionX_spinBox, 2, 1, 1, 1);

        id_spinBox = new QSpinBox(centralwidget);
        id_spinBox->setObjectName("id_spinBox");

        gridLayout->addWidget(id_spinBox, 0, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        voltaje_spinBox = new QDoubleSpinBox(centralwidget);
        voltaje_spinBox->setObjectName("voltaje_spinBox");

        gridLayout->addWidget(voltaje_spinBox, 1, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        blue_spinBox = new QSpinBox(centralwidget);
        blue_spinBox->setObjectName("blue_spinBox");

        gridLayout->addWidget(blue_spinBox, 6, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 536, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Posici\303\263n Y", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        submit->setText(QCoreApplication::translate("MainWindow", "Aceptar", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Voltaje", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Posici\303\263n X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
