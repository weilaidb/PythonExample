#define AVCODEC_AC3ENC_H
#define CONFIG_AC3ENC_FLOAT 0
OFFSET offsetof(AC3EncodeContext, options.param)
#define AC3ENC_PARAM (AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_ENCODING_PARAM)
#define AC3ENC_TYPE_AC3_FIXED   0
#define AC3ENC_TYPE_AC3         1
#define AC3ENC_TYPE_EAC3        2
#if CONFIG_AC3ENC_FLOAT
AC3_NAME ff_ac3_float_ ## x
MAC_COEF ((d)+=(a)*(b))
#define COEF_MIN (-16777215.0/16777216.0)
#define COEF_MAX ( 16777215.0/16777216.0)
#define NEW_CPL_COORD_THRESHOLD 0.03
typedef float SampleType;
typedef float CoefType;
typedef float CoefSumType;
AC3_NAME ff_ac3_fixed_ ## x
MAC_COEF MAC64(d,a,b)
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
ff_ac3_encode_init;
ff_ac3_float_encode_init;
ff_ac3_encode_close;
ff_ac3_validate_metadata;
ff_ac3_adjust_frame_size;
ff_ac3_compute_coupling_strategy;
ff_ac3_apply_rematrixing;
ff_ac3_process_exponents;
ff_ac3_compute_bit_allocation;
ff_ac3_group_exponents;
ff_ac3_quantize_mantissas;
ff_ac3_output_frame;
ff_ac3_fixed_mdct_end;
ff_ac3_float_mdct_end;
ff_ac3_fixed_mdct_init;
ff_ac3_float_mdct_init;
ff_ac3_fixed_allocate_sample_buffers;
ff_ac3_float_allocate_sample_buffers;
ff_ac3_fixed_encode_frame;
ff_ac3_float_encode_frame;
