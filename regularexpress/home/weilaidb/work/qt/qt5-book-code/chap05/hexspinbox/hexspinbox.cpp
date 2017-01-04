HexSpinBox::HexSpinBox(QWidget *parent)
: QSpinBox(parent)
QValidator::State HexSpinBox::validate(QString &text, int &pos) const
int HexSpinBox::valueFromText(const QString &text) const
QString HexSpinBox::textFromValue(int value) const
