#include "PlayerHealth.h"
#include <QFont>

PlayerHealth::PlayerHealth(QGraphicsItem * parent) : QGraphicsTextItem(parent)
{
    hp = 5;

    setPlainText(QString("Health: ") + QString::number(hp));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times", 14));
}

void PlayerHealth::loss(){
    hp--;
    setPlainText(QString("Health: ") + QString::number(hp));
}

int PlayerHealth::getHp(){
    return hp;
}
