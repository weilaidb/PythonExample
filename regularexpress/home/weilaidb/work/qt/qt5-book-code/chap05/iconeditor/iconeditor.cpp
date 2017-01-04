IconEditor::IconEditor(QWidget *parent)
: QWidget(parent)
void IconEditor::setPenColor(const QColor &newColor)
void IconEditor::setZoomFactor(int newZoom)
void IconEditor::setIconImage(const QImage &newImage)
QSize IconEditor::sizeHint() const
void IconEditor::mousePressEvent(QMouseEvent *event)
void IconEditor::mouseMoveEvent(QMouseEvent *event)
void IconEditor::paintEvent(QPaintEvent *event)
void IconEditor::setImagePixel(const QPoint &pos, bool opaque)
QRect IconEditor::pixelRect(int i, int j) const
