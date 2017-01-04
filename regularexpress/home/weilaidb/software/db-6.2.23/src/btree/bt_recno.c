static int  __ram_add __P((DBC *, db_recno_t *, DBT *, u_int32_t, u_int32_t));
static int  __ram_source __P((DB *));
static int  __ram_sread __P((DBC *, db_recno_t));
static int  __ram_update __P((DBC *, db_recno_t, int));
static int __ram_ca_getorder
__P((DBC *, DBC *, u_int32_t *, db_pgno_t, u_int32_t, void *));
static int __ram_ca_setorder
__P((DBC *, DBC *, u_int32_t *, db_pgno_t, u_int32_t, void *));
#define	CD_SET(cp)
#define	CD_CLR(cp)
#define	CD_ISSET(cp)							\
(F_ISSET(cp, C_RENUMBER) && F_ISSET(cp, C_DELETED) ? 1 : 0)
#define	C_LESSTHAN(cp1, cp2)						\
(((cp1)->recno < (cp2)->recno) ||					\
(((cp1)->recno == (cp2)->recno) &&					\
((CD_ISSET((cp1)) && CD_ISSET((cp2)) && (cp1)->order < (cp2)->order) || \
(CD_ISSET((cp1)) && !CD_ISSET((cp2))))))
#define	C_EQUAL(cp1, cp2)						\
((cp1)->recno == (cp2)->recno && CD_ISSET((cp1)) == CD_ISSET((cp2)) && \
(!CD_ISSET((cp1)) || (cp1)->order == (cp2)->order))
#define	CURADJ_LOG(dbc)							\
(DBC_LOGGING((dbc)) && (dbc)->txn != NULL && (dbc)->txn->parent != NULL)
#define	STACK_TO_CURSOR(cp, ret)
int
__ram_open(dbp, ip, txn, name, base_pgno, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *name;
db_pgno_t base_pgno;
u_int32_t flags;
int
__ram_append(dbc, key, data)
DBC *dbc;
DBT *key, *data;
int
__ramc_del(dbc, flags)
DBC *dbc;
u_int32_t flags;
int
__ramc_get(dbc, key, data, flags, pgnop)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
db_pgno_t *pgnop;
int
__ramc_put(dbc, key, data, flags, pgnop)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
db_pgno_t *pgnop;
static int
__ram_ca_getorder(dbc, my_dbc, orderp, root_pgno, recno, args)
DBC *dbc, *my_dbc;
u_int32_t *orderp;
db_pgno_t root_pgno;
u_int32_t recno;
void *args;
static int
__ram_ca_setorder(dbc, my_dbc, foundp, pgno, order, args)
DBC *dbc, *my_dbc;
u_int32_t *foundp;
db_pgno_t pgno;
u_int32_t order;
void *args;
int
__ram_ca(dbc_arg, op, foundp)
DBC *dbc_arg;
ca_recno_arg op;
int *foundp;
int
__ram_getno(dbc, key, rep, can_create)
DBC *dbc;
const DBT *key;
db_recno_t *rep;
int can_create;
static int
__ram_update(dbc, recno, can_create)
DBC *dbc;
db_recno_t recno;
int can_create;
static int
__ram_source(dbp)
DB *dbp;
int
__ram_writeback(dbp)
DB *dbp;
static int
__ram_sread(dbc, top)
DBC *dbc;
db_recno_t top;
static int
__ram_add(dbc, recnop, data, flags, bi_flags)
DBC *dbc;
db_recno_t *recnop;
DBT *data;
u_int32_t flags, bi_flags;
