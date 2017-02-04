#define AVCODEC_CABAC_FUNCTIONS_H
#define UNCHECKED_BITSTREAM_READER !CONFIG_SAFE_BITSTREAM_READER
#if ARCH_AARCH64
#   include
#if ARCH_ARM
#   include
#if ARCH_X86
#   include
static const uint8_t * const ff_h264_norm_shift = ff_h264_cabac_tables + H264_NORM_SHIFT_OFFSET;
static const uint8_t * const ff_h264_lps_range = ff_h264_cabac_tables + H264_LPS_RANGE_OFFSET;
static const uint8_t * const ff_h264_mlps_state = ff_h264_cabac_tables + H264_MLPS_STATE_OFFSET;
static const uint8_t * const ff_h264_last_coeff_flag_offset_8x8 = ff_h264_cabac_tables + H264_LAST_COEFF_FLAG_OFFSET_8x8_OFFSET;
#if !defined(get_cabac_bypass) || !defined(get_cabac_terminate)
refill
renorm_cabac_decoder_once
refill2
get_cabac_inline
get_cabac_noinline
get_cabac
get_cabac_bypass
get_cabac_bypass_sign
get_cabac_terminate
skip_bytes
