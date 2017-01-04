#define _DB_STL_DBC_H
START_NS(dbstl)
class db_container;
class DbCursorBase;
template<Typename data_dt>
class RandDbCursor;
class DbstlMultipleKeyDataIterator;
class DbstlMultipleRecnoDataIterator;
using std::set;
template <Typename BaseType>
class LazyDupCursor
;
class DbCursorBase
;
template<typename key_dt, typename data_dt>
class DbCursor : public DbCursorBase;
typedef db_recno_t index_type;
template<Typename data_dt>
class RandDbCursor : public DbCursor<index_type, data_dt>
;
END_NS
