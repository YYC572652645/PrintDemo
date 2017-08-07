#include "templatesetup.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TemplateSetUp t;
    t.show();

    return a.exec();
}
