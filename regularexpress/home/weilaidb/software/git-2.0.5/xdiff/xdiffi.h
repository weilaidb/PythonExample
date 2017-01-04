#if !defined(XDIFFI_H)
#define XDIFFI_H
typedef struct s_diffdata  diffdata_t;
typedef struct s_xdalgoenv  xdalgoenv_t;
typedef struct s_xdchange  xdchange_t;
int xdl_recs_cmp(diffdata_t *dd1, long off1, long lim1,
diffdata_t *dd2, long off2, long lim2,
long *kvdf, long *kvdb, int need_min, xdalgoenv_t *xenv);
int xdl_do_diff(mmfile_t *mf1, mmfile_t *mf2, xpparam_t const *xpp,
xdfenv_t *xe);
int xdl_change_compact(xdfile_t *xdf, xdfile_t *xdfo, long flags);
int xdl_build_script(xdfenv_t *xe, xdchange_t **xscr);
void xdl_free_script(xdchange_t *xscr);
int xdl_emit_diff(xdfenv_t *xe, xdchange_t *xscr, xdemitcb_t *ecb,
xdemitconf_t const *xecfg);
int xdl_do_patience_diff(mmfile_t *mf1, mmfile_t *mf2, xpparam_t const *xpp,
xdfenv_t *env);
int xdl_do_histogram_diff(mmfile_t *mf1, mmfile_t *mf2, xpparam_t const *xpp,
xdfenv_t *env);
