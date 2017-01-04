FilterDialog::FilterDialog(QWidget *parent)
: QDialog(parent)
void FilterDialog::initFromSpreadsheet(PumpSpreadsheet *spreadsheet)
PumpFilter FilterDialog::filter() const
QString FilterDialog::comboBoxText(const QComboBox *comboBox) const
void FilterDialog::populateComboBox(QComboBox *comboBox,
const QSet<QString> &texts)
