typedef struct FLACContext  FLACContext;
static int allocate_buffers(FLACContext *s);
static void flac_set_bps(FLACContext *s)
static av_cold int flac_decode_init(AVCodecContext *avctx)
static void dump_headers(AVCodecContext *avctx, FLACStreaminfo *s)
static int allocate_buffers(FLACContext *s)
static int parse_streaminfo(FLACContext *s, const uint8_t *buf, int buf_size)
static int get_metadata_size(const uint8_t *buf, int buf_size)
static int decode_residuals(FLACContext *s, int32_t *decoded, int pred_order)
static int decode_subframe_fixed(FLACContext *s, int32_t *decoded,
int pred_order, int bps)
static void lpc_analyze_remodulate(int32_t *decoded, const int coeffs[32],
int order, int qlevel, int len, int bps)
static int decode_subframe_lpc(FLACContext *s, int32_t *decoded, int pred_order,
int bps)
static inline int decode_subframe(FLACContext *s, int channel)
static int decode_frame(FLACContext *s)
static int flac_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
#if HAVE_THREADS
static int init_thread_copy(AVCodecContext *avctx)
static av_cold int flac_decode_close(AVCodecContext *avctx)
static const AVOption options[] = ;
static const AVClass flac_decoder_class = ;
AVCodec ff_flac_decoder = ;
