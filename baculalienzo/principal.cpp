#include "principal.h"
#include "ui_principal.h"

principal::principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal)
{
    ui->setupUi(this);
}

principal::~principal()
{
    delete ui;
}

void principal::on_actionOperacion_triggered()
{
    ui->toolBar_2->clear();

    QIcon iconCapturaPeso(":/icons/Weigh Station-48.png");
    QIcon iconApliCorte(":/icons/corteturno.png");
    QIcon iconreimprime(":/icons/icons8-Bill-64.png");

    QAction *capturapeso = new QAction(tr("Captura Peso"), this);
    capturapeso->setIcon(iconCapturaPeso);
    QAction *aplicacorte = new QAction(tr("Aplica Corte"), this);
    aplicacorte->setIcon(iconApliCorte);
    QAction *reimprimeticket = new QAction(tr("Re-Imprime Ticket"),this);
    reimprimeticket->setIcon(iconreimprime);

    ui->toolBar_2->addAction(capturapeso);
    ui->toolBar_2->addAction(aplicacorte);
    ui->toolBar_2->addAction(reimprimeticket);
}
