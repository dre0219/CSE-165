#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QtOpenGL>
namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_x_rot_slider_valueChanged(int value);
    void on_y_rot_slider_valueChanged(int value);
    void on_z_rot_slider_valueChanged(int value);
    void on_x_trans_slider_valueChanged(int value);
    void on_y_trans_slider_valueChanged(int value);
    void on_z_trans_slider_valueChanged(int value);
    void on_quitButton_clicked();
private:
    Ui::MainWindow *ui;
};
#endif
