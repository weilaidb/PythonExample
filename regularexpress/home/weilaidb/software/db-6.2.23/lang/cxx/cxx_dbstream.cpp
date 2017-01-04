#define	DBSTREAM_METHOD(_name, _argspec, _arglist)			\
int DbStream::_name _argspec						\
DbStream::~DbStream()
DBSTREAM_METHOD(close, (u_int32_t _flags), (dbs, _flags));
DBSTREAM_METHOD(read,
(Dbt *data, db_off_t offset, u_int32_t size, u_int32_t _flags),
(dbs, data, offset, size, _flags));
DBSTREAM_METHOD(size, (db_off_t *size, u_int32_t _flags),
(dbs, size, _flags));
DBSTREAM_METHOD(write, (Dbt *data, db_off_t offset, u_int32_t _flags),
(dbs, data, offset, _flags));
