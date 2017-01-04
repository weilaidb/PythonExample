#define AVCODEC_ATRAC3PLUS_H
#define ATRAC3P_SUBBANDS        16
#define ATRAC3P_SUBBAND_SAMPLES 128
#define ATRAC3P_FRAME_SAMPLES   (ATRAC3P_SUBBAND_SAMPLES * ATRAC3P_SUBBANDS)
#define ATRAC3P_PQF_FIR_LEN     12
#define ATRAC3P_POWER_COMP_OFF  15
enum Atrac3pChannelUnitTypes ;
typedef struct Atrac3pIPQFChannelCtx  Atrac3pIPQFChannelCtx;
typedef struct Atrac3pWaveEnvelope  Atrac3pWaveEnvelope;
typedef struct Atrac3pWavesData  Atrac3pWavesData;
typedef struct Atrac3pWaveParam  Atrac3pWaveParam;
typedef struct Atrac3pChanParams  Atrac3pChanParams;
typedef struct Atrac3pWaveSynthParams  Atrac3pWaveSynthParams;
typedef struct Atrac3pChanUnitCtx  Atrac3pChanUnitCtx;
void ff_atrac3p_init_vlcs(void);
int ff_atrac3p_decode_channel_unit(GetBitContext *gb, Atrac3pChanUnitCtx *ctx,
int num_channels, AVCodecContext *avctx);
void ff_atrac3p_init_imdct(AVCodecContext *avctx, FFTContext *mdct_ctx);
void ff_atrac3p_init_wave_synth(void);
void ff_atrac3p_generate_tones(Atrac3pChanUnitCtx *ch_unit, AVFloatDSPContext *fdsp,
int ch_num, int sb, float *out);
void ff_atrac3p_power_compensation(Atrac3pChanUnitCtx *ctx, int ch_index,
float *sp, int rng_index, int sb_num);
void ff_atrac3p_imdct(AVFloatDSPContext *fdsp, FFTContext *mdct_ctx, float *pIn,
float *pOut, int wind_id, int sb);
void ff_atrac3p_ipqf(FFTContext *dct_ctx, Atrac3pIPQFChannelCtx *hist,
const float *in, float *out);
extern const uint16_t ff_atrac3p_qu_to_spec_pos[33];
extern const float ff_atrac3p_sf_tab[64];
extern const float ff_atrac3p_mant_tab[8];
