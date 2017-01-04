CursorHandler::CursorHandler()
bool CursorHandler::canRead() const
bool CursorHandler::read(QImage *image)
bool CursorHandler::jumpToNextImage()
int CursorHandler::currentImageNumber() const
int CursorHandler::imageCount() const
void CursorHandler::readHeaderIfNecessary() const
QBitArray CursorHandler::readBitmap(int width, int height,
QDataStream &in) const
void CursorHandler::enterErrorState() const
