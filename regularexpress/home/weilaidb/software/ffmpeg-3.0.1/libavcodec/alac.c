#define ALAC_EXTRADATA_SIZE 36
typedef struct ALACContext  ALACContext;
static inline unsigned int decode_scalar(GetBitContext *gb, int k, int bps)
static int rice_decompress(ALACContext *alac, int32_t *output_buffer,
int nb_samples, int bps, int rice_history_mult)
static inline int sign_only(int v)
static void lpc_prediction(int32_t *error_buffer, int32_t *buffer_out,
int nb_samples, int bps, int16_t *lpc_coefs,
int lpc_order, int lpc_quant)
static int decode_element(AVCodecContext *avctx, AVFrame *frame, int ch_index,
int channels)
static int alac_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static av_cold int alac_decode_close(AVCodecContext *avctx)
static int allocate_buffers(ALACContext *alac)
static int alac_set_info(ALACContext *alac)
static av_cold int alac_decode_init(AVCodecContext * avctx)
#if HAVE_THREADS
static int init_thread_copy(AVCodecContext *avctx)
static const AVOption options[] = ;
static const AVClass alac_class = ;
AVCodec ff_alac_decoder = ;
