#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "my_gl.h"
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);}

MainWindow::~MainWindow(){
    delete ui;}

void MainWindow::on_x_rot_slider_valueChanged(int value){
    Q_UNUSED(value);
    ui->openGLWidget->setRotation(
                ui->x_rot_slider->value(),
                ui->y_rot_slider->value(),
                ui->z_rot_slider->value()
                );
}

void MainWindow::on_y_rot_slider_valueChanged(int value){
    Q_UNUSED(value);
    ui->openGLWidget->setRotation(
                ui->x_rot_slider->value(),
                ui->y_rot_slider->value(),
                ui->z_rot_slider->value()
                );
}

void MainWindow::on_z_rot_slider_valueChanged(int value){
    Q_UNUSED(value);
    ui->openGLWidget->setRotation(
                ui->x_rot_slider->value(),
                ui->y_rot_slider->value(),
                ui->z_rot_slider->value()
                );
}

void MainWindow::on_x_trans_slider_valueChanged(int value){
    Q_UNUSED(value);
    ui->openGLWidget->setTranslation(
                ui->x_trans_slider->value(),
                ui->y_trans_slider->value(),
                ui->z_trans_slider->value()
                );
}

void MainWindow::on_y_trans_slider_valueChanged(int value){
    Q_UNUSED(value);
    ui->openGLWidget->setTranslation(
                ui->x_trans_slider->value(),
                ui->y_trans_slider->value(),
                ui->z_trans_slider->value()
                );
}

void MainWindow::on_z_trans_slider_valueChanged(int value){
    Q_UNUSED(value);
    ui->openGLWidget->setTranslation(
                ui->x_trans_slider->value(),
                ui->y_trans_slider->value(),
                ui->z_trans_slider->value()
                );
}

void MainWindow::on_quitButton_clicked(){
    close();
}



