#define _DB_STL_EXCEPTION_H
START_NS(dbstl)
using std::cerr;
void _exported throw_bdb_exception(const char *caller, int err_ret);
#define COPY_CONSTRUCTOR(type) type(const type& t) : DbstlException(t)
class _exported DbstlException : public DbException
;
class _exported NotEnoughMemoryException : public DbstlException
;
class _exported InvalidIteratorException : public DbstlException
;
class _exported InvalidCursorException : public DbstlException
;
class _exported InvalidDbtException : public DbstlException
;
class _exported FailedAssertionException : public DbstlException
;
class _exported NoSuchKeyException : public DbstlException
;
class _exported InvalidArgumentException : public DbstlException
;
class _exported NotSupportedException : public DbstlException
;
class _exported InvalidFunctionCall : public DbstlException
;
#undef COPY_CONSTRUCTOR
END_NS
