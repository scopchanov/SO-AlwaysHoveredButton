#include "GlowyButton.h"
#include <QStylePainter>
#include <QStyleOptionButton>

GlowyButton::GlowyButton(const QString &text, QWidget *parent) :
	QPushButton(text, parent)
{

}

void GlowyButton::paintEvent(QPaintEvent * /*event*/)
{
	QStylePainter p(this);
	QStyleOptionButton option;
	initStyleOption(&option);
	option.state |= QStyle::State_MouseOver;
	p.drawControl(QStyle::CE_PushButton, option);
}
