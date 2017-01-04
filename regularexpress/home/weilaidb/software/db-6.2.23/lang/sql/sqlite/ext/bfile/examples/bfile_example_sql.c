typedef sqlite3_int64 bfile_handle;
int exec(sqlite3 *db, char *sql)
int query(sqlite3 *db, char *sql)
#define cleandb(db)								\
sqlite3_exec(db, "DELETE FROM BFILE_DIRECTORY WHERE alias='IMG';",	\
NULL, 0, NULL);							\
sqlite3_exec(db, "DROP TABLE test_bfile;", NULL, 0, NULL);
#define is_error(rc) (rc != SQLITE_OK && rc != SQLITE_DONE && rc != SQLITE_ROW)
#define cleanup_if_error(rc, pt) if (is_error(rc)) goto pt
static int query_bfile(sqlite3* db)
int prepare_db(sqlite3 *db)
int change_dir(sqlite3 *db)
int main(int argc, char **argv)
