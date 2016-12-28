#include "clock.h"
#include <QTimer>
#include <QTime>
#include <QPainter>
#include <QString>
#include <QIcon>

Clock::Clock(QWidget *parent) :
    QDialog(parent)
{
    QTimer *timer = new QTimer(this);   //声明一个定时器
    //update()会自动产生重绘消息，调用paintEvent()
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));  //连接信号槽，定时器超时触发窗体更新
    timer->start(1000);   //启动定时器
    setWindowTitle(tr("My Clock"));  //设置窗体名称
    setWindowIcon(QIcon(":/images/clock.ico"));
    resize(300, 300);  //设置窗体大小
}

void Clock::paintEvent(QPaintEvent *event)
{
    //下面三个数组用来定义表针的三个顶点，以便后面的填充
    static const QPoint hourHand[3] = {
        QPoint(3, 8),
        QPoint(-3, 8),
        QPoint(0, -40)
    };
    static const QPoint minuteHand[3] = {
        QPoint(3, 8),
        QPoint(-3, 8),
        QPoint(0, -70)
    };
    static const QPoint secondHand[3] = {
        QPoint(3, 8),
        QPoint(-3, 8),
        QPoint(0, -90)
    };//秒针
    //填充表针的颜色
    QColor hourColor(127, 0, 127);  //分针颜色(第四个表示不透明度)
    QColor minuteColor(0, 127, 127, 191);
    QColor secondColor(127, 127, 0, 127);

    int side = qMin(width(), height());  //绘制的范围(宽、高中最小值)
    QTime time = QTime::currentTime();   //获取当前的时间
    QPainter painter(this);              //声明用来绘图用的painter

    //painter.setWindow(-100, -100, 200, 200);

    painter.setRenderHint(QPainter::Antialiasing);//绘制的图像反锯齿
    painter.translate(width() / 2, height() / 2);//重新定位坐标起始点，把坐标原点放到窗体的中央
    painter.scale(side / 300.0, side / 300.0);//设定画布的边界,用窗体宽高的最小值来计算时钟的大小，防止窗体拉伸导致的时钟变形以及显示不全

    painter.setPen(Qt::red);   //填充时针，不需要边线所以NoPen
    QString timeStr= QTime::currentTime().toString();
    painter.drawText(-40,30,80,30,Qt::AlignHCenter | Qt::AlignTop, timeStr);

    painter.setPen(Qt::NoPen);   //填充时针，不需要边线所以NoPen
    painter.setBrush(hourColor);  //画刷颜色设定
    painter.save();  //保存painter的状态，保存的是当前的坐标状态，如果不保存，画完之后坐标以改变不方便画下一个
    painter.rotate(30.0 * ((time.hour() + time.minute() / 60.0))); //将painter（的”视角“）根据时间参数转移(30° * (小时 + 分钟 / 60))
    painter.drawConvexPolygon(hourHand, 3);  //填充时针的区域
    painter.restore();

    painter.setPen(hourColor);    //下面画表示小时的刻度，此时要用到画笔（因为要划线）
    for (int i = 0; i < 12; ++i) {
        painter.drawLine(0, -88, 0, -96);
        if (i == 0)  painter.drawText(-10,-88,20,20,Qt::AlignHCenter | Qt::AlignTop,QString::number(12));
        else  painter.drawText(-10,-88,20,20,Qt::AlignHCenter | Qt::AlignTop,QString::number(i));
        painter.rotate(30.0);
    }
    //后面的跟前面的类似，分别绘制了分针和秒针，及相应的刻度
    painter.setPen(Qt::NoPen);
    painter.setBrush(minuteColor);
    painter.save();
    painter.rotate(6.0 * (time.minute() + time.second() / 60.0));  //设旋转(角度 = 6° * (分钟 + 秒 / 60))
    painter.drawConvexPolygon(minuteHand, 3);  //填充分针部分
    painter.restore();

    painter.setPen(minuteColor);
    for (int j = 0; j < 60; ++j) {  //循环60次，绘制表盘（其实可以从1开始，到59，提高一点效率）
        if ((j % 5) != 0)
            painter.drawLine(0, -92, 0, -96);  //不是正点刻度，绘制长4个像素的直线
        painter.rotate(6.0);   //循环60次，每次旋转6度，所以不用save和restore
    }
    painter.setPen(Qt::NoPen);
    painter.setBrush(secondColor);
    painter.save();
    painter.rotate(6.0 * time.second());  //设置旋转(6° * 秒)
    painter.drawConvexPolygon(secondHand, 3);  //设置填充
    painter.restore();

    painter.setBrush(Qt::black);
    painter.drawEllipse(QPoint(0,0),2,2);

    painter.setBrush(Qt::NoBrush);
    painter.setPen(Qt::black);
    painter.drawEllipse(QPoint(0,0),97,97);
}
