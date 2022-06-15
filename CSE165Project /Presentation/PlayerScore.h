#ifndef PLAYERSCORE_H
#define PLAYERSCORE_H

#include <QGraphicsTextItem>

class PlayerScore : public QGraphicsTextItem{

public:
    PlayerScore(QGraphicsItem * parent = 0);
    void gain();
    void loss();
    int getScore();
    void reset();

private:
    int score;

};

#endif // PLAYERSCORE_H
