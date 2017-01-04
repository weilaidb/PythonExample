static int  __heap_bulk __P((DBC *, DBT *, u_int32_t));
static int  __heap_getpage __P((DBC *, u_int32_t, u_int8_t *));
static int  __heapc_close __P((DBC *, db_pgno_t, int *));
static int  __heapc_del __P((DBC *, u_int32_t));
static int  __heapc_destroy __P((DBC *));
static int  __heapc_get __P((DBC *, DBT *, DBT *, u_int32_t, db_pgno_t *));
static int  __heapc_put __P((DBC *, DBT *, DBT *, u_int32_t, db_pgno_t *));
static int  __heapc_reloc __P((DBC *, DBT *, DBT *));
static int  __heapc_reloc_partial __P((DBC *, DBT *, DBT *));
static void  __heapc_search __P((DBC *, HEAPPG *, unsigned,
int, db_indx_t *, int *));
static int  __heapc_split __P((DBC *, DBT *, DBT *, int));
#undef  ACQUIRE
#define	ACQUIRE(dbc, mode, lpgno, lock, fpgno, pagep, flags, mflags, ret) do  while (0)
#undef  ACQUIRE_CUR
#define	ACQUIRE_CUR(dbc, mode, p, flags, mflags, ret) do  while (0)
#undef  DISCARD
#define	DISCARD(dbc, pagep, lock, tlock, ret) do  while (0)
int
__heapc_init(dbc)
DBC *dbc;
static int
__heap_bulk(dbc, data, flags)
DBC *dbc;
DBT *data;
u_int32_t flags;
static int
__heapc_close(dbc, root_pgno, rmroot)
DBC *dbc;
db_pgno_t root_pgno;
int *rmroot;
static int
__heapc_del(dbc, flags)
DBC *dbc;
u_int32_t flags;
int
__heap_ditem(dbc, pagep, indx, nbytes)
DBC *dbc;
PAGE *pagep;
u_int32_t indx, nbytes;
static int
__heapc_destroy(dbc)
DBC *dbc;
static int
__heapc_get(dbc, key, data, flags, pgnop)
DBC *dbc;
DBT *key;
DBT *data;
u_int32_t flags;
db_pgno_t *pgnop;
static void
__heapc_search(dbc, dpage, begin, dir, indxp, found)
DBC *dbc;
HEAPPG *dpage;
unsigned begin;
int dir;
db_indx_t *indxp;
int *found;
#undef	IS_FIRST
#define	IS_FIRST (last_rid.pgno == PGNO_INVALID)
static int
__heapc_reloc_partial(dbc, key, data)
DBC *dbc;
DBT *key;
DBT *data;
static int
__heapc_reloc(dbc, key, data)
DBC *dbc;
DBT *key;
DBT *data;
static int
__heapc_put(dbc, key, data, flags, pgnop)
DBC *dbc;
DBT *key;
DBT *data;
u_int32_t flags;
db_pgno_t *pgnop;
static int
__heap_getpage(dbc, size, avail)
DBC *dbc;
u_int32_t size;
u_int8_t *avail;
int
__heap_append(dbc, key, data)
DBC *dbc;
DBT *data, *key;
static int
__heapc_split(dbc, key, data, is_first)
DBC *dbc;
DBT *key, *data;
int is_first;
int
__heap_pitem(dbc, pagep, indx, nbytes, hdr, data)
DBC *dbc;
PAGE *pagep;
u_int32_t indx;
u_int32_t nbytes;
DBT *hdr, *data;
int
__heapc_dup(orig_dbc, new_dbc)
DBC *orig_dbc, *new_dbc;
int
__heapc_gsplit(dbc, dbt, bpp, bpsz)
DBC *dbc;
DBT *dbt;
void **bpp;
u_int32_t *bpsz;
int
__heapc_refresh(dbc)
DBC *dbc;
