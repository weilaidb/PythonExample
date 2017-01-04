db_handle *
setup(db_name)
const char* db_name;
void
cleanup(db)
db_handle *db;
void
echo_info(info)
const char* info;
static int
print_column_callback(void *data, int n_columns,
char **col_values, char **col_names)
static int
exec_sql_internal(db, sql, silent)
db_handle* db;
const char* sql;
int silent;
int
exec_sql(db, sql)
db_handle* db;
const char* sql;
int
error_handler(db)
db_handle *db;
#define BUF_SIZE		1024
#define TABLE_COLS		16
#define SQL_COMMAND_SIZE	4096
const sample_data university_sample_data = ;
const sample_data country_sample_data = ;
static char items[TABLE_COLS][BUF_SIZE];
static FILE*
open_csv_file(data_source)
const char* data_source;
static int
iterate_csv_file(fp, n_cols)
FILE* fp;
int n_cols;
void
load_table_from_file(db, data, silent)
sqlite3* db;
sample_data data;
int silent;
static os_thread_t thread_stack[MAX_THREAD];
static int pstack = 0;
void
register_thread_id(pid)
os_thread_t pid;
int
join_threads()
