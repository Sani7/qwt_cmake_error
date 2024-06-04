#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    timer = new QTimer(this);
    timer->connect(timer, &QTimer::timeout, this, [=]{update();});
    timer->start(500);
}

void MainWindow::update()
{
    ui->Thermo->setValue(ui->Thermo->value() + 1);
}

MainWindow::~MainWindow() {
    delete ui;
}
