IconEditorPlugin::IconEditorPlugin(QObject *parent)
: QObject(parent)
QString IconEditorPlugin::name() const
QString IconEditorPlugin::includeFile() const
QString IconEditorPlugin::group() const
QIcon IconEditorPlugin::icon() const
QString IconEditorPlugin::toolTip() const
QString IconEditorPlugin::whatsThis() const
bool IconEditorPlugin::isContainer() const
QWidget *IconEditorPlugin::createWidget(QWidget *parent)
