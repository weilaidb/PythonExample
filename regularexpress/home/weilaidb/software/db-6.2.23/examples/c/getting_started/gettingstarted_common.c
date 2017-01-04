int get_item_name(DB *, const DBT *, const DBT *, DBT *);
int
get_item_name(DB *dbp, const DBT *pkey, const DBT *pdata, DBT *skey)
int
open_database(DB **dbpp,
const char *file_name,
const char *program_name,
FILE *error_file_pointer,
int is_secondary)
int
databases_setup(STOCK_DBS *my_stock, const char *program_name,
FILE *error_file_pointer)
void
initialize_stockdbs(STOCK_DBS *my_stock)
void
set_db_filenames(STOCK_DBS *my_stock)
int
databases_close(STOCK_DBS *my_stock)
