SaxHandler::SaxHandler(QTreeWidget *tree)
bool SaxHandler::readFile(const QString &fileName)
bool SaxHandler::startElement(const QString &,
const QString &,
const QString &qName,
const QXmlAttributes &attributes)
bool SaxHandler::characters(const QString &str)
bool SaxHandler::endElement(const QString &,
const QString &,
const QString &qName)
bool SaxHandler::fatalError(const QXmlParseException &exception)
