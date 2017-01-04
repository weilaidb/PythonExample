typedef struct OpusParseContext  OpusParseContext;
static const uint8_t *parse_opus_ts_header(const uint8_t *start, int *payload_len, int buf_len)
static int opus_find_frame_end(AVCodecParserContext *ctx, AVCodecContext *avctx,
const uint8_t *buf, int buf_size, int *header_len)
static int opus_parse(AVCodecParserContext *ctx, AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
AVCodecParser ff_opus_parser = ;
