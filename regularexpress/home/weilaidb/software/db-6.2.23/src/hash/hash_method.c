static int __ham_set_h_ffactor __P((DB *, u_int32_t));
static int __ham_get_h_hash
__P((DB *, u_int32_t(**)(DB *, const void *, u_int32_t)));
static int __ham_set_h_hash
__P((DB *, u_int32_t(*)(DB *, const void *, u_int32_t)));
static int __ham_set_h_nelem __P((DB *, u_int32_t));
static int __ham_get_h_compare
__P((DB *, int (**)(DB *, const DBT *, const DBT *, size_t *)));
int
__ham_db_create(dbp)
DB *dbp;
int
__ham_db_close(dbp)
DB *dbp;
int
__ham_get_h_ffactor(dbp, h_ffactorp)
DB *dbp;
u_int32_t *h_ffactorp;
static int
__ham_set_h_ffactor(dbp, h_ffactor)
DB *dbp;
u_int32_t h_ffactor;
static int
__ham_get_h_hash(dbp, funcp)
DB *dbp;
u_int32_t (**funcp) __P((DB *, const void *, u_int32_t));
static int
__ham_set_h_hash(dbp, func)
DB *dbp;
u_int32_t (*func) __P((DB *, const void *, u_int32_t));
static int
__ham_get_h_compare(dbp, funcp)
DB *dbp;
int (**funcp) __P((DB *, const DBT *, const DBT *, size_t *));
int
__ham_set_h_compare(dbp, func)
DB *dbp;
int (*func) __P((DB *, const DBT *, const DBT *, size_t *));
int
__ham_get_h_nelem(dbp, h_nelemp)
DB *dbp;
u_int32_t *h_nelemp;
static int
__ham_set_h_nelem(dbp, h_nelem)
DB *dbp;
u_int32_t h_nelem;
void
__ham_copy_config(src, dst, nparts)
const DB *src;
DB *dst;
u_int32_t nparts;
