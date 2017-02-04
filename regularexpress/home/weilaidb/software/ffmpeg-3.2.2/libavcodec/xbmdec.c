convert
parse_str_int
xbm_decode_frame
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
width  = parse_str_int(avpkt->data, avpkt->size, );
height = parse_str_int(avpkt->data, avpkt->size, );
if ((ret = ff_set_dimensions(avctx, width, height)) < 0)
return ret;
if ((ret = ff_get_buffer(avctx, p, 0)) < 0)
return ret;
next = memchr(ptr, '
AVCodec ff_xbm_decoder = ;
