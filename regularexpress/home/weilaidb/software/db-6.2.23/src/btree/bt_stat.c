int
__bam_stat(dbc, spp, flags)
DBC *dbc;
void *spp;
u_int32_t flags;
int
__bam_stat_print(dbc, flags)
DBC *dbc;
u_int32_t flags;
int
__bam_stat_callback(dbc, h, cookie, putp)
DBC *dbc;
PAGE *h;
void *cookie;
int *putp;
void
__bam_print_cursor(dbc)
DBC *dbc;
int
__bam_stat(dbc, spp, flags)
DBC *dbc;
void *spp;
u_int32_t flags;
int
__bam_stat_print(dbc, flags)
DBC *dbc;
u_int32_t flags;
int
__bam_key_range(dbc, dbt, kp, flags)
DBC *dbc;
DBT *dbt;
DB_KEY_RANGE *kp;
u_int32_t flags;
int
__bam_traverse(dbc, mode, root_pgno, callback, cookie)
DBC *dbc;
db_lockmode_t mode;
db_pgno_t root_pgno;
int (*callback)__P((DBC *, PAGE *, void *, int *));
void *cookie;
