#include "MainWindow.h"
#include "GlowyButton.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent)
{
	setCentralWidget(new GlowyButton(tr("Click me"), this));
}
