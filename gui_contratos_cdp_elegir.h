#ifndef GUI_CONTRATOS_CDP_ELEGIR_H
#define GUI_CONTRATOS_CDP_ELEGIR_H

#include <QDialog>

namespace Ui {
class GUI_Contratos_CDP_elegir;
}

class GUI_Contratos_CDP_elegir : public QDialog
{
    Q_OBJECT

public:
    explicit GUI_Contratos_CDP_elegir(QWidget *parent = 0);
    ~GUI_Contratos_CDP_elegir();

private:
    Ui::GUI_Contratos_CDP_elegir *ui;
};

#endif // GUI_CONTRATOS_CDP_ELEGIR_H
