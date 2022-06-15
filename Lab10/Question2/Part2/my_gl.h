#ifndef MyGL_H
#define MyGL_H
#include <QtWidgets>
#include <QtOpenGL>
public:
class MyGL : public QOpenGLWidget {
    Q_OBJECT

public:
    float xrot,yrot,zrot;
    float xMove;
    float yMove;
    void setTrans(float x, float y);
    explicit MyGL(QWidget *parent = 0);
    void setRotation(float x, float y, float z);

protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);
};
#endif // QGLBEGIN_H
