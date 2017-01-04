AddressBook::AddressBook(QWidget *parent)
: QMainWindow(parent)
AddressBook::~AddressBook()
void AddressBook::createActions()
void AddressBook::createMenus()
ABItem *AddressBook::createEntry(const QString &contact)
ABItem *AddressBook::findEntry(const QString &contact) const
ABItem *AddressBook::entryAt(int index) const
int AddressBook::count() const
void AddressBook::addEntry()
void AddressBook::editEntry()
void AddressBook::deleteEntry()
