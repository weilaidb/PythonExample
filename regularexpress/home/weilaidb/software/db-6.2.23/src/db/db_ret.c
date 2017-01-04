int
__db_ret(dbc, h, indx, dbt, memp, memsize)
DBC *dbc;
PAGE *h;
u_int32_t indx;
DBT *dbt;
void **memp;
u_int32_t *memsize;
int
__db_retcopy(env, dbt, data, len, memp, memsize)
ENV *env;
DBT *dbt;
void *data;
u_int32_t len;
void **memp;
u_int32_t *memsize;
int
__db_dbt_clone(env, dest, src)
ENV *env;
DBT *dest;
const DBT *src;
int
__db_dbt_clone_free(env, dbt)
ENV *env;
DBT *dbt;
