#define	_DB_CXX_H_
#define	__DB_STD(x)	std::x
#define	__DB_STD(x)	x
class Db;
class Dbc;
class DbChannel;
class DbEnv;
class DbHeapRecordId;
class DbInfo;
class DbLock;
class DbLogc;
class DbLsn;
class DbMpoolFile;
class DbPreplist;
class DbSequence;
class DbSite;
class DbStream;
class Dbt;
class DbTxn;
class DbMultipleIterator;
class DbMultipleKeyDataIterator;
class DbMultipleRecnoDataIterator;
class DbMultipleDataIterator;
class DbException;
class DbDeadlockException;
class DbLockNotGrantedException;
class DbMemoryException;
class DbRepHandleDeadException;
class DbRunRecoveryException;
#if defined(_MSC_VER)
#  if defined(DB_CREATE_DLL)
#    define _exported __declspec(dllexport)
#  elif defined(DB_USE_DLL)
#    define _exported __declspec(dllimport)
#  else
#    define _exported
#  endif
#  define _exported
extern "C"
class _exported Db
;
class _exported Dbc : protected DBC
;
class _exported DbChannel
;
class _exported DbEnv
;
class _exported DbHeapRecordId : private DB_HEAP_RID
;
class _exported DbLock
;
class _exported DbLogc : protected DB_LOGC
;
class _exported DbLsn : public DB_LSN
;
class _exported DbMpoolFile
;
class _exported DbPreplist
;
class _exported DbSequence
;
class _exported DbSite
;
class _exported DbStream : protected DB_STREAM
;
class _exported DbTxn
;
class _exported Dbt : private DBT
;
class _exported DbMultipleIterator
;
class _exported DbMultipleKeyDataIterator : private DbMultipleIterator
;
class _exported DbMultipleRecnoDataIterator : private DbMultipleIterator
;
class _exported DbMultipleDataIterator : private DbMultipleIterator
;
class _exported DbMultipleBuilder
;
class _exported DbMultipleDataBuilder : DbMultipleBuilder
;
class _exported DbMultipleKeyDataBuilder : DbMultipleBuilder
;
class _exported DbMultipleRecnoDataBuilder
;
class _exported DbException : public __DB_STD(exception)
;
class _exported DbDeadlockException : public DbException
;
class _exported DbLockNotGrantedException : public DbException
;
class _exported DbMemoryException : public DbException
;
class _exported DbRepHandleDeadException : public DbException
;
class _exported DbRunRecoveryException : public DbException
;
