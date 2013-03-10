#ifndef SIMPLEPATCHER_H
#define SIMPLEPATCHER_H

#include <QtGui/QMainWindow>
#include "ui_simplepatcher.h"

class SimplePatcher : public QMainWindow
{
	Q_OBJECT

public:
	SimplePatcher(QWidget *parent = 0, Qt::WFlags flags = 0);
	~SimplePatcher();

private:
	Ui::SimplePatcherClass ui;
};

#endif // SIMPLEPATCHER_H
