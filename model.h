#ifndef MODEL_H
#define MODEL_H

#include "stdlib.h"
#include "stdio.h"
#include "control.h"
#include "gamescenemajor.h"

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsLineItem>
#include <QGraphicsRectItem>

using namespace std;

class Control;
class GameSceneMajor;

class Model
{
    public:
        Model();
        void setControl(Control *control);
        QGraphicsView *playNewGame();
        GameSceneMajor *gameScene;
        QGraphicsView *gameView;
        QList<QGraphicsLineItem*> ListGameLine ;


    private:
        Control *control;


};

#endif // MODEL_H
