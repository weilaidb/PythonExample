static int __hamc_chgpg __P((DBC *,
db_pgno_t, u_int32_t, db_pgno_t, u_int32_t));
static int __ham_check_move __P((DBC *, u_int32_t));
static int __ham_dcursor __P((DBC *, db_pgno_t, u_int32_t));
static int __ham_move_offpage __P((DBC *, PAGE *, u_int32_t, db_pgno_t));
static int __hamc_chgpg_func
__P((DBC *, DBC *, u_int32_t *, db_pgno_t, u_int32_t, void *));
int
__ham_add_dup(dbc, nval, flags, pgnop)
DBC *dbc;
DBT *nval;
u_int32_t flags;
db_pgno_t *pgnop;
int
__ham_dup_convert(dbc)
DBC *dbc;
int
__ham_make_dup(env, notdup, duplicate, bufp, sizep)
ENV *env;
const DBT *notdup;
DBT *duplicate;
void **bufp;
u_int32_t *sizep;
static int
__ham_check_move(dbc, add_len)
DBC *dbc;
u_int32_t add_len;
static int
__ham_move_offpage(dbc, pagep, ndx, pgno)
DBC *dbc;
PAGE *pagep;
u_int32_t ndx;
db_pgno_t pgno;
void
__ham_dsearch(dbc, dbt, offp, cmpp, flags)
DBC *dbc;
DBT *dbt;
u_int32_t *offp, flags;
int *cmpp;
static int
__ham_dcursor(dbc, pgno, indx)
DBC *dbc;
db_pgno_t pgno;
u_int32_t indx;
struct __hamc_chgpg_args ;
static int
__hamc_chgpg_func(cp, my_dbc, foundp, old_pgno, old_index, vargs)
DBC *cp, *my_dbc;
u_int32_t *foundp;
db_pgno_t old_pgno;
u_int32_t old_index;
void *vargs;
static int
__hamc_chgpg(dbc, old_pgno, old_index, new_pgno, new_index)
DBC *dbc;
db_pgno_t old_pgno, new_pgno;
u_int32_t old_index, new_index;
