static inline av_flatten int get_symbol_inline(RangeCoder *c, uint8_t *state,
int is_signed)
static av_noinline int get_symbol(RangeCoder *c, uint8_t *state, int is_signed)
static inline int get_vlc_symbol(GetBitContext *gb, VlcState *const state,
int bits)
static av_always_inline void decode_line(FFV1Context *s, int w,
int16_t *sample[2],
int plane_index, int bits)
static void decode_plane(FFV1Context *s, uint8_t *src,
int w, int h, int stride, int plane_index,
int pixel_stride)
static void decode_rgb_frame(FFV1Context *s, uint8_t *src[3], int w, int h, int stride[3])
static int decode_slice_header(FFV1Context *f, FFV1Context *fs)
static int decode_slice(AVCodecContext *c, void *arg)
static int read_quant_table(RangeCoder *c, int16_t *quant_table, int scale)
static int read_quant_tables(RangeCoder *c,
int16_t quant_table[MAX_CONTEXT_INPUTS][256])
static int read_extra_header(FFV1Context *f)
static int read_header(FFV1Context *f)
static av_cold int decode_init(AVCodecContext *avctx)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame, AVPacket *avpkt)
#if HAVE_THREADS
static int init_thread_copy(AVCodecContext *avctx)
static void copy_fields(FFV1Context *fsdst, FFV1Context *fssrc, FFV1Context *fsrc)
#if HAVE_THREADS
static int update_thread_context(AVCodecContext *dst, const AVCodecContext *src)
AVCodec ff_ffv1_decoder = ;
