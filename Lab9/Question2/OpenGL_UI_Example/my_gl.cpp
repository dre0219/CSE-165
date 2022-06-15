#include "my_gl.h"
MyGL::MyGL(QWidget *parent) : QOpenGLWidget(parent){
    xrot = yrot = zrot = 0.0;
}

void MyGL::initializeGL(){
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
}

void MyGL::paintGL(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glTranslatef(0.0, 0.0, -7.0);
    glRotatef(xrot, 1.0, 0.0, 0.0);
    glRotatef(yrot, 0.0, 1.0, 0.0);
    glRotatef(zrot, 0.0, 0.0, 1.0);

    glTranslatef(0,0,0);
    glTranslatef(xtrans / 20, 0.0, 0.0);
    glTranslatef(0.0, ytrans / 20, 0.0);
    glTranslatef(0.0, 0.0, ztrans / 20);

    glBegin(GL_TRIANGLES);
           glColor3f(0,0,1);
           glVertex3f(0.75f,0.75f,0);
           glColor3f(1,0,0);
           glVertex3f(-1.5f,0,0);
           glColor3f(0,255,255);
           glVertex3f(0,-1.5f,0);

           glColor3f(1,0,0);
           glVertex3f(0.75f,0.75f,0);
           glColor3f(0,0,1);
           glVertex3f(-1.5f,0,0);
           glColor3f(1,1,0);
           glVertex3f(0,0,1);

           glColor3f(0,0,1);
           glVertex3f(0.75f,0.75f,0);
           glColor3f(1,1,0);
           glVertex3f(0,0,1);
           glColor3f(0,255,255);
           glVertex3f(0,-1.5f,0);

       glEnd();
    glFlush();
}

void MyGL::resizeGL(int w, int h){
    glViewport(0,0,w,h);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glFrustum(-2, +2, -2, +2, 4.0, 10.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void MyGL::setRotation(float x, float y, float z){
    xrot = x;
    yrot = y;
    zrot = z;
    update();
}

void MyGL::setTranslation(float x, float y, float z){
    xtrans = x;
    ytrans = y;
    ztrans = z;
    update();
}


