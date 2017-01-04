#define UNCHECKED_BITSTREAM_READER 1
struct Mp4vParseContext ;
int ff_mpeg4_find_frame_end(ParseContext *pc, const uint8_t *buf, int buf_size)
static int mpeg4_decode_header(AVCodecParserContext *s1, AVCodecContext *avctx,
const uint8_t *buf, int buf_size)
static av_cold int mpeg4video_parse_init(AVCodecParserContext *s)
static int mpeg4video_parse(AVCodecParserContext *s,
AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
AVCodecParser ff_mpeg4video_parser = ;
