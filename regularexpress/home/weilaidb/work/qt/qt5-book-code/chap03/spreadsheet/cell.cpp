Cell::Cell()
QTableWidgetItem *Cell::clone() const
void Cell::setData(int role, const QVariant &value)
QVariant Cell::data(int role) const
void Cell::setFormula(const QString &formula)
QString Cell::formula() const
void Cell::setDirty()
const QVariant Invalid;
QVariant Cell::value() const
QVariant Cell::evalExpression(const QString &str, int &pos) const
QVariant Cell::evalTerm(const QString &str, int &pos) const
QVariant Cell::evalFactor(const QString &str, int &pos) const
