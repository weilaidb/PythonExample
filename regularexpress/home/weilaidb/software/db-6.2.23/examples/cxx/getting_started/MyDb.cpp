MyDb::MyDb(std::string &path, std::string &dbName,
bool isSecondary)
: db_(NULL, 0),
dbFileName_(path + dbName),
cFlags_(DB_CREATE)
void
MyDb::close()
