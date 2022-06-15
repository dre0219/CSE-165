#include "PlayerScore.h"
#include <QFont>

PlayerScore::PlayerScore(QGraphicsItem * parent) : QGraphicsTextItem(parent){
    score = 0;

    setPlainText(QString("Score: ") + QString::number(score));
    setDefaultTextColor(Qt::white);
    setFont(QFont("times", 14));

}

void PlayerScore::gain(){
    score++;
    setPlainText(QString("Score: ") + QString::number(score));
}

void PlayerScore::loss(){
    score--;
    setPlainText(QString("Score: ") + QString::number(score));
}

void PlayerScore::reset(){
    score = 0;
    setPlainText(QString("Score: ") + QString::number(score));
}

int PlayerScore::getScore(){
    return score;
}


