DomParser::DomParser(QTreeWidget *tree)
bool DomParser::readFile(const QString &fileName)
void DomParser::parseBookindexElement(const QDomElement &element)
void DomParser::parseEntryElement(const QDomElement &element,
QTreeWidgetItem *parent)
void DomParser::parsePageElement(const QDomElement &element,
QTreeWidgetItem *parent)
