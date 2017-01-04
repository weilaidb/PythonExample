#define AVCODEC_PARSER_H
typedef struct ParseContext ParseContext;
#define END_NOT_FOUND (-100)
int ff_combine_frame(ParseContext *pc, int next, const uint8_t **buf, int *buf_size);
int ff_mpeg4video_split(AVCodecContext *avctx, const uint8_t *buf,
int buf_size);
void ff_parse_close(AVCodecParserContext *s);
void ff_fetch_timestamp(AVCodecParserContext *s, int off, int remove, int fuzzy);
