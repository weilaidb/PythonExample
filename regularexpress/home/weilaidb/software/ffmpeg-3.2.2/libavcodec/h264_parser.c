#define UNCHECKED_BITSTREAM_READER 1
typedef struct H264ParseContext  H264ParseContext;
static int h264_find_frame_end(H264ParseContext *p, const uint8_t *buf,
int buf_size, void *logctx)
static int scan_mmco_reset(AVCodecParserContext *s, GetBitContext *gb,
void *logctx)
static inline int parse_nal_units(AVCodecParserContext *s,
AVCodecContext *avctx,
const uint8_t * const buf, int buf_size)
static int h264_parse(AVCodecParserContext *s,
AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
static int h264_split(AVCodecContext *avctx,
const uint8_t *buf, int buf_size)
static void h264_close(AVCodecParserContext *s)
static av_cold int init(AVCodecParserContext *s)
AVCodecParser ff_h264_parser = ;
