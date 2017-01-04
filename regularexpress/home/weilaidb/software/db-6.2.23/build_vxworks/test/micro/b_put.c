static int b_put_usage(void);
static int b_put_secondary(DB *, const DBT *, const DBT *, DBT *);
int
b_put(int argc, char *argv[])
static int
b_put_secondary(dbp, pkey, pdata, skey)
DB *dbp;
const DBT *pkey, *pdata;
DBT *skey;
static int
b_put_usage()
