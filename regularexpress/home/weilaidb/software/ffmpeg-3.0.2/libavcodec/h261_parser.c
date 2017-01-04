static int h261_find_frame_end(ParseContext *pc, AVCodecContext *avctx,
const uint8_t *buf, int buf_size)
static int h261_parse(AVCodecParserContext *s,
AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
AVCodecParser ff_h261_parser = ;
