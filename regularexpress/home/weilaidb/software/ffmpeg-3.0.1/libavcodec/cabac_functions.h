#define AVCODEC_CABAC_FUNCTIONS_H
#define UNCHECKED_BITSTREAM_READER !CONFIG_SAFE_BITSTREAM_READER
#if ARCH_AARCH64
#   include "aarch64/cabac.h"
#if ARCH_ARM
#   include "arm/cabac.h"
#if ARCH_X86
#   include "x86/cabac.h"
static const uint8_t * const ff_h264_norm_shift = ff_h264_cabac_tables + H264_NORM_SHIFT_OFFSET;
static const uint8_t * const ff_h264_lps_range = ff_h264_cabac_tables + H264_LPS_RANGE_OFFSET;
static const uint8_t * const ff_h264_mlps_state = ff_h264_cabac_tables + H264_MLPS_STATE_OFFSET;
static const uint8_t * const ff_h264_last_coeff_flag_offset_8x8 = ff_h264_cabac_tables + H264_LAST_COEFF_FLAG_OFFSET_8x8_OFFSET;
#if !defined(get_cabac_bypass) || !defined(get_cabac_terminate)
static void refill(CABACContext *c)
static inline void renorm_cabac_decoder_once(CABACContext *c)
static void refill2(CABACContext *c)
static av_always_inline int get_cabac_inline(CABACContext *c, uint8_t * const state)
static int av_noinline av_unused get_cabac_noinline(CABACContext *c, uint8_t * const state)
static int av_unused get_cabac(CABACContext *c, uint8_t * const state)
static int av_unused get_cabac_bypass(CABACContext *c)
static av_always_inline int get_cabac_bypass_sign(CABACContext *c, int val)
static int av_unused get_cabac_terminate(CABACContext *c)
static av_unused const uint8_t* skip_bytes(CABACContext *c, int n)
