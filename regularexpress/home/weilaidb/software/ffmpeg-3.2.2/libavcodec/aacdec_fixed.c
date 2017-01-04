#define FFT_FLOAT 0
#define FFT_FIXED_32 1
#define USE_FIXED 1
static av_always_inline void reset_predict_state(PredictorState *ps)
static const int exp2tab[4] = ;
static inline int *DEC_SPAIR(int *dst, unsigned idx)
static inline int *DEC_SQUAD(int *dst, unsigned idx)
static inline int *DEC_UPAIR(int *dst, unsigned idx, unsigned sign)
static inline int *DEC_UQUAD(int *dst, unsigned idx, unsigned sign)
static void vector_pow43(int *coefs, int len)
static void subband_scale(int *dst, int *src, int scale, int offset, int len)
static void noise_scale(int *coefs, int scale, int band_energy, int len)
static av_always_inline SoftFloat flt16_round(SoftFloat pf)
static av_always_inline SoftFloat flt16_even(SoftFloat pf)
static av_always_inline SoftFloat flt16_trunc(SoftFloat pf)
static av_always_inline void predict(PredictorState *ps, int *coef,
int output_enable)
static const int cce_scale_fixed[8] = ;
static void apply_dependent_coupling_fixed(AACContext *ac,
SingleChannelElement *target,
ChannelElement *cce, int index)
static void apply_independent_coupling_fixed(AACContext *ac,
SingleChannelElement *target,
ChannelElement *cce, int index)
AVCodec ff_aac_fixed_decoder = ;
