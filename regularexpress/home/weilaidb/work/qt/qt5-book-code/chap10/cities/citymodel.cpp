CityModel::CityModel(QObject *parent)
: QAbstractTableModel(parent)
void CityModel::setCities(const QStringList &cityNames)
int CityModel::rowCount(const QModelIndex &) const
int CityModel::columnCount(const QModelIndex &) const
QVariant CityModel::data(const QModelIndex &index, int role) const
bool CityModel::setData(const QModelIndex &index,
const QVariant &value, int role)
QVariant CityModel::headerData(int section,
Qt::Orientation,
int role) const
Qt::ItemFlags CityModel::flags(const QModelIndex &index) const
int CityModel::offsetOf(int row, int column) const
