Spreadsheet::Spreadsheet(QWidget *parent)
: QTableWidget(parent)
QString Spreadsheet::currentLocation() const
QString Spreadsheet::currentFormula() const
QTableWidgetSelectionRange Spreadsheet::selectedRange() const
void Spreadsheet::clear()
bool Spreadsheet::readFile(const QString &fileName)
bool Spreadsheet::writeFile(const QString &fileName)
void Spreadsheet::sort(const SpreadsheetCompare &compare)
void Spreadsheet::cut()
void Spreadsheet::copy()
void Spreadsheet::paste()
void Spreadsheet::del()
void Spreadsheet::selectCurrentRow()
void Spreadsheet::selectCurrentColumn()
void Spreadsheet::recalculate()
void Spreadsheet::setAutoRecalculate(bool recalc)
void Spreadsheet::findNext(const QString &str, Qt::CaseSensitivity cs)
void Spreadsheet::findPrevious(const QString &str,
Qt::CaseSensitivity cs)
void Spreadsheet::somethingChanged()
Cell *Spreadsheet::cell(int row, int column) const
void Spreadsheet::setFormula(int row, int column,
const QString &formula)
QString Spreadsheet::formula(int row, int column) const
QString Spreadsheet::text(int row, int column) const
bool SpreadsheetCompare::operator()(const QStringList &row1,
const QStringList &row2) const
