#include "Menu.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
     Menu window;

    window.resize (800 ,600);
    window .setWindowTitle ("The following code created a Simple menu ");
    window .show();

    return app.exec();
}
