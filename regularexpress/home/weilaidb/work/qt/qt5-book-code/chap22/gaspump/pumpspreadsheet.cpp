PumpSpreadsheet::PumpSpreadsheet(QWidget *parent)
: QTableWidget(parent)
void PumpSpreadsheet::clearData()
bool PumpSpreadsheet::addData(const QString &fileName,
FileFormat format)
bool PumpSpreadsheet::saveData(const QString &fileName,
FileFormat format)
void PumpSpreadsheet::sortByColumn(Column column, Qt::SortOrder order)
void PumpSpreadsheet::applyFilter(const PumpFilter &filter)
void PumpSpreadsheet::convertUnits(double factor)
void PumpSpreadsheet::computeTotals(Column column)
void PumpSpreadsheet::setText(int row, int column, const QString &text)
QString PumpSpreadsheet::text(int row, int column) const
void PumpSpreadsheet::showWarning(const QString &message)
bool PumpSpreadsheet::addDataInPump2000Format(const QString &fileName)
bool PumpSpreadsheet::addDataInGasPumpXmlFormat(const QString &fileName)
void PumpSpreadsheet::readGpxElement(QXmlStreamReader &reader)
bool PumpSpreadsheet::saveDataInPump2000Format(const QString &fileName)
void PumpSpreadsheet::readTransactionElement(QXmlStreamReader &reader)
bool PumpSpreadsheet::saveDataInGasPumpXmlFormat(
const QString &fileName)
void PumpSpreadsheet::addItem(const QStringList &fields)
bool PumpSpreadsheet::matches(int row, const PumpFilter &filter) const
PumpFilter::PumpFilter()
