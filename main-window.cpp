#include "main-window.h"
#include "..\game-base\seed-engine\seed-engine.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	this->timer_ = new QTimer(this);
	connect(this->timer_, SIGNAL(timeout()), this, SLOT(update()));
	this->timer_->start(1000/60);

	this->show();
}

void MainWindow::update(void)
{
	SeedEngine::Run();
}