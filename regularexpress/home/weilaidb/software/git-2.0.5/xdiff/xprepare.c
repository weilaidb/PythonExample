#define XDL_KPDIS_RUN 4
#define XDL_MAX_EQLIMIT 1024
#define XDL_SIMSCAN_WINDOW 100
#define XDL_GUESS_NLINES1 256
#define XDL_GUESS_NLINES2 20
typedef struct s_xdlclass  xdlclass_t;
typedef struct s_xdlclassifier  xdlclassifier_t;
static int xdl_init_classifier(xdlclassifier_t *cf, long size, long flags);
static void xdl_free_classifier(xdlclassifier_t *cf);
static int xdl_classify_record(unsigned int pass, xdlclassifier_t *cf, xrecord_t **rhash,
unsigned int hbits, xrecord_t *rec);
static int xdl_prepare_ctx(unsigned int pass, mmfile_t *mf, long narec, xpparam_t const *xpp,
xdlclassifier_t *cf, xdfile_t *xdf);
static void xdl_free_ctx(xdfile_t *xdf);
static int xdl_clean_mmatch(char const *dis, long i, long s, long e);
static int xdl_cleanup_records(xdlclassifier_t *cf, xdfile_t *xdf1, xdfile_t *xdf2);
static int xdl_trim_ends(xdfile_t *xdf1, xdfile_t *xdf2);
static int xdl_optimize_ctxs(xdlclassifier_t *cf, xdfile_t *xdf1, xdfile_t *xdf2);
static int xdl_init_classifier(xdlclassifier_t *cf, long size, long flags)
static void xdl_free_classifier(xdlclassifier_t *cf)
static int xdl_classify_record(unsigned int pass, xdlclassifier_t *cf, xrecord_t **rhash,
unsigned int hbits, xrecord_t *rec)
static int xdl_prepare_ctx(unsigned int pass, mmfile_t *mf, long narec, xpparam_t const *xpp,
xdlclassifier_t *cf, xdfile_t *xdf)
static void xdl_free_ctx(xdfile_t *xdf)
int xdl_prepare_env(mmfile_t *mf1, mmfile_t *mf2, xpparam_t const *xpp,
xdfenv_t *xe)
void xdl_free_env(xdfenv_t *xe)
static int xdl_clean_mmatch(char const *dis, long i, long s, long e)
static int xdl_cleanup_records(xdlclassifier_t *cf, xdfile_t *xdf1, xdfile_t *xdf2)
static int xdl_trim_ends(xdfile_t *xdf1, xdfile_t *xdf2)
static int xdl_optimize_ctxs(xdlclassifier_t *cf, xdfile_t *xdf1, xdfile_t *xdf2)
