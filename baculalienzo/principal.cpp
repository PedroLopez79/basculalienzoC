#include "principal.h"
#include "ui_principal.h"

#include "capturapeso.h"

principal::principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal)
{    
    ui->setupUi(this);
    QWidget *centralW = this->centralWidget();
    centralW->setStyleSheet("background-color:#55557f;");
}

principal::~principal()
{
    delete ui;
}

void principal::on_capturapeso_triggered()
{
    //CapturaPeso *captpeso = new CapturaPeso;
    //captpeso->show(); //opening second form
    CapturaPeso *captpeso = new CapturaPeso();
    captpeso->setStyleSheet("background-color:#55557f;");
    principal::setCentralWidget(captpeso);    
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

    connect(capturapeso,SIGNAL(triggered()),this,SLOT(on_capturapeso_triggered()));
}


