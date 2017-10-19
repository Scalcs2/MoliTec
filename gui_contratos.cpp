#include "gui_contratos.h"
#include "ui_gui_contratos.h"
#include "gui_contratos_abiertos.h"
#include "gui_contratos_cdp_elegir.h"

GUI_Contratos::GUI_Contratos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GUI_Contratos)
{
    ui->setupUi(this);
}

GUI_Contratos::~GUI_Contratos()
{
    delete ui;
}

void GUI_Contratos::on_pushButton_clicked()
{
    GUI_Contratos_Abiertos a;
    a.exec();
}

void GUI_Contratos::on_pushButton_4_clicked()
{
    GUI_Contratos_CDP_elegir a;
    a.exec();
}
