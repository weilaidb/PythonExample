#define FFT_FLOAT 1
#define FFT_FIXED_32 0
#define USE_FIXED 0
#if ARCH_ARM
#   include "arm/aac.h"
#elif ARCH_MIPS
#   include "mips/aacdec_mips.h"
static av_always_inline void reset_predict_state(PredictorState *ps)
static inline float *VMUL2(float *dst, const float *v, unsigned idx,
const float *scale)
static inline float *VMUL4(float *dst, const float *v, unsigned idx,
const float *scale)
static inline float *VMUL2S(float *dst, const float *v, unsigned idx,
unsigned sign, const float *scale)
static inline float *VMUL4S(float *dst, const float *v, unsigned idx,
unsigned sign, const float *scale)
static av_always_inline float flt16_round(float pf)
static av_always_inline float flt16_even(float pf)
static av_always_inline float flt16_trunc(float pf)
static av_always_inline void predict(PredictorState *ps, float *coef,
int output_enable)
static void apply_dependent_coupling(AACContext *ac,
SingleChannelElement *target,
ChannelElement *cce, int index)
static void apply_independent_coupling(AACContext *ac,
SingleChannelElement *target,
ChannelElement *cce, int index)
#define LOAS_SYNC_WORD   0x2b7
struct LATMContext ;
static inline uint32_t latm_get_value(GetBitContext *b)
static int latm_decode_audio_specific_config(struct LATMContext *latmctx,
GetBitContext *gb, int asclen)
static int read_stream_mux_config(struct LATMContext *latmctx,
GetBitContext *gb)
static int read_payload_length_info(struct LATMContext *ctx, GetBitContext *gb)
static int read_audio_mux_element(struct LATMContext *latmctx,
GetBitContext *gb)
static int latm_decode_frame(AVCodecContext *avctx, void *out,
int *got_frame_ptr, AVPacket *avpkt)
static av_cold int latm_decode_init(AVCodecContext *avctx)
AVCodec ff_aac_decoder = ;
AVCodec ff_aac_latm_decoder = ;
