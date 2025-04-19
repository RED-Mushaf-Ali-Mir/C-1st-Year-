#include "Menu.h"
#include <QMenu>
#include <QMenuBar>
#include <QMessageBox>
#include <QToolBar>
#include <QIcon>
#include <QStatusBar>
#include <QAction>
#include <QTextEdit>

Menu :: Menu (QWidget *parent) :
    QMainWindow (parent){

    QPixmap exitpix (":/new/icon/Exit.png");
    QPixmap newpix (":/new/icon/New.png");
    QPixmap filepix (":/new/icon /newfile.png");

    auto *exit =new QAction ("&Quit" ,this);

    QMenu* file = menuBar () ->addMenu ("&File");
    file ->addAction(exit);

    connect (exit ,&QAction ::triggered ,qApp ,QApplication :: quit);

    QToolBar *bar =addToolBar("Main Toolbar");

    bar ->addAction (QIcon (newpix) ,"New");
    bar ->addAction (QIcon(filepix) ,"NewFile");

    bar ->addSeparator();

    QAction *quit2 = bar ->addAction (QIcon (exitpix) ,"Quit Application");

    connect (quit2 ,&QAction :: triggered , qApp ,QApplication :: quit);

    auto *edit =new QTextEdit (this);

    setCentralWidget(edit);

    statusBar() ->showMessage("Ready");



    }
