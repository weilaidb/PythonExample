#define _DB_STL_CONTAINER_H__
START_NS(dbstl)
class ResourceManager;
class _exported db_container
;
class _exported BulkRetrievalOption
;
class _exported ReadModifyWriteOption
;
class _exported DbstlMultipleIterator : protected DbMultipleIterator
;
class _exported DbstlMultipleKeyDataIterator : public DbstlMultipleIterator
;
class _exported DbstlMultipleRecnoDataIterator : public DbstlMultipleIterator
;
class _exported DbstlMultipleDataIterator : public DbstlMultipleIterator
;
template <Typename T>
class DbstlInitializeDefault
;
template <Typename T>
class DbstlInitializeDefault<T *>
;
template <Typename T>
class DbstlInitializeDefault<const T *>
;
END_NS
