#include "coreautomation.h"
#include "ui_coreautomation.h"

coreAutomation::coreAutomation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::coreAutomation)
{
    ui->setupUi(this);
}

coreAutomation::~coreAutomation()
{
    delete ui;
}
