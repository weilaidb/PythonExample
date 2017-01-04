int
__db_alloc_dbt(env, dbt, tlen, nd, st, bpp, bpsz)
ENV *env;
DBT *dbt;
u_int32_t tlen;
u_int32_t *nd;
u_int32_t *st;
void **bpp;
u_int32_t *bpsz;
int
__db_goff(dbc, dbt, tlen, pgno, bpp, bpsz)
DBC *dbc;
DBT *dbt;
u_int32_t tlen;
db_pgno_t pgno;
void **bpp;
u_int32_t *bpsz;
int
__db_poff(dbc, dbt, pgnop)
DBC *dbc;
const DBT *dbt;
db_pgno_t *pgnop;
int
__db_ovref(dbc, pgno)
DBC *dbc;
db_pgno_t pgno;
int
__db_doff(dbc, pgno)
DBC *dbc;
db_pgno_t pgno;
int
__db_moff(dbc, dbt, pgno, tlen, cmpfunc, cmpp, locp)
DBC *dbc;
const DBT *dbt;
db_pgno_t pgno;
u_int32_t tlen;
int (*cmpfunc) __P((DB *, const DBT *, const DBT *, size_t *)), *cmpp;
size_t *locp;
int
__db_coff(dbc, dbt, match, cmpfunc, cmpp)
DBC *dbc;
const DBT *dbt, *match;
int (*cmpfunc) __P((DB *, const DBT *, const DBT *, size_t *)), *cmpp;
