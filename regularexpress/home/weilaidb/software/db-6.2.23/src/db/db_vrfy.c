static u_int __db_guesspgsize __P((ENV *, DB_FH *));
static int   __db_is_valid_magicno __P((u_int32_t, DBTYPE *));
static int   __db_meta2pgset
__P((DB *, VRFY_DBINFO *, db_pgno_t, u_int32_t, DB *));
static int   __db_salvage __P((DB *, VRFY_DBINFO *,
db_pgno_t, void *, int (*)(void *, const void *), u_int32_t));
static int   __db_salvage_subdbpg __P((DB *, VRFY_DBINFO *,
PAGE *, void *, int (*)(void *, const void *), u_int32_t));
static int   __db_salvage_all __P((DB *, VRFY_DBINFO *, void *,
int(*)(void *, const void *), u_int32_t, int *));
static int   __db_salvage_unknowns __P((DB *, VRFY_DBINFO *, void *,
int (*)(void *, const void *), u_int32_t));
static int   __db_verify_arg __P((DB *, const char *, void *, u_int32_t));
static int   __db_vrfy_freelist
__P((DB *, VRFY_DBINFO *, db_pgno_t, u_int32_t));
static int   __db_vrfy_getpagezero
__P((DB *, DB_FH *, const char *, u_int8_t *, u_int32_t));
static int   __db_vrfy_invalid
__P((DB *, VRFY_DBINFO *, PAGE *, db_pgno_t, u_int32_t));
static int   __db_vrfy_orderchkonly __P((DB *,
VRFY_DBINFO *, const char *, const char *, u_int32_t));
static int   __db_vrfy_pagezero __P((DB *,
VRFY_DBINFO *, DB_FH *, const char *, u_int32_t));
static int   __db_vrfy_subdbs
__P((DB *, VRFY_DBINFO *, const char *, u_int32_t));
static int   __db_vrfy_structure __P((DB *, VRFY_DBINFO *,
const char *, db_pgno_t, void *, void *, u_int32_t));
static int   __db_vrfy_walkpages __P((DB *, VRFY_DBINFO *,
void *, int (*)(void *, const void *), u_int32_t));
#define	VERIFY_FLAGS							\
(DB_AGGRESSIVE |							\
DB_NOORDERCHK | DB_ORDERCHKONLY | DB_PRINTABLE | DB_SALVAGE | DB_UNREF)
int
__db_verify_pp(dbp, file, database, outfile, flags)
DB *dbp;
const char *file, *database;
FILE *outfile;
u_int32_t flags;
int
__db_verify_internal(dbp, fname, dname, handle, callback, flags)
DB *dbp;
const char *fname, *dname;
void *handle;
int (*callback) __P((void *, const void *));
u_int32_t flags;
static int
__db_verify_arg(dbp, dname, handle, flags)
DB *dbp;
const char *dname;
void *handle;
u_int32_t flags;
int
__db_verify(dbp, ip, name, subdb, handle, callback, lp, rp, flags)
DB *dbp;
DB_THREAD_INFO *ip;
const char *name, *subdb;
void *handle;
int (*callback) __P((void *, const void *));
void *lp, *rp;
u_int32_t flags;
static int
__db_vrfy_getpagezero(dbp, fhp, name, mbuf, flags)
DB *dbp;
DB_FH *fhp;
const char *name;
u_int8_t *mbuf;
u_int32_t flags;
static int
__db_vrfy_pagezero(dbp, vdp, fhp, name, flags)
DB *dbp;
VRFY_DBINFO *vdp;
DB_FH *fhp;
const char *name;
u_int32_t flags;
static int
__db_vrfy_walkpages(dbp, vdp, handle, callback, flags)
DB *dbp;
VRFY_DBINFO *vdp;
void *handle;
int (*callback) __P((void *, const void *));
u_int32_t flags;
static int
__db_vrfy_structure(dbp, vdp, dbname, meta_pgno, lp, rp, flags)
DB *dbp;
VRFY_DBINFO *vdp;
const char *dbname;
db_pgno_t meta_pgno;
void *lp, *rp;
u_int32_t flags;
static int
__db_is_valid_magicno(magic, typep)
u_int32_t magic;
DBTYPE *typep;
int
__db_vrfy_common(dbp, vdp, h, pgno, flags)
DB *dbp;
VRFY_DBINFO *vdp;
PAGE *h;
db_pgno_t pgno;
u_int32_t flags;
static int
__db_vrfy_invalid(dbp, vdp, h, pgno, flags)
DB *dbp;
VRFY_DBINFO *vdp;
PAGE *h;
db_pgno_t pgno;
u_int32_t flags;
int
__db_vrfy_datapage(dbp, vdp, h, pgno, flags)
DB *dbp;
VRFY_DBINFO *vdp;
PAGE *h;
db_pgno_t pgno;
u_int32_t flags;
int
__db_vrfy_meta(dbp, vdp, meta, pgno, flags)
DB *dbp;
VRFY_DBINFO *vdp;
DBMETA *meta;
db_pgno_t pgno;
u_int32_t flags;
static int
__db_vrfy_freelist(dbp, vdp, meta, flags)
DB *dbp;
VRFY_DBINFO *vdp;
db_pgno_t meta;
u_int32_t flags;
static int
__db_vrfy_subdbs(dbp, vdp, dbname, flags)
DB *dbp;
VRFY_DBINFO *vdp;
const char *dbname;
u_int32_t flags;
void
__db_vrfy_struct_feedback(dbp, vdp)
DB *dbp;
VRFY_DBINFO *vdp;
static int
__db_vrfy_orderchkonly(dbp, vdp, name, subdb, flags)
DB *dbp;
VRFY_DBINFO *vdp;
const char *name, *subdb;
u_int32_t flags;
int
__db_salvage_pg(dbp, vdp, pgno, h, handle, callback, flags)
DB *dbp;
VRFY_DBINFO *vdp;
db_pgno_t pgno;
PAGE *h;
void *handle;
int (*callback) __P((void *, const void *));
u_int32_t flags;
int
__db_salvage_leaf(dbp, vdp, pgno, h, handle, callback, flags)
DB *dbp;
VRFY_DBINFO *vdp;
db_pgno_t pgno;
PAGE *h;
void *handle;
int (*callback) __P((void *, const void *));
u_int32_t flags;
static int
__db_salvage_unknowns(dbp, vdp, handle, callback, flags)
DB *dbp;
VRFY_DBINFO *vdp;
void *handle;
int (*callback) __P((void *, const void *));
u_int32_t flags;
#define	INP_OFFSET(dbp, h, i)	\
((db_indx_t)((u_int8_t *)((P_INP(dbp,(h))) + (i)) - (u_int8_t *)(h)))
int
__db_vrfy_inpitem(dbp, h, pgno, i, is_btree, flags, himarkp, offsetp)
DB *dbp;
PAGE *h;
db_pgno_t pgno;
u_int32_t i;
int is_btree;
u_int32_t flags, *himarkp, *offsetp;
int
__db_vrfy_duptype(dbp, vdp, pgno, flags)
DB *dbp;
VRFY_DBINFO *vdp;
db_pgno_t pgno;
u_int32_t flags;
int
__db_salvage_duptree(dbp, vdp, pgno, key, handle, callback, flags)
DB *dbp;
VRFY_DBINFO *vdp;
db_pgno_t pgno;
DBT *key;
void *handle;
int (*callback) __P((void *, const void *));
u_int32_t flags;
static int
__db_salvage_all(dbp, vdp, handle, callback, flags, hassubsp)
DB *dbp;
VRFY_DBINFO *vdp;
void *handle;
int (*callback) __P((void *, const void *));
u_int32_t flags;
int *hassubsp;
static int
__db_salvage_subdbpg(dbp, vdp, master, handle, callback, flags)
DB *dbp;
VRFY_DBINFO *vdp;
PAGE *master;
void *handle;
int (*callback) __P((void *, const void *));
u_int32_t flags;
static int
__db_salvage(dbp, vdp, meta_pgno, handle, callback, flags)
DB *dbp;
VRFY_DBINFO *vdp;
db_pgno_t meta_pgno;
void *handle;
int (*callback) __P((void *, const void *));
u_int32_t flags;
static int
__db_meta2pgset(dbp, vdp, pgno, flags, pgset)
DB *dbp;
VRFY_DBINFO *vdp;
db_pgno_t pgno;
u_int32_t flags;
DB *pgset;
static u_int
__db_guesspgsize(env, fhp)
ENV *env;
DB_FH *fhp;
