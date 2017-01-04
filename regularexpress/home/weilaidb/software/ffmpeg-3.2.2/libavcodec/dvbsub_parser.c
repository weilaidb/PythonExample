#define PARSE_BUF_SIZE  (65536)
typedef struct DVBSubParseContext  DVBSubParseContext;
static av_cold int dvbsub_parse_init(AVCodecParserContext *s)
static int dvbsub_parse(AVCodecParserContext *s,
AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
static av_cold void dvbsub_parse_close(AVCodecParserContext *s)
AVCodecParser ff_dvbsub_parser = ;
