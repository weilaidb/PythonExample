static int cavs_find_frame_end(ParseContext *pc, const uint8_t *buf,
int buf_size)
static int cavsvideo_parse(AVCodecParserContext *s,
AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
AVCodecParser ff_cavsvideo_parser = ;
