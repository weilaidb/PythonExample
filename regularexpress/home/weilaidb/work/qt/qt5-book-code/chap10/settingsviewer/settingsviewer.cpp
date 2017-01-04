SettingsViewer::SettingsViewer(QWidget *parent)
: QDialog(parent)
void SettingsViewer::open()
void SettingsViewer::readSettings()
void SettingsViewer::addChildSettings(QSettings &settings,
QTreeWidgetItem *parent, const QString &group)
