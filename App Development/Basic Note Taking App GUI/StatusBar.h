#ifndef STATUSBAR_H
#define STATUSBAR_H

#include <QApplication>
#include <QMainWindow>

class checkbar :public QMainWindow{

    Q_OBJECT

public :
    checkbar (QWidget *parent =nullptr);

private slots :
    void togglestatus();

private :
    QAction *viewst;

};

#endif // STATUSBAR_H
