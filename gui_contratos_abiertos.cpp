#include "gui_contratos_abiertos.h"
#include "ui_gui_contratos_abiertos.h"
#include "gui_contratos_condiciones.h"

GUI_Contratos_Abiertos::GUI_Contratos_Abiertos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GUI_Contratos_Abiertos)
{
    ui->setupUi(this);
    //ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);

    ui->pushButton->setEnabled(true);

}

GUI_Contratos_Abiertos::~GUI_Contratos_Abiertos()
{
    delete ui;
}

void GUI_Contratos_Abiertos::on_pushButton_clicked()
{
    GUI_Contratos_Condiciones a;
    a.exec();
}
