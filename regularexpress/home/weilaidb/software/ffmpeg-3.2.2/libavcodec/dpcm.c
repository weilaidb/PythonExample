typedef struct DPCMContext  DPCMContext;
static const int16_t interplay_delta_table[] = ;
static const int8_t sol_table_old[16] = ;
static const int8_t sol_table_new[16] = ;
static const int16_t sol_table_16[128] = ;
static av_cold int dpcm_decode_init(AVCodecContext *avctx)
static int dpcm_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
#define DPCM_DECODER(id_, name_, long_name_)                \
AVCodec ff_ ## name_ ## _decoder =
DPCM_DECODER(AV_CODEC_ID_INTERPLAY_DPCM, interplay_dpcm, "DPCM Interplay");
DPCM_DECODER(AV_CODEC_ID_ROQ_DPCM,       roq_dpcm,       "DPCM id RoQ");
DPCM_DECODER(AV_CODEC_ID_SDX2_DPCM,      sdx2_dpcm,      "DPCM Squareroot-Delta-Exact");
DPCM_DECODER(AV_CODEC_ID_SOL_DPCM,       sol_dpcm,       "DPCM Sol");
DPCM_DECODER(AV_CODEC_ID_XAN_DPCM,       xan_dpcm,       "DPCM Xan");
