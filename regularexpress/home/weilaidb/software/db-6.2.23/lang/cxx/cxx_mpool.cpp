#define	DB_MPOOLFILE_METHOD(_name, _argspec, _arglist, _retok)		\
int DbMpoolFile::_name _argspec						\
#define	DB_MPOOLFILE_METHOD_VOID(_name, _argspec, _arglist)		\
void DbMpoolFile::_name _argspec					\
DbMpoolFile::DbMpoolFile()
:	imp_(0)
DbMpoolFile::~DbMpoolFile()
int DbMpoolFile::close(u_int32_t flags)
DB_MPOOLFILE_METHOD(get,
(db_pgno_t *pgnoaddr, DbTxn *txn, u_int32_t flags, void *pagep),
(mpf, pgnoaddr, unwrap(txn), flags, pagep), DB_RETOK_MPGET)
DB_MPOOLFILE_METHOD(open,
(const char *file, u_int32_t flags, int mode, size_t pagesize),
(mpf, file, flags, mode, pagesize), DB_RETOK_STD)
DB_MPOOLFILE_METHOD(put,
(void *pgaddr, DB_CACHE_PRIORITY priority, u_int32_t flags),
(mpf, pgaddr, priority, flags), DB_RETOK_STD)
DB_MPOOLFILE_METHOD(get_clear_len, (u_int32_t *lenp),
(mpf, lenp), DB_RETOK_STD)
DB_MPOOLFILE_METHOD(set_clear_len, (u_int32_t len),
(mpf, len), DB_RETOK_STD)
DB_MPOOLFILE_METHOD(get_fileid, (u_int8_t *fileid),
(mpf, fileid), DB_RETOK_STD)
DB_MPOOLFILE_METHOD(set_fileid, (u_int8_t *fileid),
(mpf, fileid), DB_RETOK_STD)
DB_MPOOLFILE_METHOD(get_flags, (u_int32_t *flagsp),
(mpf, flagsp), DB_RETOK_STD)
DB_MPOOLFILE_METHOD(set_flags, (u_int32_t flags, int onoff),
(mpf, flags, onoff), DB_RETOK_STD)
DB_MPOOLFILE_METHOD(get_ftype, (int *ftypep),
(mpf, ftypep), DB_RETOK_STD)
DB_MPOOLFILE_METHOD(set_ftype, (int ftype),
(mpf, ftype), DB_RETOK_STD)
DB_MPOOLFILE_METHOD(get_last_pgno, (db_pgno_t *pgnop),
(mpf, pgnop), DB_RETOK_STD)
DB_MPOOLFILE_METHOD(get_lsn_offset, (int32_t *offsetp),
(mpf, offsetp), DB_RETOK_STD)
DB_MPOOLFILE_METHOD(set_lsn_offset, (int32_t offset),
(mpf, offset), DB_RETOK_STD)
DB_MPOOLFILE_METHOD(get_maxsize, (u_int32_t *gbytesp, u_int32_t *bytesp),
(mpf, gbytesp, bytesp), DB_RETOK_STD)
DB_MPOOLFILE_METHOD(set_maxsize, (u_int32_t gbytes, u_int32_t bytes),
(mpf, gbytes, bytes), DB_RETOK_STD)
DB_MPOOLFILE_METHOD(get_pgcookie, (DBT *dbt),
(mpf, dbt), DB_RETOK_STD)
DB_MPOOLFILE_METHOD(set_pgcookie, (DBT *dbt),
(mpf, dbt), DB_RETOK_STD)
DB_MPOOLFILE_METHOD(get_priority, (DB_CACHE_PRIORITY *priorityp),
(mpf, priorityp), DB_RETOK_STD)
DB_MPOOLFILE_METHOD(set_priority, (DB_CACHE_PRIORITY priority),
(mpf, priority), DB_RETOK_STD)
DB_MPOOLFILE_METHOD(sync, (),
(mpf), DB_RETOK_STD)
