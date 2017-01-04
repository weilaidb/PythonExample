static int compare_uint32(DB *, const DBT *, const DBT *, size_t *);
int
csv_env_open(const char *home, int is_rdonly)
int
csv_env_close()
int
csv_secondary_open()
int
csv_secondary_close()
static int
compare_uint32(DB *db_arg, const DBT *a_arg, const DBT *b_arg, size_t *locp)
