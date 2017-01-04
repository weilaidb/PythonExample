int
__heap_pgin(dbp, pg, pp, cookie)
DB *dbp;
db_pgno_t pg;
void *pp;
DBT *cookie;
int
__heap_pgout(dbp, pg, pp, cookie)
DB *dbp;
db_pgno_t pg;
void *pp;
DBT *cookie;
int
__heap_mswap(env, pg)
ENV *env;
PAGE *pg;
