#include "gamescenemajor.h"

GameSceneMajor::GameSceneMajor(Model * model): QGraphicsScene()
{
    this->model = model;

    width = 900;
    height = 700;
    this->setForegroundBrush(QColor(15, 5, 225, 20));
    this->setSceneRect(0,0,width,height);

    QPen lineStyle(Qt::darkCyan, 7, Qt::SolidLine, Qt::RoundCap, Qt::BevelJoin);

    line[0] = new QGraphicsLineItem(0,height,width,height);
    line[1] = new QGraphicsLineItem(86,670,790,637);
    line[2] = new QGraphicsLineItem(793,578,56,543);
    line[3] = new QGraphicsLineItem(112,474,848,442);
    line[4] = new QGraphicsLineItem(791,372,66,338);
    line[5] = new QGraphicsLineItem(112,279,850,224);
    line[6] = new QGraphicsLineItem(786,146,58,155);
    line[7] = new QGraphicsLineItem(366,67,531,66);

    for(int i=0;i<8;i++){
         line[i]->setPen(lineStyle);
         //model->ListGameLine.append(line[i]);
         this->addItem(line[i]);
    }

}
