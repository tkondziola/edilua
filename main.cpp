#include <QApplication>
#include <QSplashScreen>
#include <QObject>
#include <QTimer>

#include "mainwindow.h"
#include "luaengine.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Splash screen
    QPixmap pixmap(":/edilua/resources/splashscreen/logo.svg");
    //QSplashScreen splashScreen(pixmap);
    //splashScreen.show();

    // Initialization of Lua engine
    //splashScreen.showMessage("Initialization Lua engine");
    LuaEngine luaEngine;
    Q_UNUSED(luaEngine)

    // Start application
    MainWindow w;
    w.show();

    return a.exec();
}
