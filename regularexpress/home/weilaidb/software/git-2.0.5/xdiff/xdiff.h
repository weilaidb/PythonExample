#if !defined(XDIFF_H)
#define XDIFF_H
#define XDF_NEED_MINIMAL (1 << 1)
#define XDF_IGNORE_WHITESPACE (1 << 2)
#define XDF_IGNORE_WHITESPACE_CHANGE (1 << 3)
#define XDF_IGNORE_WHITESPACE_AT_EOL (1 << 4)
#define XDF_WHITESPACE_FLAGS (XDF_IGNORE_WHITESPACE | XDF_IGNORE_WHITESPACE_CHANGE | XDF_IGNORE_WHITESPACE_AT_EOL)
#define XDF_PATIENCE_DIFF (1 << 5)
#define XDF_HISTOGRAM_DIFF (1 << 6)
#define XDF_DIFF_ALGORITHM_MASK (XDF_PATIENCE_DIFF | XDF_HISTOGRAM_DIFF)
#define XDF_DIFF_ALG(x) ((x) & XDF_DIFF_ALGORITHM_MASK)
#define XDF_IGNORE_BLANK_LINES (1 << 7)
#define XDL_EMIT_FUNCNAMES (1 << 0)
#define XDL_EMIT_COMMON (1 << 1)
#define XDL_EMIT_FUNCCONTEXT (1 << 2)
#define XDL_MMB_READONLY (1 << 0)
#define XDL_MMF_ATOMIC (1 << 0)
#define XDL_BDOP_INS 1
#define XDL_BDOP_CPY 2
#define XDL_BDOP_INSB 3
#define XDL_MERGE_MINIMAL 0
#define XDL_MERGE_EAGER 1
#define XDL_MERGE_ZEALOUS 2
#define XDL_MERGE_ZEALOUS_ALNUM 3
#define XDL_MERGE_FAVOR_OURS 1
#define XDL_MERGE_FAVOR_THEIRS 2
#define XDL_MERGE_FAVOR_UNION 3
#define XDL_MERGE_DIFF3 1
typedef struct s_mmfile  mmfile_t;
typedef struct s_mmbuffer  mmbuffer_t;
typedef struct s_xpparam  xpparam_t;
typedef struct s_xdemitcb  xdemitcb_t;
typedef long (*find_func_t)(const char *line, long line_len, char *buffer, long buffer_size, void *priv);
typedef int (*xdl_emit_hunk_consume_func_t)(long start_a, long count_a,
long start_b, long count_b,
void *cb_data);
typedef struct s_xdemitconf  xdemitconf_t;
typedef struct s_bdiffparam  bdiffparam_t;
#define xdl_malloc(x) malloc(x)
#define xdl_free(ptr) free(ptr)
#define xdl_realloc(ptr,x) realloc(ptr,x)
void *xdl_mmfile_first(mmfile_t *mmf, long *size);
long xdl_mmfile_size(mmfile_t *mmf);
int xdl_diff(mmfile_t *mf1, mmfile_t *mf2, xpparam_t const *xpp,
xdemitconf_t const *xecfg, xdemitcb_t *ecb);
typedef struct s_xmparam  xmparam_t;
#define DEFAULT_CONFLICT_MARKER_SIZE 7
int xdl_merge(mmfile_t *orig, mmfile_t *mf1, mmfile_t *mf2,
xmparam_t const *xmp, mmbuffer_t *result);
