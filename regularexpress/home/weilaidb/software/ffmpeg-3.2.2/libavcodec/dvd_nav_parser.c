#define PCI_SIZE  980
#define DSI_SIZE 1018
typedef struct DVDNavParseContext  DVDNavParseContext;
static av_cold int dvd_nav_parse_init(AVCodecParserContext *s)
static int dvd_nav_parse(AVCodecParserContext *s,
AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
AVCodecParser ff_dvd_nav_parser = ;
