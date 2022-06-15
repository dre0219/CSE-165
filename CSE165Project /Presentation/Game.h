#ifndef GAME_H
#define GAME_H

#include "PlayerHealth.h"
#include "PlayerModel.h"
#include "PlayerScore.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QWidget>


class Game : public QGraphicsView
{
public:
    Game(QWidget * parent = 0);

    QGraphicsScene * scene;
    PlayerModel * player;
    PlayerScore * score;
    PlayerHealth * hp;

};

#endif // GAME_H
