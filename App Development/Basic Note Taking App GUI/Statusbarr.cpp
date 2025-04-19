#include "StatusBar.h"
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>

checkbar :: checkbar (QWidget *parent) :QMainWindow (parent) {

    viewst = new QAction("&Status Bar" , this);

    viewst -> setCheckable  (true);
    viewst -> setChecked (true);

    QMenu *info = menuBar() -> addMenu ("&Info");

    info ->addAction(viewst);

    statusBar ();

    connect (viewst ,&QAction :: triggered ,this ,&checkbar ::togglestatus);

    }

void checkbar :: togglestatus(){

    if (viewst ->isChecked()){
        statusBar () ->show();
    }else {
        statusBar() ->hide();
    }

}
