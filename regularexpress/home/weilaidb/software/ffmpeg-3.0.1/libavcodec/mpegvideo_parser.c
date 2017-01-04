struct MpvParseContext ;
static void mpegvideo_extract_headers(AVCodecParserContext *s,
AVCodecContext *avctx,
const uint8_t *buf, int buf_size)
static int mpegvideo_parse(AVCodecParserContext *s,
AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
static int mpegvideo_split(AVCodecContext *avctx,
const uint8_t *buf, int buf_size)
static int mpegvideo_parse_init(AVCodecParserContext *s)
AVCodecParser ff_mpegvideo_parser = ;
