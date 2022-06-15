#ifndef MRECT_H
#define MRECT_H
#include <QGraphicsRectItem>
#include <QObject>

class MyRect: public QObject, public QGraphicsRectItem{
        Q_OBJECT
public:
    void keyPressEvent(QKeyEvent * event);
public slots:
    void start();
};

#endif // MRECT_H
