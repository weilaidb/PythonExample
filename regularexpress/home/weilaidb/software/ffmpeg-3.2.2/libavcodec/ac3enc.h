#define AVCODEC_AC3ENC_H
#define CONFIG_AC3ENC_FLOAT 0
#define OFFSET(param) offsetof(AC3EncodeContext, options.param)
#define AC3ENC_PARAM (AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_ENCODING_PARAM)
#define AC3ENC_TYPE_AC3_FIXED   0
#define AC3ENC_TYPE_AC3         1
#define AC3ENC_TYPE_EAC3        2
#if CONFIG_AC3ENC_FLOAT
#define AC3_NAME(x) ff_ac3_float_ ## x
#define MAC_COEF(d,a,b) ((d)+=(a)*(b))
#define COEF_MIN (-16777215.0/16777216.0)
#define COEF_MAX ( 16777215.0/16777216.0)
#define NEW_CPL_COORD_THRESHOLD 0.03
typedef float SampleType;
typedef float CoefType;
typedef float CoefSumType;
#define AC3_NAME(x) ff_ac3_fixed_ ## x
#define MAC_COEF(d,a,b) MAC64(d,a,b)
#define COEF_MIN -16777215
#define COEF_MAX  16777215
#define NEW_CPL_COORD_THRESHOLD 503317
typedef int16_t SampleType;
typedef int32_t CoefType;
typedef int64_t CoefSumType;
#define AC3ENC_OPT_NONE            -1
#define AC3ENC_OPT_AUTO            -1
#define AC3ENC_OPT_OFF              0
#define AC3ENC_OPT_ON               1
#define AC3ENC_OPT_NOT_INDICATED    0
#define AC3ENC_OPT_MODE_ON          2
#define AC3ENC_OPT_MODE_OFF         1
#define AC3ENC_OPT_DSUREX_DPLIIZ    3
#define AC3ENC_OPT_LARGE_ROOM       1
#define AC3ENC_OPT_SMALL_ROOM       2
#define AC3ENC_OPT_DOWNMIX_LTRT     1
#define AC3ENC_OPT_DOWNMIX_LORO     2
#define AC3ENC_OPT_DOWNMIX_DPLII    3
#define AC3ENC_OPT_ADCONV_STANDARD  0
#define AC3ENC_OPT_ADCONV_HDCD      1
typedef struct AC3EncOptions  AC3EncOptions;
typedef struct AC3Block  AC3Block;
typedef struct AC3EncodeContext  AC3EncodeContext;
extern const uint64_t ff_ac3_channel_layouts[19];
int ff_ac3_encode_init(AVCodecContext *avctx);
int ff_ac3_float_encode_init(AVCodecContext *avctx);
int ff_ac3_encode_close(AVCodecContext *avctx);
int ff_ac3_validate_metadata(AC3EncodeContext *s);
void ff_ac3_adjust_frame_size(AC3EncodeContext *s);
void ff_ac3_compute_coupling_strategy(AC3EncodeContext *s);
void ff_ac3_apply_rematrixing(AC3EncodeContext *s);
void ff_ac3_process_exponents(AC3EncodeContext *s);
int ff_ac3_compute_bit_allocation(AC3EncodeContext *s);
void ff_ac3_group_exponents(AC3EncodeContext *s);
void ff_ac3_quantize_mantissas(AC3EncodeContext *s);
void ff_ac3_output_frame(AC3EncodeContext *s, unsigned char *frame);
void ff_ac3_fixed_mdct_end(AC3EncodeContext *s);
void ff_ac3_float_mdct_end(AC3EncodeContext *s);
int ff_ac3_fixed_mdct_init(AC3EncodeContext *s);
int ff_ac3_float_mdct_init(AC3EncodeContext *s);
int ff_ac3_fixed_allocate_sample_buffers(AC3EncodeContext *s);
int ff_ac3_float_allocate_sample_buffers(AC3EncodeContext *s);
int ff_ac3_fixed_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr);
int ff_ac3_float_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr);
