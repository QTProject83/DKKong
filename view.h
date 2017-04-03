#ifndef VIEW_H
#define VIEW_H
#include <QMessageBox>
#include <QMdiSubWindow>
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>

#include "stdlib.h"
#include "stdio.h"
#include "control.h"
#include "gamescenemajor.h"
#include <QMainWindow>

using namespace std;

class Control;


namespace Ui {
class View;
}

class View : public QMainWindow
{
    Q_OBJECT

    public:
       explicit View(QWidget *parent = 0);
       void setControl(Control *control);
        ~View();
       void startNewGame(QGraphicsView *gameView);

    private:
       Ui::View *ui;
       Control *control;

    private slots:
       void playNewGame();


};

#endif // VIEW_H
