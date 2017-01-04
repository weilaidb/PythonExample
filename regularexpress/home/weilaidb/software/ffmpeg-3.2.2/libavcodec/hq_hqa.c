static inline void put_blocks(HQContext *c, AVFrame *pic,
int plane, int x, int y, int ilace,
int16_t *block0, int16_t *block1)
static int hq_decode_block(HQContext *c, GetBitContext *gb, int16_t block[64],
int qsel, int is_chroma, int is_hqa)
static int hq_decode_mb(HQContext *c, AVFrame *pic,
GetBitContext *gb, int x, int y)
static int hq_decode_frame(HQContext *ctx, AVFrame *pic,
int prof_num, size_t data_size)
static int hqa_decode_mb(HQContext *c, AVFrame *pic, int qgroup,
GetBitContext *gb, int x, int y)
static int hqa_decode_slice(HQContext *ctx, AVFrame *pic, GetBitContext *gb,
int quant, int slice_no, int w, int h)
static int hqa_decode_frame(HQContext *ctx, AVFrame *pic, size_t data_size)
static int hq_hqa_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
static av_cold int hq_hqa_decode_init(AVCodecContext *avctx)
static av_cold int hq_hqa_decode_close(AVCodecContext *avctx)
AVCodec ff_hq_hqa_decoder = ;
