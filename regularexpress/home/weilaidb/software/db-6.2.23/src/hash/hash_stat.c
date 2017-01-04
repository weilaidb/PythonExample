static int __ham_stat_callback __P((DBC *, PAGE *, void *, int *));
int
__ham_stat(dbc, spp, flags)
DBC *dbc;
void *spp;
u_int32_t flags;
int
__ham_stat_print(dbc, flags)
DBC *dbc;
u_int32_t flags;
static int
__ham_stat_callback(dbc, pagep, cookie, putp)
DBC *dbc;
PAGE *pagep;
void *cookie;
int *putp;
void
__ham_print_cursor(dbc)
DBC *dbc;
int
__ham_stat(dbc, spp, flags)
DBC *dbc;
void *spp;
u_int32_t flags;
int
__ham_traverse(dbc, mode, callback, cookie, look_past_max)
DBC *dbc;
db_lockmode_t mode;
int (*callback) __P((DBC *, PAGE *, void *, int *));
void *cookie;
int look_past_max;
