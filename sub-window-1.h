#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_sub1.h"

class SubWindow1 : public QMainWindow
{
	Q_OBJECT

public:
	SubWindow1(QWidget *parent = Q_NULLPTR);

private:
	Ui::Sub2 ui;
};
