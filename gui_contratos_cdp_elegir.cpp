#include "gui_contratos_cdp_elegir.h"
#include "ui_gui_contratos_cdp_elegir.h"

GUI_Contratos_CDP_elegir::GUI_Contratos_CDP_elegir(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GUI_Contratos_CDP_elegir)
{
    ui->setupUi(this);
}

GUI_Contratos_CDP_elegir::~GUI_Contratos_CDP_elegir()
{
    delete ui;
}
