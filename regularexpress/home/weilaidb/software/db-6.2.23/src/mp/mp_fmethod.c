static int __memp_get_clear_len __P((DB_MPOOLFILE *, u_int32_t *));
static int __memp_get_lsn_offset __P((DB_MPOOLFILE *, int32_t *));
static int __memp_get_maxsize __P((DB_MPOOLFILE *, u_int32_t *, u_int32_t *));
static int __memp_set_maxsize __P((DB_MPOOLFILE *, u_int32_t, u_int32_t));
static int __memp_set_priority __P((DB_MPOOLFILE *, DB_CACHE_PRIORITY));
static int __memp_get_last_pgno_pp __P((DB_MPOOLFILE *, db_pgno_t *));
int
__memp_fcreate_pp(dbenv, retp, flags)
DB_ENV *dbenv;
DB_MPOOLFILE **retp;
u_int32_t flags;
int
__memp_fcreate(env, retp)
ENV *env;
DB_MPOOLFILE **retp;
static int
__memp_get_clear_len(dbmfp, clear_lenp)
DB_MPOOLFILE *dbmfp;
u_int32_t *clear_lenp;
int
__memp_set_clear_len(dbmfp, clear_len)
DB_MPOOLFILE *dbmfp;
u_int32_t clear_len;
int
__memp_get_fileid(dbmfp, fileid)
DB_MPOOLFILE *dbmfp;
u_int8_t *fileid;
int
__memp_set_fileid(dbmfp, fileid)
DB_MPOOLFILE *dbmfp;
u_int8_t *fileid;
int
__memp_get_flags(dbmfp, flagsp)
DB_MPOOLFILE *dbmfp;
u_int32_t *flagsp;
int
__memp_set_flags(dbmfp, flags, onoff)
DB_MPOOLFILE *dbmfp;
u_int32_t flags;
int onoff;
int
__memp_get_ftype(dbmfp, ftypep)
DB_MPOOLFILE *dbmfp;
int *ftypep;
int
__memp_set_ftype(dbmfp, ftype)
DB_MPOOLFILE *dbmfp;
int ftype;
static int
__memp_get_lsn_offset(dbmfp, lsn_offsetp)
DB_MPOOLFILE *dbmfp;
int32_t *lsn_offsetp;
int
__memp_set_lsn_offset(dbmfp, lsn_offset)
DB_MPOOLFILE *dbmfp;
int32_t lsn_offset;
static int
__memp_get_maxsize(dbmfp, gbytesp, bytesp)
DB_MPOOLFILE *dbmfp;
u_int32_t *gbytesp, *bytesp;
void
__memp_set_maxpgno(mfp, gbytes, bytes)
MPOOLFILE *mfp;
u_int32_t gbytes, bytes;
static int
__memp_set_maxsize(dbmfp, gbytes, bytes)
DB_MPOOLFILE *dbmfp;
u_int32_t gbytes, bytes;
int
__memp_get_pgcookie(dbmfp, pgcookie)
DB_MPOOLFILE *dbmfp;
DBT *pgcookie;
int
__memp_set_pgcookie(dbmfp, pgcookie)
DB_MPOOLFILE *dbmfp;
DBT *pgcookie;
int
__memp_get_priority(dbmfp, priorityp)
DB_MPOOLFILE *dbmfp;
DB_CACHE_PRIORITY *priorityp;
static int
__memp_set_priority(dbmfp, priority)
DB_MPOOLFILE *dbmfp;
DB_CACHE_PRIORITY priority;
int
__memp_get_last_pgno(dbmfp, pgnoaddr)
DB_MPOOLFILE *dbmfp;
db_pgno_t *pgnoaddr;
static int
__memp_get_last_pgno_pp(dbmfp, pgnoaddr)
DB_MPOOLFILE *dbmfp;
db_pgno_t *pgnoaddr;
char *
__memp_fn(dbmfp)
DB_MPOOLFILE *dbmfp;
char *
__memp_fns(dbmp, mfp)
DB_MPOOL *dbmp;
MPOOLFILE *mfp;
