typedef enum  RLOCK;
static int __logc_close_pp __P((DB_LOGC *, u_int32_t));
static int __logc_get_pp __P((DB_LOGC *, DB_LSN *, DBT *, u_int32_t));
static int __logc_get_int __P((DB_LOGC *, DB_LSN *, DBT *, u_int32_t));
static int __logc_hdrchk __P((DB_LOGC *, DB_LSN *, HDR *, int *));
static int __logc_incursor __P((DB_LOGC *, DB_LSN *, HDR *, u_int8_t **));
static int __logc_inregion __P((DB_LOGC *,
DB_LSN *, RLOCK *, DB_LSN *, HDR *, u_int8_t **, int *));
static int __logc_io __P((DB_LOGC *,
u_int32_t, u_int32_t, void *, size_t *, int *));
static int __logc_ondisk __P((DB_LOGC *,
DB_LSN *, DB_LSN *, u_int32_t, HDR *, u_int8_t **, int *));
static int __logc_set_maxrec __P((DB_LOGC *, char *));
static int __logc_shortread __P((DB_LOGC *, DB_LSN *, int));
static int __logc_version_pp __P((DB_LOGC *, u_int32_t *, u_int32_t));
int
__log_cursor_pp(dbenv, logcp, flags)
DB_ENV *dbenv;
DB_LOGC **logcp;
u_int32_t flags;
int
__log_cursor(env, logcp)
ENV *env;
DB_LOGC **logcp;
static int
__logc_close_pp(logc, flags)
DB_LOGC *logc;
u_int32_t flags;
int
__logc_close(logc)
DB_LOGC *logc;
static int
__logc_version_pp(logc, versionp, flags)
DB_LOGC *logc;
u_int32_t *versionp;
u_int32_t flags;
int
__logc_version(logc, versionp)
DB_LOGC *logc;
u_int32_t *versionp;
static int
__logc_get_pp(logc, alsn, dbt, flags)
DB_LOGC *logc;
DB_LSN *alsn;
DBT *dbt;
u_int32_t flags;
int
__logc_get(logc, alsn, dbt, flags)
DB_LOGC *logc;
DB_LSN *alsn;
DBT *dbt;
u_int32_t flags;
static int
__logc_get_int(logc, alsn, dbt, flags)
DB_LOGC *logc;
DB_LSN *alsn;
DBT *dbt;
u_int32_t flags;
static int
__logc_incursor(logc, lsn, hdr, pp)
DB_LOGC *logc;
DB_LSN *lsn;
HDR *hdr;
u_int8_t **pp;
static int
__logc_inregion(logc, lsn, rlockp, last_lsn, hdr, pp, need_cksump)
DB_LOGC *logc;
DB_LSN *lsn, *last_lsn;
RLOCK *rlockp;
HDR *hdr;
u_int8_t **pp;
int *need_cksump;
void
__log_hdrswap(hdr, is_hmac)
HDR *hdr;
int is_hmac;
void
__log_persistswap(persist)
LOGP *persist;
static int
__logc_ondisk(logc, lsn, last_lsn, flags, hdr, pp, eofp)
DB_LOGC *logc;
DB_LSN *lsn, *last_lsn;
u_int32_t flags;
int *eofp;
HDR *hdr;
u_int8_t **pp;
static int
__logc_hdrchk(logc, lsn, hdr, eofp)
DB_LOGC *logc;
DB_LSN *lsn;
HDR *hdr;
int *eofp;
static int
__logc_io(logc, fnum, offset, p, nrp, eofp)
DB_LOGC *logc;
u_int32_t fnum, offset;
void *p;
size_t *nrp;
int *eofp;
static int
__logc_shortread(logc, lsn, check_silent)
DB_LOGC *logc;
DB_LSN *lsn;
int check_silent;
static int
__logc_set_maxrec(logc, np)
DB_LOGC *logc;
char *np;
int
__log_read_record_pp(dbenv, dbpp, td, recbuf, spec, size, argpp)
DB_ENV *dbenv;
DB **dbpp;
void *td;
void *recbuf;
DB_LOG_RECSPEC *spec;
u_int32_t size;
void **argpp;
int
__log_read_record(env, dbpp, td, recbuf, spec, size, argpp)
ENV *env;
DB **dbpp;
void *td;
void *recbuf;
DB_LOG_RECSPEC *spec;
u_int32_t size;
void **argpp;
