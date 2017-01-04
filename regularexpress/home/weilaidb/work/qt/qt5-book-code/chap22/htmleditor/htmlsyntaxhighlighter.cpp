HtmlSyntaxHighlighter::HtmlSyntaxHighlighter(QTextDocument *document)
: QSyntaxHighlighter(document)
void HtmlSyntaxHighlighter::setFormatFor(Construct construct,
const QTextCharFormat &format)
void HtmlSyntaxHighlighter::setFormatFor(Construct construct,
const QColor &color)
void HtmlSyntaxHighlighter::setFormatFor(Construct construct,
const QFont &font)
void HtmlSyntaxHighlighter::highlightBlock(const QString &text)
