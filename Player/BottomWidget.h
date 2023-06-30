#ifndef GROUPBOX_H
#define GROUPBOX_H

#include <QWidget>
#include<QEvent>
#include<QMouseEvent>


class BottomWidget : public QWidget
{
    Q_OBJECT
public:
    explicit BottomWidget(QWidget *parent = 0);

    void mouseDoubleClickEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);
    void enterEvent(QEvent *);
    void leaveEvent(QEvent *);
signals:
    void signalMovePoint(QPoint);
    void signalLeftPressDown();
    void signalDoubleClicked();
public slots:

private:
    bool isLeftPressDown;  // 判断左键是否按下
    QPoint dragPosition;    // 窗口移动拖动时需要记住的点
};

#endif // GROUPBOX_H
