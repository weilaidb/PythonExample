static const int xa_adpcm_table[5][2] = ;
static const int ea_adpcm_table[] = ;
static const int swf_index_tables[4][16] = ;
typedef struct ADPCMDecodeContext  ADPCMDecodeContext;
static av_cold int adpcm_decode_init(AVCodecContext * avctx)
static inline int16_t adpcm_ima_expand_nibble(ADPCMChannelStatus *c, int8_t nibble, int shift)
static inline int16_t adpcm_ima_wav_expand_nibble(ADPCMChannelStatus *c, GetBitContext *gb, int bps)
static inline int adpcm_ima_qt_expand_nibble(ADPCMChannelStatus *c, int nibble, int shift)
static inline int16_t adpcm_ms_expand_nibble(ADPCMChannelStatus *c, int nibble)
static inline int16_t adpcm_ima_oki_expand_nibble(ADPCMChannelStatus *c, int nibble)
static inline int16_t adpcm_ct_expand_nibble(ADPCMChannelStatus *c, int8_t nibble)
static inline int16_t adpcm_sbpro_expand_nibble(ADPCMChannelStatus *c, int8_t nibble, int size, int shift)
static inline int16_t adpcm_yamaha_expand_nibble(ADPCMChannelStatus *c, uint8_t nibble)
static inline int16_t adpcm_mtaf_expand_nibble(ADPCMChannelStatus *c, uint8_t nibble)
static int xa_decode(AVCodecContext *avctx, int16_t *out0, int16_t *out1,
const uint8_t *in, ADPCMChannelStatus *left,
ADPCMChannelStatus *right, int channels, int sample_offset)
static void adpcm_swf_decode(AVCodecContext *avctx, const uint8_t *buf, int buf_size, int16_t *samples)
static int get_nb_samples(AVCodecContext *avctx, GetByteContext *gb,
int buf_size, int *coded_samples, int *approx_nb_samples)
static int adpcm_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static void adpcm_flush(AVCodecContext *avctx)
static const enum AVSampleFormat sample_fmts_s16[]  = ;
static const enum AVSampleFormat sample_fmts_s16p[] = ;
static const enum AVSampleFormat sample_fmts_both[] = ;
#define ADPCM_DECODER(id_, sample_fmts_, name_, long_name_) \
AVCodec ff_ ## name_ ## _decoder =
ADPCM_DECODER(AV_CODEC_ID_ADPCM_4XM,         sample_fmts_s16p, adpcm_4xm,         "ADPCM 4X Movie");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_AFC,         sample_fmts_s16p, adpcm_afc,         "ADPCM Nintendo Gamecube AFC");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_AICA,        sample_fmts_s16p, adpcm_aica,        "ADPCM Yamaha AICA");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_CT,          sample_fmts_s16,  adpcm_ct,          "ADPCM Creative Technology");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_DTK,         sample_fmts_s16p, adpcm_dtk,         "ADPCM Nintendo Gamecube DTK");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_EA,          sample_fmts_s16,  adpcm_ea,          "ADPCM Electronic Arts");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_EA_MAXIS_XA, sample_fmts_s16,  adpcm_ea_maxis_xa, "ADPCM Electronic Arts Maxis CDROM XA");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_EA_R1,       sample_fmts_s16p, adpcm_ea_r1,       "ADPCM Electronic Arts R1");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_EA_R2,       sample_fmts_s16p, adpcm_ea_r2,       "ADPCM Electronic Arts R2");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_EA_R3,       sample_fmts_s16p, adpcm_ea_r3,       "ADPCM Electronic Arts R3");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_EA_XAS,      sample_fmts_s16p, adpcm_ea_xas,      "ADPCM Electronic Arts XAS");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_AMV,     sample_fmts_s16,  adpcm_ima_amv,     "ADPCM IMA AMV");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_APC,     sample_fmts_s16,  adpcm_ima_apc,     "ADPCM IMA CRYO APC");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_DAT4,    sample_fmts_s16,  adpcm_ima_dat4,    "ADPCM IMA Eurocom DAT4");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_DK3,     sample_fmts_s16,  adpcm_ima_dk3,     "ADPCM IMA Duck DK3");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_DK4,     sample_fmts_s16,  adpcm_ima_dk4,     "ADPCM IMA Duck DK4");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_EA_EACS, sample_fmts_s16,  adpcm_ima_ea_eacs, "ADPCM IMA Electronic Arts EACS");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_EA_SEAD, sample_fmts_s16,  adpcm_ima_ea_sead, "ADPCM IMA Electronic Arts SEAD");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_ISS,     sample_fmts_s16,  adpcm_ima_iss,     "ADPCM IMA Funcom ISS");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_OKI,     sample_fmts_s16,  adpcm_ima_oki,     "ADPCM IMA Dialogic OKI");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_QT,      sample_fmts_s16p, adpcm_ima_qt,      "ADPCM IMA QuickTime");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_RAD,     sample_fmts_s16,  adpcm_ima_rad,     "ADPCM IMA Radical");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_SMJPEG,  sample_fmts_s16,  adpcm_ima_smjpeg,  "ADPCM IMA Loki SDL MJPEG");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_WAV,     sample_fmts_s16p, adpcm_ima_wav,     "ADPCM IMA WAV");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_WS,      sample_fmts_both, adpcm_ima_ws,      "ADPCM IMA Westwood");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_MS,          sample_fmts_s16,  adpcm_ms,          "ADPCM Microsoft");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_MTAF,        sample_fmts_s16p, adpcm_mtaf,        "ADPCM MTAF");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_PSX,         sample_fmts_s16p, adpcm_psx,         "ADPCM Playstation");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_SBPRO_2,     sample_fmts_s16,  adpcm_sbpro_2,     "ADPCM Sound Blaster Pro 2-bit");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_SBPRO_3,     sample_fmts_s16,  adpcm_sbpro_3,     "ADPCM Sound Blaster Pro 2.6-bit");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_SBPRO_4,     sample_fmts_s16,  adpcm_sbpro_4,     "ADPCM Sound Blaster Pro 4-bit");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_SWF,         sample_fmts_s16,  adpcm_swf,         "ADPCM Shockwave Flash");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_THP_LE,      sample_fmts_s16p, adpcm_thp_le,      "ADPCM Nintendo THP (little-endian)");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_THP,         sample_fmts_s16p, adpcm_thp,         "ADPCM Nintendo THP");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_XA,          sample_fmts_s16p, adpcm_xa,          "ADPCM CDROM XA");
ADPCM_DECODER(AV_CODEC_ID_ADPCM_YAMAHA,      sample_fmts_s16,  adpcm_yamaha,      "ADPCM Yamaha");
