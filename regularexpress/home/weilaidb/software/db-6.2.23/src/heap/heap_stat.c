int
__heap_stat(dbc, spp, flags)
DBC *dbc;
void *spp;
u_int32_t flags;
int
__heap_stat_print(dbc, flags)
DBC *dbc;
u_int32_t flags;
void
__heap_print_cursor(dbc)
DBC *dbc;
int
__heap_stat_callback(dbc, h, cookie, putp)
DBC *dbc;
PAGE *h;
void *cookie;
int *putp;
int
__heap_stat(dbc, spp, flags)
DBC *dbc;
void *spp;
u_int32_t flags;
int
__heap_traverse(dbc, callback, cookie)
DBC *dbc;
int (*callback)__P((DBC *, PAGE *, void *, int *));
void *cookie;
