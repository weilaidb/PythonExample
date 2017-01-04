#define START_CODE 0x000001
#define IS_IRAP_NAL(nal) (nal->type >= 16 && nal->type <= 23)
#define ADVANCED_PARSER CONFIG_HEVC_DECODER
typedef struct HEVCParserContext  HEVCParserContext;
#if !ADVANCED_PARSER
static int hevc_parse_slice_header(AVCodecParserContext *s, H2645NAL *nal,
AVCodecContext *avctx)
static int parse_nal_units(AVCodecParserContext *s, const uint8_t *buf,
int buf_size, AVCodecContext *avctx)
static int hevc_find_frame_end(AVCodecParserContext *s, const uint8_t *buf,
int buf_size)
#if ADVANCED_PARSER
static inline int parse_nal_units(AVCodecParserContext *s, const uint8_t *buf,
int buf_size, AVCodecContext *avctx)
static int hevc_parse(AVCodecParserContext *s,
AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
static int hevc_split(AVCodecContext *avctx, const uint8_t *buf, int buf_size)
static void hevc_parser_close(AVCodecParserContext *s)
AVCodecParser ff_hevc_parser = ;
