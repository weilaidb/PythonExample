static const uint8_t jpeg_header[] = ;
static const int dht_segment_size = 420;
static const uint8_t dht_segment_head[] = ;
static const uint8_t dht_segment_frag[] = ;
static uint8_t *append(uint8_t *buf, const uint8_t *src, int size)
static uint8_t *append_dht_segment(uint8_t *buf)
static int mjpeg2jpeg_filter(AVBitStreamFilterContext *bsfc,
AVCodecContext *avctx, const char *args,
uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size,
int keyframe)
AVBitStreamFilter ff_mjpeg2jpeg_bsf = ;
