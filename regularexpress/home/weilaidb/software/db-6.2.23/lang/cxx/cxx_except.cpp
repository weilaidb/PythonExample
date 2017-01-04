static const int MAX_DESCRIPTION_LENGTH = 1024;
static char *dupString(const char *s)
DbException::~DbException() throw()
DbException::DbException(int err)
:	err_(err)
,	dbenv_(0)
DbException::DbException(const char *description)
:	err_(0)
,	dbenv_(0)
DbException::DbException(const char *description, int err)
:	err_(err)
,	dbenv_(0)
DbException::DbException(const char *prefix, const char *description, int err)
:	err_(err)
,	dbenv_(0)
DbException::DbException(const DbException &that)
:	__DB_STD(exception)()
,	what_(dupString(that.what_))
,	err_(that.err_)
,	dbenv_(0)
DbException &DbException::operator = (const DbException &that)
void DbException::describe(const char *prefix, const char *description)
int DbException::get_errno() const
const char *DbException::what() const throw()
DbEnv *DbException::get_env() const
void DbException::set_env(DbEnv *dbenv)
static const char *memory_err_desc = "Dbt not large enough for available data";
DbMemoryException::~DbMemoryException() throw()
DbMemoryException::DbMemoryException(Dbt *dbt)
:	DbException(memory_err_desc, DB_BUFFER_SMALL)
,	dbt_(dbt)
DbMemoryException::DbMemoryException(const char *prefix, Dbt *dbt)
:	DbException(prefix, memory_err_desc, DB_BUFFER_SMALL)
,	dbt_(dbt)
DbMemoryException::DbMemoryException(const DbMemoryException &that)
:	DbException(that)
,	dbt_(that.dbt_)
DbMemoryException
&DbMemoryException::operator =(const DbMemoryException &that)
Dbt *DbMemoryException::get_dbt() const
DbDeadlockException::~DbDeadlockException() throw()
DbDeadlockException::DbDeadlockException(const char *description)
:	DbException(description, DB_LOCK_DEADLOCK)
DbDeadlockException::DbDeadlockException(const DbDeadlockException &that)
:	DbException(that)
DbDeadlockException
&DbDeadlockException::operator =(const DbDeadlockException &that)
DbLockNotGrantedException::~DbLockNotGrantedException() throw()
DbLockNotGrantedException::DbLockNotGrantedException(const char *prefix,
db_lockop_t op, db_lockmode_t mode, const Dbt *obj, const DbLock lock,
int index)
:	DbException(prefix, DbEnv::strerror(DB_LOCK_NOTGRANTED),
DB_LOCK_NOTGRANTED)
,	op_(op)
,	mode_(mode)
,	obj_(obj)
,	lock_(new DbLock(lock))
,	index_(index)
DbLockNotGrantedException::DbLockNotGrantedException(const char *description)
:	DbException(description, DB_LOCK_NOTGRANTED)
,	op_(DB_LOCK_GET)
,	mode_(DB_LOCK_NG)
,	obj_(NULL)
,	lock_(NULL)
,	index_(0)
DbLockNotGrantedException::DbLockNotGrantedException
(const DbLockNotGrantedException &that)
:	DbException(that)
DbLockNotGrantedException
&DbLockNotGrantedException::operator =(const DbLockNotGrantedException &that)
db_lockop_t DbLockNotGrantedException::get_op() const
db_lockmode_t DbLockNotGrantedException::get_mode() const
const Dbt* DbLockNotGrantedException::get_obj() const
DbLock* DbLockNotGrantedException::get_lock() const
int DbLockNotGrantedException::get_index() const
DbRepHandleDeadException::~DbRepHandleDeadException() throw()
DbRepHandleDeadException::DbRepHandleDeadException(const char *description)
:	DbException(description, DB_REP_HANDLE_DEAD)
DbRepHandleDeadException::DbRepHandleDeadException
(const DbRepHandleDeadException &that)
:	DbException(that)
DbRepHandleDeadException
&DbRepHandleDeadException::operator =(const DbRepHandleDeadException &that)
DbRunRecoveryException::~DbRunRecoveryException() throw()
DbRunRecoveryException::DbRunRecoveryException(const char *description)
:	DbException(description, DB_RUNRECOVERY)
DbRunRecoveryException::DbRunRecoveryException
(const DbRunRecoveryException &that)
:	DbException(that)
DbRunRecoveryException
&DbRunRecoveryException::operator =(const DbRunRecoveryException &that)
