#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gui_contratos.h"
#include "gui_ver.h"
#include <QMessageBox>

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

void MainWindow::on_contrato_clicked()
{

    GUI_Contratos a;

    a.exec();


}

void MainWindow::on_pushButton_clicked()
{
    gui_ver e;
    e.exec();
}

void MainWindow::on_pushButton_3_clicked()
{

    QMessageBox msgBox;
     msgBox.setText("ERROR");
     msgBox.setInformativeText("Do you want to save your changes?");
     msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
     msgBox.setDefaultButton(QMessageBox::Save);
     msgBox.exec();

}
