#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QtOpenGL>
#include <OpenGL/glu.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    float lastX;
    float lastY;
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();
    void keyPressEvent(QKeyEvent *);
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);

private slots:
    void on_x_rot_slider_valueChanged(int value);
    void on_y_rot_slider_valueChanged(int value);
    void on_z_rot_slider_valueChanged(int value);

private:
    Ui::MainWindow *ui;
};

#endif
