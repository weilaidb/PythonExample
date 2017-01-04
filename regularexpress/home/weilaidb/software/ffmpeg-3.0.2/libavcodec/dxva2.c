void *ff_dxva2_get_surface(const AVFrame *frame)
unsigned ff_dxva2_get_surface_index(const AVCodecContext *avctx,
const AVDXVAContext *ctx,
const AVFrame *frame)
int ff_dxva2_commit_buffer(AVCodecContext *avctx,
AVDXVAContext *ctx,
DECODER_BUFFER_DESC *dsc,
unsigned type, const void *data, unsigned size,
unsigned mb_count)
int ff_dxva2_common_end_frame(AVCodecContext *avctx, AVFrame *frame,
const void *pp, unsigned pp_size,
const void *qm, unsigned qm_size,
int (*commit_bs_si)(AVCodecContext *,
DECODER_BUFFER_DESC *bs,
DECODER_BUFFER_DESC *slice))
