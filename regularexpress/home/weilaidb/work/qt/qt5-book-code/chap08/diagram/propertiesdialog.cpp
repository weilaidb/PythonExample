PropertiesDialog::PropertiesDialog(Node *node, QWidget *parent)
: QDialog(parent)
void PropertiesDialog::on_buttonBox_accepted()
void PropertiesDialog::on_textColorButton_clicked()
void PropertiesDialog::on_outlineColorButton_clicked()
void PropertiesDialog::on_backgroundColorButton_clicked()
void PropertiesDialog::updateColorLabel(QLabel *label,
const QColor &color)
void PropertiesDialog::chooseColor(QLabel *label, QColor *color)
