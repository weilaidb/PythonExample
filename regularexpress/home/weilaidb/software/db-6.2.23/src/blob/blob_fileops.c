int
__blob_file_create(dbc, fhpp, blob_id)
DBC *dbc;
DB_FH **fhpp;
db_seq_t *blob_id;
int
__blob_file_close(dbc, fhp, flags)
DBC *dbc;
DB_FH *fhp;
u_int32_t flags;
int
__blob_file_delete(dbc, blob_id)
DBC *dbc;
db_seq_t blob_id;
int
__blob_file_open(dbp, fhpp, blob_id, flags, printerr)
DB *dbp;
DB_FH **fhpp;
db_seq_t blob_id;
u_int32_t flags;
int printerr;
int
__blob_file_read(env, fhp, dbt, offset, size)
ENV *env;
DB_FH *fhp;
DBT *dbt;
off_t offset;
u_int32_t size;
int
__blob_file_write(dbc, fhp, buf, offset, blob_id, file_size, flags)
DBC *dbc;
DB_FH *fhp;
DBT *buf;
off_t offset;
db_seq_t blob_id;
off_t *file_size;
u_int32_t flags;
