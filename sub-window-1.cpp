#include "sub-window-1.h"
#include <fstream>

SubWindow1::SubWindow1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	this->show();
}