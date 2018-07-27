#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_sub2.h"

class SubWindow2 : public QMainWindow
{
	Q_OBJECT

public:
	SubWindow2(QWidget *parent = Q_NULLPTR);

private:
	Ui::Sub1 ui;
};
