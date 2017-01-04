int get_customer_name(DB *, const DBT *, const DBT *, DBT *);
int get_engineer_name(DB *, const DBT *, const DBT *, DBT *);
int get_customer_name(DB *sdbp, const DBT *pkey, const DBT *pdata, DBT *skey)
int get_engineer_name(DB *sdbp, const DBT *pkey, const DBT *pdata, DBT *skey)
int open_database(DB **dbpp, const char * file_name,DB_ENV *dbenv,
const char *program_name, FILE *error_file_pointer, int is_secondary)
void initialize_aftersaledbs(AFTERSALE_DBS *my_aftersale)
void set_db_filenames(AFTERSALE_DBS *my_aftersale)
int databases_setup(AFTERSALE_DBS *my_aftersale, const char *program_name,
FILE *error_file_pointer)
int databases_close(AFTERSALE_DBS *my_aftersale)
