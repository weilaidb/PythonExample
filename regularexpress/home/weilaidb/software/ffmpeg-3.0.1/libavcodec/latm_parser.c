#define LATM_HEADER     0x56e000
#define LATM_MASK       0xFFE000
#define LATM_SIZE_MASK  0x001FFF
typedef struct LATMParseContext LATMParseContext;
static int latm_find_frame_end(AVCodecParserContext *s1, const uint8_t *buf,
int buf_size)
static int latm_parse(AVCodecParserContext *s1, AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
AVCodecParser ff_aac_latm_parser = ;
