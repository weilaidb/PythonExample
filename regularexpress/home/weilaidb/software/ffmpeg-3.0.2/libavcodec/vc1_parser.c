#define UNESCAPED_THRESHOLD 37
#define UNESCAPED_LIMIT 144
typedef enum  VC1ParseSearchState;
typedef struct VC1ParseContext  VC1ParseContext;
static void vc1_extract_header(AVCodecParserContext *s, AVCodecContext *avctx,
const uint8_t *buf, int buf_size)
static int vc1_parse(AVCodecParserContext *s,
AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
static int vc1_split(AVCodecContext *avctx,
const uint8_t *buf, int buf_size)
static av_cold int vc1_parse_init(AVCodecParserContext *s)
AVCodecParser ff_vc1_parser = ;
