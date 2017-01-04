#define AVCODEC_AAC_AC3_PARSER_H
typedef enum  AACAC3ParseError;
typedef struct AACAC3ParseContext  AACAC3ParseContext;
int ff_aac_ac3_parse(AVCodecParserContext *s1,
AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size);
