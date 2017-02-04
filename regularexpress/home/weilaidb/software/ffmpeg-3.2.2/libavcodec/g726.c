typedef struct Float11  Float11;
i2f
mult
sgn
typedef struct G726Tables  G726Tables;
typedef struct G726Context  G726Context;
static const int quant_tbl16[] =
;
static const int16_t iquant_tbl16[] =
;
static const int16_t W_tbl16[] =
;
static const uint8_t F_tbl16[] =
;
static const int quant_tbl24[] =
;
static const int16_t iquant_tbl24[] =
;
static const int16_t W_tbl24[] =
;
static const uint8_t F_tbl24[] =
;
static const int quant_tbl32[] =
;
static const int16_t iquant_tbl32[] =
;
static const int16_t W_tbl32[] =
;
static const uint8_t F_tbl32[] =
;
static const int quant_tbl40[] =
;
static const int16_t iquant_tbl40[] =
;
static const int16_t W_tbl40[] =
;
static const uint8_t F_tbl40[] =
;
static const G726Tables G726Tables_pool[] =
;
quant
inverse_quant
g726_decode
g726_reset
#if CONFIG_ADPCM_G726_ENCODER
g726_encode
g726_encode_init
g726_encode_frame
OFFSET offsetof(G726Context, x)
#define AE AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass g726_class = ;
static const AVCodecDefault defaults[] = ;
AVCodec ff_adpcm_g726_encoder = ;
#if CONFIG_ADPCM_G726_DECODER || CONFIG_ADPCM_G726LE_DECODER
g726_decode_init
g726_decode_frame
g726_decode_flush
#if CONFIG_ADPCM_G726_DECODER
AVCodec ff_adpcm_g726_decoder = ;
#if CONFIG_ADPCM_G726LE_DECODER
AVCodec ff_adpcm_g726le_decoder = ;
