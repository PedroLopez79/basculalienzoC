#ifndef CAPTURAPESO_H
#define CAPTURAPESO_H

#include <QWidget>

namespace Ui {
class CapturaPeso;
}

class CapturaPeso : public QWidget
{
    Q_OBJECT

public:
    explicit CapturaPeso(QWidget *parent = 0);
    ~CapturaPeso();

private:
    Ui::CapturaPeso *ui;
};

#endif // CAPTURAPESO_H
