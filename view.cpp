#include "view.h"
#include "ui_view.h"

View::View(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::View)
{
    ui->setupUi(this);
    ui->pushButtonPlay->setShortcut(QKeySequence("Ctrl+P"));
    ui->pushButtonQuit->setShortcut(QKeySequence("Ctrl+Q"));
    connect(ui->pushButtonPlay, SIGNAL(released()), this, SLOT(playNewGame()));
    connect(ui->pushButtonQuit, SIGNAL(released()), this, SLOT(close()));
}

View::~View()
{
    delete ui;
}

void View::setControl(Control *control) {
    this->control = control;
}

void View::playNewGame(){

    control->playNewGame();

}

void View::startNewGame(QGraphicsView *gameView)
{
    gameView->show();

}
