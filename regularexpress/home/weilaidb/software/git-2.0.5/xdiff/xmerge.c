typedef struct s_xdmerge  xdmerge_t;
static int xdl_append_merge(xdmerge_t **merge, int mode,
long i0, long chg0,
long i1, long chg1,
long i2, long chg2)
static int xdl_cleanup_merge(xdmerge_t *c)
static int xdl_merge_cmp_lines(xdfenv_t *xe1, int i1, xdfenv_t *xe2, int i2,
int line_count, long flags)
static int xdl_recs_copy_0(int use_orig, xdfenv_t *xe, int i, int count, int add_nl, char *dest)
static int xdl_recs_copy(xdfenv_t *xe, int i, int count, int add_nl, char *dest)
static int xdl_orig_copy(xdfenv_t *xe, int i, int count, int add_nl, char *dest)
static int fill_conflict_hunk(xdfenv_t *xe1, const char *name1,
xdfenv_t *xe2, const char *name2,
const char *name3,
int size, int i, int style,
xdmerge_t *m, char *dest, int marker_size)
static int xdl_fill_merge_buffer(xdfenv_t *xe1, const char *name1,
xdfenv_t *xe2, const char *name2,
const char *ancestor_name,
int favor,
xdmerge_t *m, char *dest, int style,
int marker_size)
static int xdl_refine_conflicts(xdfenv_t *xe1, xdfenv_t *xe2, xdmerge_t *m,
xpparam_t const *xpp)
static int line_contains_alnum(const char *ptr, long size)
static int lines_contain_alnum(xdfenv_t *xe, int i, int chg)
static void xdl_merge_two_conflicts(xdmerge_t *m)
static int xdl_simplify_non_conflicts(xdfenv_t *xe1, xdmerge_t *m,
int simplify_if_no_alnum)
static int xdl_do_merge(xdfenv_t *xe1, xdchange_t *xscr1,
xdfenv_t *xe2, xdchange_t *xscr2,
xmparam_t const *xmp, mmbuffer_t *result)
int xdl_merge(mmfile_t *orig, mmfile_t *mf1, mmfile_t *mf2,
xmparam_t const *xmp, mmbuffer_t *result)
