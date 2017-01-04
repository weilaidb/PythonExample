#define	ISSET_MAP(M, N)	((M)[(N) / 32] & (1 << ((N) % 32)))
#define	CLEAR_MAP(M, N)
#define	SET_MAP(M, B)	((M)[(B) / 32] |= (1 << ((B) % 32)))
#define	CLR_MAP(M, B)	((M)[(B) / 32] &= ~((u_int)1 << ((B) % 32)))
#define	OR_MAP(D, S, N)
#define	BAD_KILLID	0xffffffff
typedef struct  locker_info;
static int __dd_abort __P((ENV *, locker_info *, int *));
static int __dd_build __P((ENV *, u_int32_t, u_int32_t **,
u_int32_t *, u_int32_t *, locker_info **, int*, int*));
static int __dd_find __P((ENV *,
u_int32_t *, locker_info *, u_int32_t, u_int32_t, u_int32_t ***));
static int __dd_isolder __P((u_int32_t, u_int32_t, u_int32_t, u_int32_t));
static int __dd_verify __P((locker_info *, u_int32_t *, u_int32_t *,
u_int32_t *, u_int32_t, u_int32_t, u_int32_t));
static void __dd_debug
__P((ENV *, locker_info *, u_int32_t *, u_int32_t, u_int32_t));
int
__lock_detect_pp(dbenv, flags, atype, rejectp)
DB_ENV *dbenv;
u_int32_t flags, atype;
int *rejectp;
int
__lock_detect(env, atype, rejectp)
ENV *env;
u_int32_t atype;
int *rejectp;
#define	DD_INVALID_ID	((u_int32_t) -1)
static int
__dd_build(env, atype, bmp, nlockers, allocp, idmap, rejectp, pri_set)
ENV *env;
u_int32_t atype, **bmp, *nlockers, *allocp;
locker_info **idmap;
int *pri_set, *rejectp;
static int
__dd_find(env, bmp, idmap, nlockers, nalloc, deadp)
ENV *env;
u_int32_t *bmp, nlockers, nalloc;
locker_info *idmap;
u_int32_t ***deadp;
static int
__dd_abort(env, info, statusp)
ENV *env;
locker_info *info;
int *statusp;
static void
__dd_debug(env, idmap, bitmap, nlockers, nalloc)
ENV *env;
locker_info *idmap;
u_int32_t *bitmap, nlockers, nalloc;
static int
__dd_verify(idmap, deadmap, tmpmap, origmap, nlockers, nalloc, which)
locker_info *idmap;
u_int32_t *deadmap, *tmpmap, *origmap;
u_int32_t nlockers, nalloc, which;
static int
__dd_isolder(a, b, lock_max, txn_max)
u_int32_t	a, b;
u_int32_t	lock_max, txn_max;
