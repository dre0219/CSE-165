#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "my_gl.h"
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    UI_MainWindow->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}
void MainWindow::on_x_rot_slider_valueChanged(int value) {
    Q_UNUSED(value);
    ui->openGLWidget->setRotation(
                ui->x_rot_slider->value(),
                ui->y_rot_slider->value(),
                ui->z_rot_slider->value()
                );
}
void MainWindow::on_y_rot_slider_valueChanged(int value) {
    Q_UNUSED(value);
    ui->openGLWidget->setRotation(
                ui->x_rot_slider->value(),
                ui->y_rot_slider->value(),
                ui->z_rot_slider->value()
                );
}

void MainWindow::on_z_rot_slider_valueChanged(int value) {
    Q_UNUSED(value);
    ui->openGLWidget->setRotation(
                ui->x_rot_slider->value(),
                ui->y_rot_slider->value(),
                ui->z_rot_slider->value()
                );
}

void MainWindow::keyPressEvent(QKeyEvent *event) {
    float y = ui->openGLWidget->yMove;
    float x = ui->openGLWidget->xMove;

    float xR = ui->openGLWidget->xrot;
    float yR = ui->openGLWidget->yrot;
    float zR = ui->openGLWidget->zrot;


    float y_inc = 0.0;
    float x_inc = 0.0;

    float x_rot = 0.0;
    float y_rot = 0.0;
    float z_rot = 0.0;

    if (event->key() == Qt::Key_Up) {
        y_inc = +0.5f;
    }

    if (event->key() == Qt::Key_Down) {
        y_inc = -0.5f;
    }

    if (event->key() == Qt::Key_Left) {
        x_inc = -0.5f;
    }

    if (event->key() == Qt::Key_Right) {
        x_inc = +0.5f;
    }

    if (event->key() == Qt::Key_A) {
        y_rot = +5.0f;
    }

    if (event->key() == Qt::Key_D) {
        y_rot = -5.0f;
    }

    if (event->key() == Qt::Key_W) {
        x_rot = +5.0f;
    }

    if (event->key() == Qt::Key_S) {
        x_rot = -5.0f;
    }

    if (event->key() == Qt::Key_Q) {
        z_rot = +5.0f;
    }

    if (event->key() == Qt::Key_E) {
        z_rot = -5.0f;
    }
    ui->openGLWidget->setTrans(x + x_inc, y + y_inc);
    ui->openGLWidget->setRotation(xR+ x_rot, yR + y_rot, zR + z_rot);
}

void MainWindow::mousePressEvent(QMouseEvent *event) {
    lastX = event->x();
    lastY = event->y();
}

void MainWindow::mouseMoveEvent(QMouseEvent *event) {
    float xAtRelease = event->x();
    float yAtRelease = event->y();

    float dx = xAtRelease - lastX;
    float dy = yAtRelease - lastY;

    float x = ui->openGLWidget->xMove;
    float y = ui->openGLWidget->yMove;
    ui->openGLWidget->setTrans(x + dx/100, y - dy/100);
    lastX = event->x();
    lastY = event->y();

}


