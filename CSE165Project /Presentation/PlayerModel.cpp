#include "PlayerModel.h"
#include "Projectile.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "Enemy.h"
#include <QDebug>

PlayerModel::PlayerModel(QGraphicsItem * parent): QGraphicsPixmapItem(parent){
    setPixmap(QPixmap(":/images/player_Ship.png"));
}

void PlayerModel::keyPressEvent(QKeyEvent *event)
{
    //moving with keys; change speed here
    if (event->key() == Qt::Key_A) //left
        setPos(x()-30, y());

    if (event->key() == Qt::Key_D) //right
        setPos(x()+30, y());

    if (event->key() == Qt::Key_W) //up
        setPos(x(), y()-30);

    if (event->key() == Qt::Key_S) //down
        setPos(x(), y()+30);

    if (event->key() == Qt::Key_Space){ //space to shoot
        Projectile * projectile = new Projectile();
        projectile->setPos(x() + 40, y() - 40);
        scene()->addItem(projectile);
    }
}

void PlayerModel::start(){
    Enemy* enemy = new Enemy();
    scene()->addItem(enemy);
}
