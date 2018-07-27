#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApplication1.h"
#include "..\game-base\window\window.h"
#include <qtimer.h>

class MainWindow : public QMainWindow, public Window
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR);

public:
	Ui::QtGuiApplication1Class ui;

public:
	const bool Initalize(const std::string & caption = "Window Title.", const unsigned int & width = 1280U, const unsigned int & height = 720U)
	{
		return true;
	}
	const bool Run(void)
	{
		return true;
	}
	const bool Finalize(void)
	{
		return true;
	}

private:
	std::string caption_;
	unsigned int width_;
	unsigned int height_;
	HWND hwnd_;
	QTimer * timer_;

private slots:
	void update();

private:
	const unsigned int & get_width(void)
	{
		this->width_ = this->ui.Graphics->width();
		return this->width_;
	}
	const unsigned int & get_height(void)
	{
		this->height_ = this->ui.Graphics->height();
		return this->height_;
	}
	void * const get_hwnd(void)
	{
		this->hwnd_ = reinterpret_cast<HWND>(this->ui.Graphics->winId());
		return this->hwnd_;
	}
	const std::string & get_caption(void)
	{
		return this->caption_;
	}
};
