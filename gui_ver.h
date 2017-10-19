#ifndef GUI_VER_H
#define GUI_VER_H

#include <QDialog>
#include "head.h"

namespace Ui {
class gui_ver;
}

class gui_ver : public QDialog
{
    Q_OBJECT

public:
    explicit gui_ver(QWidget *parent = 0);
    ~gui_ver();

private slots:
    void on_listView_clicked(const QModelIndex &index);

private:
    QSqlTableModel model;
    QSqlQueryModel lista;
    Ui::gui_ver *ui;
};

#endif // GUI_VER_H
