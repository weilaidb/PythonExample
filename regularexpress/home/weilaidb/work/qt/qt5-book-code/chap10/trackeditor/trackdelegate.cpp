TrackDelegate::TrackDelegate(int durationColumn, QObject *parent)
: QItemDelegate(parent)
void TrackDelegate::paint(QPainter *painter,
const QStyleOptionViewItem &option,
const QModelIndex &index) const
QWidget *TrackDelegate::createEditor(QWidget *parent,
const QStyleOptionViewItem &option,
const QModelIndex &index) const
void TrackDelegate::setEditorData(QWidget *editor,
const QModelIndex &index) const
void TrackDelegate::setModelData(QWidget *editor,
QAbstractItemModel *model,
const QModelIndex &index) const
void TrackDelegate::commitAndCloseEditor()
