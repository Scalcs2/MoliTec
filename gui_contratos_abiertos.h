#ifndef GUI_CONTRATOS_ABIERTOS_H
#define GUI_CONTRATOS_ABIERTOS_H

#include <QDialog>

namespace Ui {
class GUI_Contratos_Abiertos;
}

class GUI_Contratos_Abiertos : public QDialog
{
    Q_OBJECT

public:
    explicit GUI_Contratos_Abiertos(QWidget *parent = 0);
    ~GUI_Contratos_Abiertos();

private slots:
    void on_pushButton_clicked();

private:
    Ui::GUI_Contratos_Abiertos *ui;
};

#endif // GUI_CONTRATOS_ABIERTOS_H
