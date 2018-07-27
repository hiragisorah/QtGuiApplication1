#include "main-window.h"
#include "sub-window-1.h"
#include "sub-window-2.h"

#include <QtWidgets/QApplication>
#include "..\game-base\seed-engine\seed-engine.h"
#include "..\game-base\rionos\title.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow m;
	SeedEngine::InitializeEx<Title>(&m);

	SubWindow1 s1(&m);
	SubWindow2 s2(&m);

	return a.exec();
}
