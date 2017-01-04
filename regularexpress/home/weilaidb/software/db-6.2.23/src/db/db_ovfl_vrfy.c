int
__db_vrfy_overflow(dbp, vdp, h, pgno, flags)
DB *dbp;
VRFY_DBINFO *vdp;
PAGE *h;
db_pgno_t pgno;
u_int32_t flags;
int
__db_vrfy_ovfl_structure(dbp, vdp, pgno, tlen, flags)
DB *dbp;
VRFY_DBINFO *vdp;
db_pgno_t pgno;
u_int32_t tlen;
u_int32_t flags;
int
__db_safe_goff(dbp, vdp, pgno, dbt, buf, bufsz, flags)
DB *dbp;
VRFY_DBINFO *vdp;
db_pgno_t pgno;
DBT *dbt;
void *buf;
u_int32_t *bufsz;
u_int32_t flags;
