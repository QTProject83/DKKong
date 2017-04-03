#include <QApplication>
#include <QLabel>

#include "model.h"
#include "view.h"
#include "control.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Model m;
    View v;
    Control(&m, &v);

    v.show();

    return app.exec();
}
