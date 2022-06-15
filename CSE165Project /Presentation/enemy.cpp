#include "Enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>
#include <QDebug>
#include "Game.h"

extern Game * game;

Enemy::Enemy(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){

    //sets initial random position
    int random_number = rand() % 700;
    setPos(random_number,0);

    //import image and "draws" enemy
    setPixmap(QPixmap(":/images/enemy_Alien.png"));

    //connect to timer to make enemy move
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void Enemy::move(){

    //move enemy down until bottom of window
    setPos(x(),y()+5);

    //checking for collisions with player
    QList<QGraphicsItem *> colliding_items = collidingItems();

    for (int i = 0, n = colliding_items.size(); i < n; ++i){

        if(typeid(*(colliding_items[i])) == typeid(PlayerModel)){

            game->score->loss();
            game->hp->loss();

            scene()->removeItem(this);

            delete this;

            return;
        }
    }

    if (pos().y() > 800){
        game->hp->loss();
        game->score->loss();
        scene()->removeItem(this);
        delete this;
    }
}
