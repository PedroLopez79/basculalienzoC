#include "capturapeso.h"
#include "ui_capturapeso.h"

CapturaPeso::CapturaPeso(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CapturaPeso)
{
    ui->setupUi(this);
}

CapturaPeso::~CapturaPeso()
{
    delete ui;
}
