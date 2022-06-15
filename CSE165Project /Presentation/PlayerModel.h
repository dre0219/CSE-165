#ifndef PLAYERMODEL_H
#define PLAYERMODEL_H
#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsPixmapItem>


class PlayerModel: public QObject, public QGraphicsPixmapItem{
        Q_OBJECT
public:
    PlayerModel(QGraphicsItem * parent = 0);
    void keyPressEvent(QKeyEvent * event);
public slots:
    void start();
};

#endif // PLAYERMODEL_H
