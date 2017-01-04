typedef struct VP9ParseContext  VP9ParseContext;
static int parse_frame(AVCodecParserContext *ctx, const uint8_t *buf, int size)
static int parse(AVCodecParserContext *ctx,
AVCodecContext *avctx,
const uint8_t **out_data, int *out_size,
const uint8_t *data, int size)
AVCodecParser ff_vp9_parser = ;
