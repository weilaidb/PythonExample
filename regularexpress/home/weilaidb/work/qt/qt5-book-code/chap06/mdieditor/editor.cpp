Editor::Editor(QWidget *parent)
: QTextEdit(parent)
void Editor::newFile()
bool Editor::save()
bool Editor::saveAs()
QSize Editor::sizeHint() const
Editor *Editor::open(QWidget *parent)
Editor *Editor::openFile(const QString &fileName, QWidget *parent)
void Editor::closeEvent(QCloseEvent *event)
void Editor::documentWasModified()
bool Editor::okToContinue()
bool Editor::saveFile(const QString &fileName)
void Editor::setCurrentFile(const QString &fileName)
bool Editor::readFile(const QString &fileName)
bool Editor::writeFile(const QString &fileName)
QString Editor::strippedName(const QString &fullFileName)
