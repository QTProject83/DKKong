#include "model.h"

Model::Model()
{

}

void Model::setControl(Control *controle) {
    this->control = controle;
}

QGraphicsView *Model::playNewGame(){
   gameScene = new GameSceneMajor(this);
   gameView = new QGraphicsView(gameScene);
   return gameView;
}

