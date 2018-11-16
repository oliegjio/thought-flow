#pragma once

#include <QWidget>

#include "node.h"

class MindMap : public QWidget
{
    Q_OBJECT

private:
    Node *rootNode;

public:
    MindMap(QWidget *parent = nullptr);
};


