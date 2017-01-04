int
__dbt_usercopy(env, dbt)
ENV *env;
DBT *dbt;
void
__dbt_userfree(env, key, pkey, data)
ENV *env;
DBT *key, *pkey, *data;
int
__dbt_defcmp(dbp, a, b, locp)
DB *dbp;
const DBT *a, *b;
size_t *locp;
