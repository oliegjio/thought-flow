#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    central = new QWidget(this);
    mindmap = new MindMap(central);
    mainLayout = new QHBoxLayout(central);

    init();
}

void MainWindow::init()
{
    setCentralWidget(central);

    mainLayout->addWidget(mindmap);

    central->setLayout(mainLayout);

    resize(800, 600);
}

MainWindow::~MainWindow() {}
