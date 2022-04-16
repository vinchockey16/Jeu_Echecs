#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Vu.h"

class Vu : public QMainWindow
{
    Q_OBJECT

public:
    Vu(QWidget *parent = Q_NULLPTR);

private:
    Ui::VuClass ui;
};
