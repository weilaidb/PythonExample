#define DIRAC_PARSE_INFO_PREFIX 0x42424344
typedef struct DiracParseContext  DiracParseContext;
static int find_frame_end(DiracParseContext *pc,
const uint8_t *buf, int buf_size)
typedef struct DiracParseUnit  DiracParseUnit;
static int unpack_parse_unit(DiracParseUnit *pu, DiracParseContext *pc,
int offset)
static int dirac_combine_frame(AVCodecParserContext *s, AVCodecContext *avctx,
int next, const uint8_t **buf, int *buf_size)
static int dirac_parse(AVCodecParserContext *s, AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
static void dirac_parse_close(AVCodecParserContext *s)
AVCodecParser ff_dirac_parser = ;
