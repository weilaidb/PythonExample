static long xdl_get_rec(xdfile_t *xdf, long ri, char const **rec);
static int xdl_emit_record(xdfile_t *xdf, long ri, char const *pre, xdemitcb_t *ecb);
static long xdl_get_rec(xdfile_t *xdf, long ri, char const **rec)
static int xdl_emit_record(xdfile_t *xdf, long ri, char const *pre, xdemitcb_t *ecb)
xdchange_t *xdl_get_hunk(xdchange_t **xscr, xdemitconf_t const *xecfg)
static long def_ff(const char *rec, long len, char *buf, long sz, void *priv)
static int xdl_emit_common(xdfenv_t *xe, xdchange_t *xscr, xdemitcb_t *ecb,
xdemitconf_t const *xecfg)
struct func_line ;
static long get_func_line(xdfenv_t *xe, xdemitconf_t const *xecfg,
struct func_line *func_line, long start, long limit)
int xdl_emit_diff(xdfenv_t *xe, xdchange_t *xscr, xdemitcb_t *ecb,
xdemitconf_t const *xecfg)
