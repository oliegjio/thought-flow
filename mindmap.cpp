#include "mindmap.h"

#include <QPainter>

MindMap::MindMap(QWidget *parent) : QWidget(parent)
{
    setMinimumSize(QSize(100, 100));
    setStyleSheet("background-color: red;");
}
