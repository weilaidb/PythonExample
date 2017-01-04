typedef struct RV34ParseContext  RV34ParseContext;
static const int rv_to_av_frame_type[4] = ;
static int rv34_parse(AVCodecParserContext *s,
AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
#if CONFIG_RV30_PARSER
AVCodecParser ff_rv30_parser = ;
#if CONFIG_RV40_PARSER
AVCodecParser ff_rv40_parser = ;
