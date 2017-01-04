#define	DBC_METHOD(_name, _argspec, _arglist, _retok)			\
int Dbc::_name _argspec							\
Dbc::~Dbc()
DBC_METHOD(close, (void), (dbc), DB_RETOK_STD)
DBC_METHOD(cmp, (Dbc *other_cursor, int *result, u_int32_t _flags),
(dbc, other_cursor, result, _flags), DB_RETOK_STD)
DBC_METHOD(count, (db_recno_t *countp, u_int32_t _flags),
(dbc, countp, _flags), DB_RETOK_STD)
int Dbc::db_stream(DbStream** dbsp, u_int32_t _flags)
DBC_METHOD(del, (u_int32_t _flags),
(dbc, _flags), DB_RETOK_DBCDEL)
int Dbc::dup(Dbc** cursorp, u_int32_t _flags)
int Dbc::get(Dbt* key, Dbt *data, u_int32_t _flags)
int Dbc::pget(Dbt* key, Dbt *pkey, Dbt *data, u_int32_t _flags)
DBC_METHOD(put, (Dbt* key, Dbt *data, u_int32_t _flags),
(dbc, key, data, _flags), DB_RETOK_DBCPUT)
DBC_METHOD(get_priority, (DB_CACHE_PRIORITY *priorityp),
(dbc, priorityp), DB_RETOK_STD)
DBC_METHOD(set_priority, (DB_CACHE_PRIORITY pri), (dbc, pri), DB_RETOK_STD)
