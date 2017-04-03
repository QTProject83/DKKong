#include "control.h"

Control::Control(Model *model, View *view) :
    view(view)
{
    this->model = model;
    model->setControl(this);
    view->setControl(this);
}

void Control::playNewGame(){

    view->startNewGame(model->playNewGame());

}


