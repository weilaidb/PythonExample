DbLock::DbLock(DB_LOCK value)
:	lock_(value)
DbLock::DbLock()
DbLock::DbLock(const DbLock &that)
:	lock_(that.lock_)
DbLock &DbLock::operator = (const DbLock &that)