#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QOpenGLWindow(){
    setSurfaceType(QWindow::OpenGLSurface);
    QSurfaceFormat format;
    format.setProfile(QSurfaceFormat::CompatibilityProfile);
    format.setVersion(2,1);
    setFormat(format);

    context = new QOpenGLContext;
    context->setFormat(format);
    context->create();
    context->makeCurrent(this);

    openGLFunctions = context->functions();
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this, SLOT(UpdateAnimation()));
    timer->start(100);
    rotation = 0;
}

MainWindow::~MainWindow(){}

void MainWindow::initializeGL(){
    glEnable(GL_DEPTH_TEST);
    resizeGL(this->width(),this->height());
}

void MainWindow::resizeGL(int w, int h){
    glViewport(0,0,w,h);
    qreal aspectratio = qreal(w)/qreal(h);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    gluPerspective(75,aspectratio, 0.1, 400000000);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void MainWindow::paintGL(){
    glClearColor(0.5f,0.5f,0.5f,1.f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glTranslatef(0.0f,0.0f,0.0f);
    glRotatef(rotation,1.0f,1.0f,1.0f);

          glBegin(GL_POLYGON);
              glColor3f(0.0f, 0.5f, 0.5f); // Green
              glVertex3f(-1.0f, 1.0f, 0.0f);
              glVertex3f(0.0f, -1.0f, 0.0f);
              glVertex3f(0.0f, 0.0f, -1.0f);
          glEnd();

         glBegin(GL_POLYGON);
            glColor3f(0.0f, 1.0f, 0.0f); //Blue
            glVertex3f(1.0f, 1.0f, 0.0f);
            glVertex3f(0.0f, -1.0f, 0.0f);
            glVertex3f(0.0f, 0.0f, -1.0f);
        glEnd();

         glBegin(GL_POLYGON);
            glColor3f(1.0f, 1.0f, 0.0f); //Yellow
            glVertex3f(-1.0f, 1.0f, 0.0f);
            glVertex3f(1.0f, 1.0f, 0.0f);
            glVertex3f(0.0f, 0.0f, -1.0f);
         glEnd();

       glBegin(GL_POLYGON);
           glColor3f(1.0f, 0.0f, 0.0f); //Red
           glVertex3f( -1.0f, 1.0f, 0.0f);
            glVertex3f( 1.0f, 1.0f, 0.0f);
            glVertex3f(0.0f, -1.0f, 0.0f);
        glEnd();
        glFlush();
}

void MainWindow::resizeEvent(QResizeEvent *event){
    resizeGL(this->width(),this->height());
    this->update();
}

void MainWindow::paintEvent(QPaintEvent *event){
    paintGL();
}

void MainWindow::UpdateAnimation(){
    rotation+=10;
    this->update();
}

