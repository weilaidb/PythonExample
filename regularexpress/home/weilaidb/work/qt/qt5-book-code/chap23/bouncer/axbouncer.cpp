AxBouncer::AxBouncer(QWidget *parent)
: QWidget(parent)
void AxBouncer::setColor(const QColor &newColor)
void AxBouncer::setSpeed(SpeedValue newSpeed)
int AxBouncer::intervalInMilliseconds() const
void AxBouncer::setRadius(int newRadius)
QSize AxBouncer::sizeHint() const
QAxAggregated *AxBouncer::createAggregate()
void AxBouncer::start()
void AxBouncer::stop()
void AxBouncer::paintEvent(QPaintEvent *)
void AxBouncer::timerEvent(QTimerEvent *event)
