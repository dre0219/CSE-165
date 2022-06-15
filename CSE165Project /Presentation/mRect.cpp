#include "mRect.h"
#include "Projectile.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "Enemy.h"
#include <QDebug>

void MyRect::keyPressEvent(QKeyEvent *event)
{
    //moving with keys; change speed here
    if (event->key() == Qt::Key_A) //left
        setPos(x()-10, y());

    if (event->key() == Qt::Key_D) //right
        setPos(x()+10, y());

    if (event->key() == Qt::Key_W) //up
        setPos(x(), y()-10);

    if (event->key() == Qt::Key_S) //down
        setPos(x(), y()+10);

    if (event->key() == Qt::Key_Space){ //space to shoot
        Projectile * projectile = new Projectile();
        projectile -> setPos(x()+45, y());
        scene() -> addItem(projectile);
    }
}

void MyRect::start(){
    Enemy* enemy = new Enemy();
    scene()->addItem(enemy);
}
