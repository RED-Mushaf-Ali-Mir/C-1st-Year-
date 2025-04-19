#include <QToolBar>
#include <QIcon>
#include <QAction>
#include "Toolbar.h"

toolbar :: toolbar (QWidget *parent) :QMainWindow (parent){
    QPixmap newpix (":/new/icon/New.png");
    QPixmap exitpix (":/new/icon/Exit.png");
    QPixmap newfi (":/new/icon/newfile.png");

    QToolBar *tolbar = addToolBar("Main ToolBar");
    tolbar ->addAction(QIcon(newpix) ,"New Window");
    tolbar ->addAction(QIcon(newfi) ,"New File");

    tolbar ->addSeparator();

    QAction *quit = tolbar ->addAction(QIcon(exitpix) ,"Exit Application");

    connect (quit ,&QAction :: triggered ,qApp ,QApplication ::quit);
}
