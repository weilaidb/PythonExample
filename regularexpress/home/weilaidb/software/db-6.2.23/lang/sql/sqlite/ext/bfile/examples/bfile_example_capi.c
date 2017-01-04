#define CHECK_ERR						\
if (rc != SQLITE_OK)
#define EXEC(sql)						\
printf("\nRuning:\t%s\n",(sql));			\
rc = sqlite3_exec(db, (sql), NULL, 0, &zErrMsg);	\
CHECK_ERR
#define QUERY(sql)						\
printf("\nRuning:\t%s\n",(sql));			\
rc = sqlite3_prepare(db, (sql), -1, &pStmt, 0);		\
if (rc != SQLITE_OK) 							\
printf("\tname\tphone   \taddress \tphoto_path\n");	\
while (SQLITE_ROW == sqlite3_step(pStmt))
#define cleandb(db)							\
sqlite3_exec(db,						\
"DELETE FROM BFILE_DIRECTORY WHERE alias='IMG';", NULL, \
0, &zErrMsg);						\
sqlite3_exec(db, "DROP TABLE address_book;", NULL, 0, &zErrMsg);\
#define BUFF_SIZE 80
static int query_with_api(sqlite3* db, char * sql)
int main(int argc, char **argv)
