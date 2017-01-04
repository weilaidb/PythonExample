int
__txn_env_create(dbenv)
DB_ENV *dbenv;
void
__txn_env_destroy(dbenv)
DB_ENV *dbenv;
int
__txn_get_tx_max(dbenv, tx_maxp)
DB_ENV *dbenv;
u_int32_t *tx_maxp;
int
__txn_set_tx_max(dbenv, tx_max)
DB_ENV *dbenv;
u_int32_t tx_max;
int
__txn_get_tx_timestamp(dbenv, timestamp)
DB_ENV *dbenv;
time_t *timestamp;
int
__txn_set_tx_timestamp(dbenv, timestamp)
DB_ENV *dbenv;
time_t *timestamp;
