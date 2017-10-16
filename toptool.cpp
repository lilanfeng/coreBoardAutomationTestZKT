#include "toptool.h"
#include "ui_toptool.h"

topTool::topTool(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::topTool)
{
    ui->setupUi(this);
}

topTool::~topTool()
{
    delete ui;
}
