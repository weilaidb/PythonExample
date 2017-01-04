int
__blob_bulk(dbc, len, blob_id, dp)
DBC *dbc;
u_int32_t len;
db_seq_t blob_id;
u_int8_t *dp;
int
__blob_get(dbc, dbt, blob_id, file_size, bpp, bpsz)
DBC *dbc;
DBT *dbt;
db_seq_t blob_id;
off_t file_size;
void **bpp;
u_int32_t *bpsz;
int
__blob_put(dbc, dbt, blob_id, size, plsn)
DBC *dbc;
DBT *dbt;
db_seq_t *blob_id;
off_t *size;
DB_LSN *plsn;
int
__blob_repl(dbc, nval, blob_id, new_blob_id, size)
DBC *dbc;
DBT *nval;
db_seq_t blob_id;
db_seq_t *new_blob_id;
off_t *size;
int
__blob_del(dbc, blob_id)
DBC *dbc;
db_seq_t blob_id;
