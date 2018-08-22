#ifndef GLOWYBUTTON_H
#define GLOWYBUTTON_H

#include <QPushButton>

class GlowyButton : public QPushButton
{
	Q_OBJECT
public:
	explicit GlowyButton(const QString &text, QWidget *parent = nullptr);

protected:
	void paintEvent(QPaintEvent *) override;
};

#endif // GLOWYBUTTON_H
