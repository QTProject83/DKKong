#ifndef GAMESCENEMAJOR_H
#define GAMESCENEMAJOR_H

#include <QGraphicsScene>
#include <QGraphicsLineItem>
#include <QGraphicsRectItem>

#include "model.h"

class Model;

class GameSceneMajor: public QGraphicsScene
{
public:
    GameSceneMajor(Model *model);
    Model *model;
    QGraphicsLineItem* line[];

private:
    int width;
    int height;

};

#endif // GAMESCENEMAJOR_H
