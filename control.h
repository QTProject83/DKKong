#ifndef CONTROL_H
#define CONTROL_H

#include "stdlib.h"
#include "stdio.h"
#include "model.h"
#include "view.h"

#include <QWidget>

using namespace std;

class Model;
class View;

class Control
{
    private:
        Model *model;
        View *view;
    public:
        View* getView(){return view;};
        Control(Model *model, View *view);
        void playNewGame();
};

#endif // CONTROL_H
