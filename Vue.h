#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Vue.h"

class Vue : public QMainWindow
{
    Q_OBJECT

public:
    Vue(QWidget *parent = Q_NULLPTR);

private:
    Ui::VueClass ui;
};
