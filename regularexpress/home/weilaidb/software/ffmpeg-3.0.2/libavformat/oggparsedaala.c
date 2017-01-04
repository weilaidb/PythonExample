struct DaalaPixFmtMap ;
static const struct DaalaPixFmtMap list_fmts[] = ;
typedef struct DaalaInfoHeader  DaalaInfoHeader;
static inline int daala_match_pix_fmt(struct DaalaPixFmtMap *fmt)
static int daala_header(AVFormatContext *s, int idx)
static uint64_t daala_gptopts(AVFormatContext *ctx, int idx, uint64_t gp,
int64_t *dts)
static int daala_packet(AVFormatContext *s, int idx)
const struct ogg_codec ff_daala_codec = ;
