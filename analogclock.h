#ifndef ANALOGCLOCK_H
#define ANALOGCLOCK_H

#include <QMainWindow>

class AnalogClock : public QMainWindow
{
    Q_OBJECT

public:
    AnalogClock(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *);
};

#endif // ANALOGCLOCK_H
