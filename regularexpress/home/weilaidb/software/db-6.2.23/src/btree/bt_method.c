static int __bam_set_bt_minkey __P((DB *, u_int32_t));
static int __bam_get_bt_compare
__P((DB *, int (**)(DB *, const DBT *, const DBT *, size_t *)));
static int __bam_get_bt_prefix
__P((DB *, size_t(**)(DB *, const DBT *, const DBT *)));
static int __bam_set_bt_prefix
__P((DB *, size_t(*)(DB *, const DBT *, const DBT *)));
static int __bam_get_bt_compress __P((DB *,
int (**)(DB *, const DBT *, const DBT *, const DBT *, const DBT *, DBT *),
int (**)(DB *, const DBT *, const DBT *, DBT *, DBT *, DBT *)));
static int __ram_get_re_delim __P((DB *, int *));
static int __ram_set_re_delim __P((DB *, int));
static int __ram_set_re_len __P((DB *, u_int32_t));
static int __ram_set_re_pad __P((DB *, int));
static int __ram_get_re_source __P((DB *, const char **));
static int __ram_set_re_source __P((DB *, const char *));
int
__bam_db_create(dbp)
DB *dbp;
int
__bam_db_close(dbp)
DB *dbp;
void
__bam_map_flags(dbp, inflagsp, outflagsp)
DB *dbp;
u_int32_t *inflagsp, *outflagsp;
int
__bam_set_flags(dbp, flagsp)
DB *dbp;
u_int32_t *flagsp;
static int
__bam_get_bt_compare(dbp, funcp)
DB *dbp;
int (**funcp) __P((DB *, const DBT *, const DBT *, size_t *));
int
__bam_set_bt_compare(dbp, func)
DB *dbp;
int (*func) __P((DB *, const DBT *, const DBT *, size_t *));
static int
__bam_get_bt_compress(dbp, compressp, decompressp)
DB *dbp;
int (**compressp) __P((DB *, const DBT *, const DBT *, const DBT *,
const DBT *, DBT *));
int (**decompressp) __P((DB *, const DBT *, const DBT *, DBT *, DBT *,
DBT *));
int
__bam_set_bt_compress(dbp, compress, decompress)
DB *dbp;
int (*compress) __P((DB *, const DBT *, const DBT *, const DBT *,
const DBT *, DBT *));
int (*decompress) __P((DB *, const DBT *, const DBT *, DBT *, DBT *,
DBT *));
int
__bam_get_bt_minkey(dbp, bt_minkeyp)
DB *dbp;
u_int32_t *bt_minkeyp;
static int
__bam_set_bt_minkey(dbp, bt_minkey)
DB *dbp;
u_int32_t bt_minkey;
static int
__bam_get_bt_prefix(dbp, funcp)
DB *dbp;
size_t (**funcp) __P((DB *, const DBT *, const DBT *));
static int
__bam_set_bt_prefix(dbp, func)
DB *dbp;
size_t (*func) __P((DB *, const DBT *, const DBT *));
void
__bam_copy_config(src, dst, nparts)
const DB *src;
DB *dst;
u_int32_t nparts;
void
__ram_map_flags(dbp, inflagsp, outflagsp)
DB *dbp;
u_int32_t *inflagsp, *outflagsp;
int
__ram_set_flags(dbp, flagsp)
DB *dbp;
u_int32_t *flagsp;
static int
__ram_get_re_delim(dbp, re_delimp)
DB *dbp;
int *re_delimp;
static int
__ram_set_re_delim(dbp, re_delim)
DB *dbp;
int re_delim;
int
__ram_get_re_len(dbp, re_lenp)
DB *dbp;
u_int32_t *re_lenp;
static int
__ram_set_re_len(dbp, re_len)
DB *dbp;
u_int32_t re_len;
int
__ram_get_re_pad(dbp, re_padp)
DB *dbp;
int *re_padp;
static int
__ram_set_re_pad(dbp, re_pad)
DB *dbp;
int re_pad;
static int
__ram_get_re_source(dbp, re_sourcep)
DB *dbp;
const char **re_sourcep;
static int
__ram_set_re_source(dbp, re_source)
DB *dbp;
const char *re_source;
