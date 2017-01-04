#define XDL_MAX_COST_MIN 256
#define XDL_HEUR_MIN_COST 256
#define XDL_LINE_MAX (long)((1UL << (CHAR_BIT * sizeof(long) - 1)) - 1)
#define XDL_SNAKE_CNT 20
#define XDL_K_HEUR 4
typedef struct s_xdpsplit  xdpsplit_t;
static long xdl_split(unsigned long const *ha1, long off1, long lim1,
unsigned long const *ha2, long off2, long lim2,
long *kvdf, long *kvdb, int need_min, xdpsplit_t *spl,
xdalgoenv_t *xenv);
static xdchange_t *xdl_add_change(xdchange_t *xscr, long i1, long i2, long chg1, long chg2);
static long xdl_split(unsigned long const *ha1, long off1, long lim1,
unsigned long const *ha2, long off2, long lim2,
long *kvdf, long *kvdb, int need_min, xdpsplit_t *spl,
xdalgoenv_t *xenv)
int xdl_recs_cmp(diffdata_t *dd1, long off1, long lim1,
diffdata_t *dd2, long off2, long lim2,
long *kvdf, long *kvdb, int need_min, xdalgoenv_t *xenv)
int xdl_do_diff(mmfile_t *mf1, mmfile_t *mf2, xpparam_t const *xpp,
xdfenv_t *xe)
static xdchange_t *xdl_add_change(xdchange_t *xscr, long i1, long i2, long chg1, long chg2)
int xdl_change_compact(xdfile_t *xdf, xdfile_t *xdfo, long flags)
int xdl_build_script(xdfenv_t *xe, xdchange_t **xscr)
void xdl_free_script(xdchange_t *xscr)
static int xdl_call_hunk_func(xdfenv_t *xe, xdchange_t *xscr, xdemitcb_t *ecb,
xdemitconf_t const *xecfg)
static void xdl_mark_ignorable(xdchange_t *xscr, xdfenv_t *xe, long flags)
int xdl_diff(mmfile_t *mf1, mmfile_t *mf2, xpparam_t const *xpp,
xdemitconf_t const *xecfg, xdemitcb_t *ecb)
