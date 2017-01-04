BooleanModel::BooleanModel(QObject *parent)
: QAbstractItemModel(parent)
BooleanModel::~BooleanModel()
void BooleanModel::setRootNode(Node *node)
QModelIndex BooleanModel::index(int row, int column,
const QModelIndex &parent) const
QModelIndex BooleanModel::parent(const QModelIndex &child) const
int BooleanModel::rowCount(const QModelIndex &parent) const
int BooleanModel::columnCount(const QModelIndex &) const
QVariant BooleanModel::data(const QModelIndex &index, int role) const
QVariant BooleanModel::headerData(int section,
Qt::Orientation orientation,
int role) const
Node *BooleanModel::nodeFromIndex(const QModelIndex &index) const
