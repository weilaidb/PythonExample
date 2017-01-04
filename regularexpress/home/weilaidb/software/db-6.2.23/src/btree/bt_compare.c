int
__bam_cmp(dbc, dbt, h, indx, func, cmpp, locp)
DBC *dbc;
const DBT *dbt;
PAGE *h;
u_int32_t indx;
int (*func)__P((DB *, const DBT *, const DBT *, size_t *));
int *cmpp;
size_t *locp;
size_t
__bam_defpfx(dbp, a, b)
DB *dbp;
const DBT *a, *b;
