typedef struct DVDSubParseContext  DVDSubParseContext;
static av_cold int dvdsub_parse_init(AVCodecParserContext *s)
static int dvdsub_parse(AVCodecParserContext *s,
AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
static av_cold void dvdsub_parse_close(AVCodecParserContext *s)
AVCodecParser ff_dvdsub_parser = ;
