typedef struct ATRAC3PContext  ATRAC3PContext;
static av_cold int atrac3p_decode_close(AVCodecContext *avctx)
static av_cold int set_channel_params(ATRAC3PContext *ctx,
AVCodecContext *avctx)
static av_cold int atrac3p_decode_init(AVCodecContext *avctx)
static void decode_residual_spectrum(Atrac3pChanUnitCtx *ctx,
float out[2][ATRAC3P_FRAME_SAMPLES],
int num_channels,
AVCodecContext *avctx)
static void reconstruct_frame(ATRAC3PContext *ctx, Atrac3pChanUnitCtx *ch_unit,
int num_channels, AVCodecContext *avctx)
static int atrac3p_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
AVCodec ff_atrac3p_decoder = ;
