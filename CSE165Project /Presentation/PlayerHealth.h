#ifndef PLAYERHEALTH_H
#define PLAYERHEALTH_H

#include <QGraphicsTextItem>

class PlayerHealth : public QGraphicsTextItem{

public:
    PlayerHealth(QGraphicsItem * parent = 0);
    void loss();
    int getHp();

private:
    int hp;

};

#endif // PLAYERHEALTH_H
