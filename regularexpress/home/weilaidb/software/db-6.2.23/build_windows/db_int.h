#define	_DB_INT_H_
#if defined(HAVE_REPLICATION_THREADS)
#if TIME_WITH_SYS_TIME
#if HAVE_SYS_TIME_H
#if defined(HAVE_REPLICATION_THREADS)
#if defined(DB_WIN32) && defined(_MSC_VER) && \
!defined(DB_CREATE_DLL) && !defined(_LIB)
#define	__DB_IMPORT __declspec(dllimport)
#define	__DB_IMPORT
#undef	DB_DBM_HSEARCH
#define	DB_DBM_HSEARCH 1
#if defined(__cplusplus)
extern "C"
#define	DBENV_LOGGING(env)						\
(LOGGING_ON(env) && !IS_REP_CLIENT(env) && (!IS_RECOVERING(env)))
#if defined(DIAGNOSTIC) || defined(DEBUG_ROP)  || defined(DEBUG_WOP)
#define	DBC_LOGGING(dbc)	__dbc_logging(dbc)
#define	DBC_LOGGING(dbc)						\
((dbc)->txn != NULL && LOGGING_ON((dbc)->env) &&		\
!F_ISSET((dbc), DBC_RECOVER) && !IS_REP_CLIENT((dbc)->env))
