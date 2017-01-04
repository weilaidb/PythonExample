typedef struct MJPEGParserContextMJPEGParserContext;
static int find_frame_end(MJPEGParserContext *m, const uint8_t *buf, int buf_size)
static int jpeg_parse(AVCodecParserContext *s,
AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
AVCodecParser ff_mjpeg_parser = ;
