#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TurtleMainWindow.h"

class TurtleMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    TurtleMainWindow(QWidget *parent = nullptr);
    ~TurtleMainWindow();

private:
    Ui::TurtleMainWindowClass ui;
};
