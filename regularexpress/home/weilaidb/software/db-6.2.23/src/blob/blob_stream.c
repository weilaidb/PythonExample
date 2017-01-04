static int __db_stream_close __P((DB_STREAM *, u_int32_t));
static int __db_stream_read
__P((DB_STREAM *, DBT *, db_off_t, u_int32_t, u_int32_t));
static int __db_stream_size __P((DB_STREAM *, db_off_t *, u_int32_t));
static int __db_stream_write __P((DB_STREAM *, DBT *, db_off_t, u_int32_t));
int
__db_stream_init(dbc, dbsp, flags)
DBC *dbc;
DB_STREAM **dbsp;
u_int32_t flags;
static int
__db_stream_close(dbs, flags)
DB_STREAM *dbs;
u_int32_t flags;
int
__db_stream_close_int(dbs)
DB_STREAM *dbs;
static int
__db_stream_read(dbs, data, offset, size, flags)
DB_STREAM *dbs;
DBT *data;
db_off_t offset;
u_int32_t size;
u_int32_t flags;
static int
__db_stream_size(dbs, size, flags)
DB_STREAM *dbs;
db_off_t *size;
u_int32_t flags;
static int
__db_stream_write(dbs, data, offset, flags)
DB_STREAM *dbs;
DBT *data;
db_off_t offset;
u_int32_t flags;
