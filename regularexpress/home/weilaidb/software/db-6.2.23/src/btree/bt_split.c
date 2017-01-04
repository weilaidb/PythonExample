static int __bam_page __P((DBC *, EPG *, EPG *));
static int __bam_psplit __P((DBC *, EPG *, PAGE *, PAGE *, db_indx_t *));
static int __bam_root __P((DBC *, EPG *));
int
__bam_split(dbc, arg, subtree_rootp)
DBC *dbc;
void *arg;
db_pgno_t *subtree_rootp;
static int
__bam_root(dbc, cp)
DBC *dbc;
EPG *cp;
static int
__bam_page(dbc, pp, cp)
DBC *dbc;
EPG *pp, *cp;
int
__bam_broot(dbc, rootp, split, lp, rp)
DBC *dbc;
u_int32_t split;
PAGE *rootp, *lp, *rp;
int
__ram_root(dbc, rootp, lp, rp)
DBC *dbc;
PAGE *rootp, *lp, *rp;
int
__bam_pinsert(dbc, parent, split, lchild, rchild, flags)
DBC *dbc;
EPG *parent;
u_int32_t split;
PAGE *lchild, *rchild;
int flags;
static int
__bam_psplit(dbc, cp, lp, rp, splitret)
DBC *dbc;
EPG *cp;
PAGE *lp, *rp;
db_indx_t *splitret;
int
__bam_copy(dbp, pp, cp, nxt, stop)
DB *dbp;
PAGE *pp, *cp;
u_int32_t nxt, stop;
