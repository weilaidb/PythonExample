#define BITSTREAM_READER_LE
typedef struct SavedContext  SavedContext;
typedef struct WavpackFrameContext  WavpackFrameContext;
#define WV_MAX_FRAME_DECODERS 14
typedef struct WavpackContext  WavpackContext;
#define LEVEL_DECAY(a)  (((a) + 0x80) >> 8)
static av_always_inline int get_tail(GetBitContext *gb, int k)
static void update_error_limit(WavpackFrameContext *ctx)
static int wv_get_value(WavpackFrameContext *ctx, GetBitContext *gb,
int channel, int *last)
static inline int wv_get_value_integer(WavpackFrameContext *s, uint32_t *crc,
int S)
static float wv_get_value_float(WavpackFrameContext *s, uint32_t *crc, int S)
static void wv_reset_saved_context(WavpackFrameContext *s)
static inline int wv_check_crc(WavpackFrameContext *s, uint32_t crc,
uint32_t crc_extra_bits)
static inline int wv_unpack_stereo(WavpackFrameContext *s, GetBitContext *gb,
void *dst_l, void *dst_r, const int type)
static inline int wv_unpack_mono(WavpackFrameContext *s, GetBitContext *gb,
void *dst, const int type)
static av_cold int wv_alloc_frame_context(WavpackContext *c)
#if HAVE_THREADS
static int init_thread_copy(AVCodecContext *avctx)
static av_cold int wavpack_decode_init(AVCodecContext *avctx)
static av_cold int wavpack_decode_end(AVCodecContext *avctx)
static int wavpack_decode_block(AVCodecContext *avctx, int block_no,
AVFrame *frame, const uint8_t *buf, int buf_size)
static void wavpack_decode_flush(AVCodecContext *avctx)
static int wavpack_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
AVCodec ff_wavpack_decoder = ;
