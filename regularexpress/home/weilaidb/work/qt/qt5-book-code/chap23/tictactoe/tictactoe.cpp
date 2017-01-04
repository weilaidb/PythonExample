TicTacToe::TicTacToe(QWidget *parent)
: QWidget(parent)
QSize TicTacToe::sizeHint() const
void TicTacToe::clearBoard()
void TicTacToe::restoreState()
QString TicTacToe::sessionFileName() const
QString TicTacToe::saveState() const
bool TicTacToe::gameInProgress() const
void TicTacToe::paintEvent(QPaintEvent *)
void TicTacToe::mousePressEvent(QMouseEvent *event)
QRect TicTacToe::cellRect(int row, int column) const
bool TicTacToe::threeInARow(int row1, int column1, int row3,
int column3) const
