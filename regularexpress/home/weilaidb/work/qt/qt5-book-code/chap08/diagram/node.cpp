Node::Node()
Node::~Node()
void Node::setText(const QString &text)
QString Node::text() const
void Node::setTextColor(const QColor &color)
QColor Node::textColor() const
void Node::setOutlineColor(const QColor &color)
QColor Node::outlineColor() const
void Node::setBackgroundColor(const QColor &color)
QColor Node::backgroundColor() const
void Node::addLink(Link *link)
void Node::removeLink(Link *link)
QRectF Node::boundingRect() const
QPainterPath Node::shape() const
void Node::paint(QPainter *painter,
const QStyleOptionGraphicsItem *option,
QWidget *)
void Node::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
QVariant Node::itemChange(GraphicsItemChange change,
const QVariant &value)
QRectF Node::outlineRect() const
int Node::roundness(double size) const
