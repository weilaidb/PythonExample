FlowChartSymbolPicker::FlowChartSymbolPicker(
const QMap<int, QString> &symbolMap, QWidget *parent)
: QDialog(parent)
void FlowChartSymbolPicker::done(int result)
QIcon FlowChartSymbolPicker::iconForSymbol(const QString &symbolName)
