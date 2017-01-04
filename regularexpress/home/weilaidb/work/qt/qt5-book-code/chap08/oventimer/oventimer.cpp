#define M_PI 3.14159265359
const double DegreesPerMinute = 7.0;
const double DegreesPerSecond = DegreesPerMinute / 60;
const int MaxMinutes = 45;
const int MaxSeconds = MaxMinutes * 60;
const int UpdateInterval = 5;
OvenTimer::OvenTimer(QWidget *parent)
: QWidget(parent)
void OvenTimer::setDuration(int secs)
int OvenTimer::duration() const
void OvenTimer::mousePressEvent(QMouseEvent *event)
void OvenTimer::paintEvent(QPaintEvent *)
void OvenTimer::draw(QPainter *painter)
