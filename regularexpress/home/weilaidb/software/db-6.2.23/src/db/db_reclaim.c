int
__db_traverse_big(dbc, pgno, callback, cookie)
DBC *dbc;
db_pgno_t pgno;
int (*callback) __P((DBC *, PAGE *, void *, int *));
void *cookie;
int
__db_reclaim_callback(dbc, p, cookie, putp)
DBC *dbc;
PAGE *p;
void *cookie;
int *putp;
int
__db_truncate_callback(dbc, p, cookie, putp)
DBC *dbc;
PAGE *p;
void *cookie;
int *putp;
