static void *asciiToUtf16le(const char *z)
static sqlite_uint64 prepTime = 0;
static sqlite_uint64 runTime = 0;
static sqlite_uint64 finalizeTime = 0;
static void prepareAndRun(sqlite3 *db, const char *zSql)
int main(int argc, char **argv)
