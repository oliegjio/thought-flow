#pragma once

#include <QWidget>
#include <QVector>

class Node : public QWidget
{
    Q_OBJECT

private:
    QVector<Node*> children;

public:
    Node(QWidget *parent = nullptr);

};

