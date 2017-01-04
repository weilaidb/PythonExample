static AVCodecParser *av_first_parser = NULL;
AVCodecParser *av_parser_next(const AVCodecParser *p)
void av_register_codec_parser(AVCodecParser *parser)
AVCodecParserContext *av_parser_init(int codec_id)
void ff_fetch_timestamp(AVCodecParserContext *s, int off, int remove, int fuzzy)
int av_parser_parse2(AVCodecParserContext *s, AVCodecContext *avctx,
uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size,
int64_t pts, int64_t dts, int64_t pos)
int av_parser_change(AVCodecParserContext *s, AVCodecContext *avctx,
uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size, int keyframe)
void av_parser_close(AVCodecParserContext *s)
int ff_combine_frame(ParseContext *pc, int next,
const uint8_t **buf, int *buf_size)
void ff_parse_close(AVCodecParserContext *s)
int ff_mpeg4video_split(AVCodecContext *avctx, const uint8_t *buf, int buf_size)
