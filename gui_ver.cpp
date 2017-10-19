#include "gui_ver.h"
#include "ui_gui_ver.h"

gui_ver::gui_ver(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gui_ver)
{


    lista.setQuery("show TABLES");


    ui->setupUi(this);
    ui->listView->setModel(&lista);
    ui->listView->setModelColumn(1);

}

gui_ver::~gui_ver()
{
    delete ui;
}

void gui_ver::on_listView_clicked(const QModelIndex &index)
{

    model.setTable(index.data(Qt::DisplayRole).toString());
    model.setSort(2, Qt::DescendingOrder);
    model.select();


    ui->tableView->setModel(&model);
}
