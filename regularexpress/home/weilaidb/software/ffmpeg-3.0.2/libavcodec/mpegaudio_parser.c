typedef struct MpegAudioParseContext  MpegAudioParseContext;
#define MPA_HEADER_SIZE 4
#define SAME_HEADER_MASK \
(0xffe00000 | (3 << 17) | (3 << 10) | (3 << 19))
static int mpegaudio_parse(AVCodecParserContext *s1,
AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
AVCodecParser ff_mpegaudio_parser = ;
