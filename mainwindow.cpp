#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QFileDialog>
#include <QFileInfo>
#include <QDir>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{        
    ui->setupUi(this);        
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_New_triggered()
{
    qDebug() << "on_action_New_triggered";
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Open file"),
                                                    QDir::currentPath(),
                                                    tr("Lua files (*.lua)"));
    QFile srcFile(fileName);
    if (!srcFile.open(QIODevice::ReadWrite | QIODevice::Text)) {
        return;
    }

    QByteArray content = srcFile.readAll();
    if (!content.length()) {
        qWarning() << "No such file or directory ...";
        srcFile.close();
        return;
    }

    QFileInfo sourceFile(fileName);
    ui->tabWidget->setTabText(0, sourceFile.fileName());
    ui->plainTextEdit->setPlainText(QString(content));
    srcFile.close();
}

void MainWindow::on_action_Save_triggered()
{
    qDebug() << "on_action_Save_triggered";
}

void MainWindow::on_action_Run_triggered()
{
    qDebug() << "on_action_Run_triggered";
}

