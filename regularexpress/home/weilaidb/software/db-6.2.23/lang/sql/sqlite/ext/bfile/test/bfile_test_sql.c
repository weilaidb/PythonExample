typedef sqlite3_int64 bfile_handle;
#define CHECK_ERR						\
if (rc != SQLITE_OK)
#define EXEC(sql)						\
rc = sqlite3_exec(db, (sql), NULL, 0, &zErrMsg);	\
CHECK_ERR
#define cleandb(db)										\
sqlite3_exec(db, "DELETE FROM BFILE_DIRECTORY WHERE alias='IMG';", NULL, 0, &zErrMsg);	\
sqlite3_exec(db, "DROP TABLE address_book;", NULL, 0, &zErrMsg);
static char pic[] =
"       |||||       ""\n"\
"       (o o)       ""\n"\
"+-oooO--(_)-------+""\n"\
"|                 |""\n"\
"|    I am Tony    |""\n"\
"|                 |""\n"\
"+------------Ooo--+""\n"\
"      |__|__|      ""\n"\
"       || ||       ""\n"\
"      ooO Ooo      ""\n";
static void  creat_file(void)
static void pre_test(sqlite3 **pdb)
#define CHECK_API_ERR(title, errno, line)			\
if (rc != (errno))  else
#define BUFF_SIZE 20
static void test_BfileSize(sqlite3* db)
static void test_BfileOpenReadClose(sqlite3* db)
static int query_with_api(sqlite3* db)
static void test_api(sqlite3 *db)
int main(int argc, char **argv)
