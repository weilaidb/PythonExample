struct xdiff_emit_state ;
static int parse_num(char **cp_p, int *num_p)
int parse_hunk_header(char *line, int len,
int *ob, int *on,
int *nb, int *nn)
static void consume_one(void *priv_, char *s, unsigned long size)
static int xdiff_outf(void *priv_, mmbuffer_t *mb, int nbuf)
static void trim_common_tail(mmfile_t *a, mmfile_t *b, long ctx)
int xdi_diff(mmfile_t *mf1, mmfile_t *mf2, xpparam_t const *xpp, xdemitconf_t const *xecfg, xdemitcb_t *xecb)
int xdi_diff_outf(mmfile_t *mf1, mmfile_t *mf2,
xdiff_emit_consume_fn fn, void *consume_callback_data,
xpparam_t const *xpp, xdemitconf_t const *xecfg)
int read_mmfile(mmfile_t *ptr, const char *filename)
void read_mmblob(mmfile_t *ptr, const unsigned char *sha1)
#define FIRST_FEW_BYTES 8000
int buffer_is_binary(const char *ptr, unsigned long size)
struct ff_regs ;
static long ff_regexp(const char *line, long len,
char *buffer, long buffer_size, void *priv)
void xdiff_set_find_func(xdemitconf_t *xecfg, const char *value, int cflags)
void xdiff_clear_find_func(xdemitconf_t *xecfg)
int git_xmerge_style = -1;
int git_xmerge_config(const char *var, const char *value, void *cb)
