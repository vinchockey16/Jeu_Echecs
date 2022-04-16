#include "Vue.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Vue w;
    w.show();
    return a.exec();
}
