#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//#if QT_VERSION >= 0x050000
#include <QtWidgets/QMainWindow>
//#else
//#include <QtGui/QMainWindow>
//#endif

#include "luaengine.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_action_New_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
