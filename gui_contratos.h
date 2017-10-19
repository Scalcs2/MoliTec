#ifndef GUI_CONTRATOS_H
#define GUI_CONTRATOS_H

#include <QDialog>

namespace Ui {
class GUI_Contratos;
}

class GUI_Contratos : public QDialog
{
    Q_OBJECT

public:
    explicit GUI_Contratos(QWidget *parent = 0);
    ~GUI_Contratos();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::GUI_Contratos *ui;
};

#endif // GUI_CONTRATOS_H
