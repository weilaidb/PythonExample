static AVBitStreamFilter *first_bitstream_filter = NULL;
AVBitStreamFilter *av_bitstream_filter_next(const AVBitStreamFilter *f)
void av_register_bitstream_filter(AVBitStreamFilter *bsf)
AVBitStreamFilterContext *av_bitstream_filter_init(const char *name)
void av_bitstream_filter_close(AVBitStreamFilterContext *bsfc)
int av_bitstream_filter_filter(AVBitStreamFilterContext *bsfc,
AVCodecContext *avctx, const char *args,
uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size, int keyframe)
