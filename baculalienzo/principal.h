#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>

namespace Ui {
class principal;
}

class principal : public QMainWindow
{
    Q_OBJECT

public:
    explicit principal(QWidget *parent = 0);
    ~principal();

private slots:
    void on_actionOperacion_triggered();
    void on_capturapeso_triggered();

private:
    Ui::principal *ui;
};

#endif // PRINCIPAL_H
