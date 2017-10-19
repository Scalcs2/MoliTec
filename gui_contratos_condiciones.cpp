#include "gui_contratos_condiciones.h"
#include "ui_gui_contratos_condiciones.h"

GUI_Contratos_Condiciones::GUI_Contratos_Condiciones(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GUI_Contratos_Condiciones)
{
    ui->setupUi(this);
}

GUI_Contratos_Condiciones::~GUI_Contratos_Condiciones()
{
    delete ui;
}
