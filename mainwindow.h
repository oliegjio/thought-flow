#pragma once

#include <QMainWindow>
#include <QHBoxLayout>

#include "mindmap.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    void init();

    QHBoxLayout *mainLayout;
    QWidget *central;

    MindMap *mindmap;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
};

