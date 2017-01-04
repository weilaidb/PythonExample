typedef struct DVBSubtitleContext  DVBSubtitleContext;
#define PUTBITS2(val)\
static void dvb_encode_rle2(uint8_t **pq,
const uint8_t *bitmap, int linesize,
int w, int h)
#define PUTBITS4(val)\
static void dvb_encode_rle4(uint8_t **pq,
const uint8_t *bitmap, int linesize,
int w, int h)
static void dvb_encode_rle8(uint8_t **pq,
const uint8_t *bitmap, int linesize,
int w, int h)
static int encode_dvb_subtitles(DVBSubtitleContext *s,
uint8_t *outbuf, const AVSubtitle *h)
static int dvbsub_encode(AVCodecContext *avctx,
unsigned char *buf, int buf_size,
const AVSubtitle *sub)
AVCodec ff_dvbsub_encoder = ;
