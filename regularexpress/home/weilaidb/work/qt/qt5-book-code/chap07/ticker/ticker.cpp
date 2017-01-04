Ticker::Ticker(QWidget *parent)
: QWidget(parent)
void Ticker::setText(const QString &newText)
QSize Ticker::sizeHint() const
void Ticker::paintEvent(QPaintEvent *)
void Ticker::showEvent(QShowEvent *)
void Ticker::timerEvent(QTimerEvent *event)
void Ticker::hideEvent(QHideEvent *)
