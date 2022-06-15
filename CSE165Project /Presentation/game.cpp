#include "Game.h"
#include "Enemy.h"
#include <QBrush>
#include <QFont>
#include <QImage>
#include <QGraphicsTextItem>
#include <QTimer>


Game::Game(QWidget * parent)
{

    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,1000,800);
    setBackgroundBrush(QBrush(QImage(":/images/background2.gif")));
    setScene(scene);

    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1000,800);

    player = new PlayerModel();
    //subtract half of the width of the ship model, which is 80, to center it
    player->setPos(420,500);
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    scene->addItem(player);

    score = new PlayerScore();
    scene->addItem(score);

    hp = new PlayerHealth();
    hp->setPos(hp->x(), hp->y()+25);
    scene->addItem(hp);

    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()), player, SLOT(start()));
    timer->start(2000);
    show();

}

