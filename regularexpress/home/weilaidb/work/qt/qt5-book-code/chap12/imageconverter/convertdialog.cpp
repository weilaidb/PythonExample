ConvertDialog::ConvertDialog(QWidget *parent)
: QDialog(parent)
void ConvertDialog::on_browseButton_clicked()
void ConvertDialog::convertImage()
void ConvertDialog::updateOutputTextEdit()
void ConvertDialog::processFinished(int exitCode,
QProcess::ExitStatus exitStatus)
void ConvertDialog::processError(QProcess::ProcessError error)
