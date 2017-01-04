typedef struct  DNXHDParserContext;
static int dnxhd_find_frame_end(DNXHDParserContext *dctx,
const uint8_t *buf, int buf_size)
static int dnxhd_parse(AVCodecParserContext *s,
AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
AVCodecParser ff_dnxhd_parser = ;
