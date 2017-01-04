Node *BooleanParser::parse(const QString &expr)
Node *BooleanParser::parseOrExpression()
Node *BooleanParser::parseAndExpression()
Node *BooleanParser::parseNotExpression()
Node *BooleanParser::parseAtom()
Node *BooleanParser::parseIdentifier()
void BooleanParser::addChild(Node *parent, Node *child)
void BooleanParser::addToken(Node *parent, const QString &str,
Node::Type type)
bool BooleanParser::matchToken(const QString &str) const
