CurrencyModel::CurrencyModel(QObject *parent)
: QAbstractTableModel(parent)
void CurrencyModel::setCurrencyMap(const QMap<QString, double> &map)
int CurrencyModel::rowCount(const QModelIndex &) const
int CurrencyModel::columnCount(const QModelIndex &) const
QVariant CurrencyModel::data(const QModelIndex &index, int role) const
QVariant CurrencyModel::headerData(int section,
Qt::Orientation,
int role) const
QString CurrencyModel::currencyAt(int offset) const
