int
__bam_pgin(dbp, pg, pp, cookie)
DB *dbp;
db_pgno_t pg;
void *pp;
DBT *cookie;
int
__bam_pgout(dbp, pg, pp, cookie)
DB *dbp;
db_pgno_t pg;
void *pp;
DBT *cookie;
int
__bam_mswap(env, pg)
ENV *env;
PAGE *pg;
