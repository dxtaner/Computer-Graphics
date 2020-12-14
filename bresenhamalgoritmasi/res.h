#ifndef RES_H
#define RES_H

#include <QLabel>
#include <QMouseEvent>

class res : public QLabel
{
    Q_OBJECT
public:
    explicit res(QWidget *parent = nullptr);
    void bresenham();

private:
    QRgb renk;
    QPoint ilknokta;
    QPoint sonnokta;
    QImage resim;
    void mousePressEvent(QMouseEvent*);
    int kontrol;


signals:

};

#endif // RES_H
