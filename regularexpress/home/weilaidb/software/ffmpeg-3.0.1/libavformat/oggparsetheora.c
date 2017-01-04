typedef struct TheoraParams  TheoraParams;
static int theora_header(AVFormatContext *s, int idx)
static uint64_t theora_gptopts(AVFormatContext *ctx, int idx, uint64_t gp,
int64_t *dts)
static int theora_packet(AVFormatContext *s, int idx)
const struct ogg_codec ff_theora_codec = ;
