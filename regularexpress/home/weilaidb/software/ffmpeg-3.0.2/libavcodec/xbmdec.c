static int convert(uint8_t x)
static int parse_str_int(const uint8_t *p, int len, const uint8_t *key)
static int xbm_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
{
AVFrame *p = data;
int ret, linesize, i, j;
int width  = 0;
int height = 0;
const uint8_t *end, *ptr = avpkt->data;
const uint8_t *next;
uint8_t *dst;
avctx->pix_fmt = AV_PIX_FMT_MONOWHITE;
end = avpkt->data + avpkt->size;
width  = parse_str_int(avpkt->data, avpkt->size, "_width");
height = parse_str_int(avpkt->data, avpkt->size, "_height");
if ((ret = ff_set_dimensions(avctx, width, height)) < 0)
return ret;
if ((ret = ff_get_buffer(avctx, p, 0)) < 0)
return ret;
next = memchr(ptr, '
AVCodec ff_xbm_decoder = ;
