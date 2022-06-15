/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include "my_gl.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QLabel *translate_z_label;
    QLabel *translate_x_label;
    QSlider *x_rot_slider;
    QSlider *z_trans_slider;
    MyGL *openGLWidget;
    QLabel *rotate_z_label;
    QLabel *rotate_x_label;
    QLabel *translate_y_label;
    QSlider *z_rot_slider;
    QSlider *y_trans_slider;
    QLabel *rotate_y_label;
    QSlider *x_trans_slider;
    QSlider *y_rot_slider;
    QPushButton *quitButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(824, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setHorizontalSpacing(2);
        gridLayout_2->setVerticalSpacing(1);
        translate_z_label = new QLabel(centralWidget);
        translate_z_label->setObjectName(QString::fromUtf8("translate_z_label"));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setStrikeOut(false);
        translate_z_label->setFont(font);

        gridLayout_2->addWidget(translate_z_label, 7, 0, 1, 1);

        translate_x_label = new QLabel(centralWidget);
        translate_x_label->setObjectName(QString::fromUtf8("translate_x_label"));
        translate_x_label->setFont(font);

        gridLayout_2->addWidget(translate_x_label, 5, 0, 1, 1);

        x_rot_slider = new QSlider(centralWidget);
        x_rot_slider->setObjectName(QString::fromUtf8("x_rot_slider"));
        x_rot_slider->setMinimumSize(QSize(703, 0));
        QFont font1;
        x_rot_slider->setFont(font1);
        x_rot_slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid FF0000;\n"
"    height: 8px; \n"
"   /* background: #D3D3D3;*/\n"
" background: qlineargradient(x2:0, y1:0, x2:1, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b2b2b2, stop:1 #6f6f6f);\n"
"    border: 1px solid #FF0000;\n"
"    width: 18px;\n"
"    margin: -2px 0; \n"
"    border-radius: 3px;\n"
"}"));
        x_rot_slider->setMinimum(0);
        x_rot_slider->setMaximum(360);
        x_rot_slider->setSliderPosition(0);
        x_rot_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(x_rot_slider, 1, 2, 1, 1, Qt::AlignVCenter);

        z_trans_slider = new QSlider(centralWidget);
        z_trans_slider->setObjectName(QString::fromUtf8("z_trans_slider"));
        z_trans_slider->setMinimumSize(QSize(703, 0));
        z_trans_slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid FF0000;\n"
"    height: 8px; \n"
"   /* background: #D3D3D3;*/\n"
" background: qlineargradient(x2:0, y1:0, x2:1, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b2b2b2, stop:1 #6f6f6f);\n"
"    border: 1px solid #00FF00;\n"
"    width: 18px;\n"
"    margin: -2px 0; \n"
"    border-radius: 3px;\n"
"}"));
        z_trans_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(z_trans_slider, 7, 2, 1, 1);

        openGLWidget = new MyGL(centralWidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(openGLWidget->sizePolicy().hasHeightForWidth());
        openGLWidget->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(openGLWidget, 0, 0, 1, 3);

        rotate_z_label = new QLabel(centralWidget);
        rotate_z_label->setObjectName(QString::fromUtf8("rotate_z_label"));
        rotate_z_label->setFont(font);

        gridLayout_2->addWidget(rotate_z_label, 4, 0, 1, 1);

        rotate_x_label = new QLabel(centralWidget);
        rotate_x_label->setObjectName(QString::fromUtf8("rotate_x_label"));
        rotate_x_label->setFont(font);
        rotate_x_label->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(rotate_x_label, 1, 0, 1, 1);

        translate_y_label = new QLabel(centralWidget);
        translate_y_label->setObjectName(QString::fromUtf8("translate_y_label"));
        translate_y_label->setFont(font);

        gridLayout_2->addWidget(translate_y_label, 6, 0, 1, 1);

        z_rot_slider = new QSlider(centralWidget);
        z_rot_slider->setObjectName(QString::fromUtf8("z_rot_slider"));
        z_rot_slider->setMinimumSize(QSize(703, 0));
        z_rot_slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid FF0000;\n"
"    height: 8px; \n"
"   /* background: #D3D3D3;*/\n"
" background: qlineargradient(x2:0, y1:0, x2:1, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b2b2b2, stop:1 #6f6f6f);\n"
"    border: 1px solid #FF0000;\n"
"    width: 18px;\n"
"    margin: -2px 0; \n"
"    border-radius: 3px;\n"
"}"));
        z_rot_slider->setMinimum(0);
        z_rot_slider->setMaximum(360);
        z_rot_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(z_rot_slider, 4, 2, 1, 1);

        y_trans_slider = new QSlider(centralWidget);
        y_trans_slider->setObjectName(QString::fromUtf8("y_trans_slider"));
        y_trans_slider->setMinimumSize(QSize(703, 0));
        y_trans_slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid FF0000;\n"
"    height: 8px; \n"
"   /* background: #D3D3D3;*/\n"
" background: qlineargradient(x2:0, y1:0, x2:1, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b2b2b2, stop:1 #6f6f6f);\n"
"    border: 1px solid #00FF00;\n"
"    width: 18px;\n"
"    margin: -2px 0; \n"
"    border-radius: 3px;\n"
"}"));
        y_trans_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(y_trans_slider, 6, 2, 1, 1);

        rotate_y_label = new QLabel(centralWidget);
        rotate_y_label->setObjectName(QString::fromUtf8("rotate_y_label"));
        rotate_y_label->setFont(font);

        gridLayout_2->addWidget(rotate_y_label, 3, 0, 1, 1);

        x_trans_slider = new QSlider(centralWidget);
        x_trans_slider->setObjectName(QString::fromUtf8("x_trans_slider"));
        x_trans_slider->setMinimumSize(QSize(703, 0));
        x_trans_slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid FF0000;\n"
"    height: 8px; \n"
"   /* background: #D3D3D3;*/\n"
" background: qlineargradient(x2:0, y1:0, x2:1, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b2b2b2, stop:1 #6f6f6f);\n"
"    border: 1px solid #00FF00;\n"
"    width: 18px;\n"
"    margin: -2px 0; \n"
"    border-radius: 3px;\n"
"}"));
        x_trans_slider->setSliderPosition(0);
        x_trans_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(x_trans_slider, 5, 2, 1, 1);

        y_rot_slider = new QSlider(centralWidget);
        y_rot_slider->setObjectName(QString::fromUtf8("y_rot_slider"));
        y_rot_slider->setMinimumSize(QSize(703, 0));
        y_rot_slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid FF0000;\n"
"    height: 8px; \n"
"   /* background: #D3D3D3;*/\n"
" background: qlineargradient(x2:0, y1:0, x2:1, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b2b2b2, stop:1 #6f6f6f);\n"
"    border: 1px solid #FF0000;\n"
"    width: 18px;\n"
"    margin: -2px 0; \n"
"    border-radius: 3px;\n"
"}"));
        y_rot_slider->setMinimum(0);
        y_rot_slider->setMaximum(360);
        y_rot_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(y_rot_slider, 3, 2, 1, 1);

        quitButton = new QPushButton(centralWidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setMinimumSize(QSize(717, 0));
        QFont font2;
        font2.setBold(true);
        quitButton->setFont(font2);
        quitButton->setAutoFillBackground(false);
        quitButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
" color : black;\n"
"	border-radius: 4px;\n"
"}\n"
""));

        gridLayout_2->addWidget(quitButton, 8, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Begin OpenGL", nullptr));
        translate_z_label->setText(QCoreApplication::translate("MainWindow", "Translate Z:", nullptr));
        translate_x_label->setText(QCoreApplication::translate("MainWindow", "Translate X:", nullptr));
        rotate_z_label->setText(QCoreApplication::translate("MainWindow", "Rotate Z:", nullptr));
        rotate_x_label->setText(QCoreApplication::translate("MainWindow", "Rotate X:", nullptr));
        translate_y_label->setText(QCoreApplication::translate("MainWindow", "Translate Y:", nullptr));
        rotate_y_label->setText(QCoreApplication::translate("MainWindow", "Rotate Y:", nullptr));
        quitButton->setText(QCoreApplication::translate("MainWindow", "QUIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
