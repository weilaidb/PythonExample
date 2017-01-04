#define	_DB_CXX_INT_H_
#define	WRAPPED_CLASS(_WRAPPER_CLASS, _IMP_CLASS, _WRAPPED_TYPE)           \
class _IMP_CLASS ;                                               \
\
inline _WRAPPED_TYPE *unwrap(_WRAPPER_CLASS *val)                  \
\
\
inline const _WRAPPED_TYPE *unwrapConst(const _WRAPPER_CLASS *val) \
WRAPPED_CLASS(Db, DbImp, DB)
WRAPPED_CLASS(DbChannel, DbChannelImp, DB_CHANNEL)
WRAPPED_CLASS(DbEnv, DbEnvImp, DB_ENV)
WRAPPED_CLASS(DbMpoolFile, DbMpoolFileImp, DB_MPOOLFILE)
WRAPPED_CLASS(DbSequence, DbSequenceImp, DB_SEQUENCE)
WRAPPED_CLASS(DbSite, DbSiteImp, DB_SITE)
WRAPPED_CLASS(DbTxn, DbTxnImp, DB_TXN)
#define	ON_ERROR_THROW     1
#define	ON_ERROR_RETURN    0
#define	ON_ERROR_UNKNOWN   (-1)
#define	DB_ERROR(dbenv, caller, ecode, policy) \
DbEnv::runtime_error(dbenv, caller, ecode, policy)
#define	DB_ERROR_DBT(dbenv, caller, dbt, policy) \
DbEnv::runtime_error_dbt(dbenv, caller, dbt, policy)
#define	DB_OVERFLOWED_DBT(dbt) \
(F_ISSET(dbt, DB_DBT_USERMEM) && dbt->size > dbt->ulen)
#define	DB_CXX_PRIVATE_ENV      0x00000001
