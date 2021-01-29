#include "interface.h"
#include "ui_interface.h"

interface::interface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::interface)
{
    ui->setupUi(this);
    this->setWindowTitle("Timi的聊天界面");
}

interface::~interface()
{
    delete ui;
}

