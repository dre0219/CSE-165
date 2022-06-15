#ifndef PROJECTILE_H
#define PROJECTILE_H
#include <QObject>
#include <QGraphicsPixmapItem>


class Projectile: public QObject, public QGraphicsPixmapItem{
   Q_OBJECT
   public:
        Projectile(QGraphicsItem * parent = 0);
   public slots:
        void move();
};

#endif // PROJECTILE_H
