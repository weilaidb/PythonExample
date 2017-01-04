static const uint8_t mlp_quants[16] = ;
static const uint8_t mlp_channels[32] = ;
const uint64_t ff_mlp_layout[32] = ;
static const uint8_t thd_chancount[13] = ;
static const uint64_t thd_layout[13] = ;
static int mlp_samplerate(int in)
static int truehd_channels(int chanmap)
uint64_t ff_truehd_layout(int chanmap)
static int ff_mlp_get_major_sync_size(const uint8_t * buf, int bufsize)
int ff_mlp_read_major_sync(void *log, MLPHeaderInfo *mh, GetBitContext *gb)
typedef struct MLPParseContext
MLPParseContext;
static av_cold int mlp_init(AVCodecParserContext *s)
static int mlp_parse(AVCodecParserContext *s,
AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
AVCodecParser ff_mlp_parser = ;
