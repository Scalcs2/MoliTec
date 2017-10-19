#ifndef GUI_CONTRATOS_CONDICIONES_H
#define GUI_CONTRATOS_CONDICIONES_H

#include <QDialog>

namespace Ui {
class GUI_Contratos_Condiciones;
}

class GUI_Contratos_Condiciones : public QDialog
{
    Q_OBJECT

public:
    explicit GUI_Contratos_Condiciones(QWidget *parent = 0);
    ~GUI_Contratos_Condiciones();

private:
    Ui::GUI_Contratos_Condiciones *ui;
};

#endif // GUI_CONTRATOS_CONDICIONES_H
