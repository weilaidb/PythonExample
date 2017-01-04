#if HAVE_INLINE_ASM
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
typedef struct BandCodingPath  BandCodingPath;
static const uint8_t uquad_sign_bits[81] = ;
static const uint8_t upair7_sign_bits[64] = ;
static const uint8_t upair12_sign_bits[169] = ;
static const uint8_t esc_sign_bits[289] = ;
static void quantize_and_encode_band_cost_SQUAD_mips(struct AACEncContext *s,
PutBitContext *pb, const float *in, float *out,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy, const float ROUNDING)
static void quantize_and_encode_band_cost_UQUAD_mips(struct AACEncContext *s,
PutBitContext *pb, const float *in, float *out,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy, const float ROUNDING)
static void quantize_and_encode_band_cost_SPAIR_mips(struct AACEncContext *s,
PutBitContext *pb, const float *in, float *out,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy, const float ROUNDING)
static void quantize_and_encode_band_cost_UPAIR7_mips(struct AACEncContext *s,
PutBitContext *pb, const float *in, float *out,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy, const float ROUNDING)
static void quantize_and_encode_band_cost_UPAIR12_mips(struct AACEncContext *s,
PutBitContext *pb, const float *in, float *out,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy, const float ROUNDING)
static void quantize_and_encode_band_cost_ESC_mips(struct AACEncContext *s,
PutBitContext *pb, const float *in, float *out,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy, const float ROUNDING)
static void quantize_and_encode_band_cost_NONE_mips(struct AACEncContext *s,
PutBitContext *pb, const float *in, float *out,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy, const float ROUNDING)
static void quantize_and_encode_band_cost_ZERO_mips(struct AACEncContext *s,
PutBitContext *pb, const float *in, float *out,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy, const float ROUNDING)
static void (*const quantize_and_encode_band_cost_arr[])(struct AACEncContext *s,
PutBitContext *pb, const float *in, float *out,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy, const float ROUNDING) = ;
#define quantize_and_encode_band_cost(                                       \
s, pb, in, out, scaled, size, scale_idx, cb, \
lambda, uplim, bits, energy, ROUNDING)       \
quantize_and_encode_band_cost_arr[cb](                                   \
s, pb, in, out, scaled, size, scale_idx, cb, \
lambda, uplim, bits, energy, ROUNDING)
static void quantize_and_encode_band_mips(struct AACEncContext *s, PutBitContext *pb,
const float *in, float *out, int size, int scale_idx,
int cb, const float lambda, int rtz)
static float get_band_numbits_ZERO_mips(struct AACEncContext *s,
PutBitContext *pb, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits)
static float get_band_numbits_NONE_mips(struct AACEncContext *s,
PutBitContext *pb, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits)
static float get_band_numbits_SQUAD_mips(struct AACEncContext *s,
PutBitContext *pb, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits)
static float get_band_numbits_UQUAD_mips(struct AACEncContext *s,
PutBitContext *pb, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits)
static float get_band_numbits_SPAIR_mips(struct AACEncContext *s,
PutBitContext *pb, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits)
static float get_band_numbits_UPAIR7_mips(struct AACEncContext *s,
PutBitContext *pb, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits)
static float get_band_numbits_UPAIR12_mips(struct AACEncContext *s,
PutBitContext *pb, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits)
static float get_band_numbits_ESC_mips(struct AACEncContext *s,
PutBitContext *pb, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits)
static float (*const get_band_numbits_arr[])(struct AACEncContext *s,
PutBitContext *pb, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits) = ;
#define get_band_numbits(                                  \
s, pb, in, scaled, size, scale_idx, cb, \
lambda, uplim, bits)                    \
get_band_numbits_arr[cb](                              \
s, pb, in, scaled, size, scale_idx, cb, \
lambda, uplim, bits)
static float quantize_band_cost_bits(struct AACEncContext *s, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy, int rtz)
#if HAVE_MIPSFPU
static float get_band_cost_ZERO_mips(struct AACEncContext *s,
PutBitContext *pb, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy)
static float get_band_cost_NONE_mips(struct AACEncContext *s,
PutBitContext *pb, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy)
static float get_band_cost_SQUAD_mips(struct AACEncContext *s,
PutBitContext *pb, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy)
static float get_band_cost_UQUAD_mips(struct AACEncContext *s,
PutBitContext *pb, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy)
static float get_band_cost_SPAIR_mips(struct AACEncContext *s,
PutBitContext *pb, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy)
static float get_band_cost_UPAIR7_mips(struct AACEncContext *s,
PutBitContext *pb, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy)
static float get_band_cost_UPAIR12_mips(struct AACEncContext *s,
PutBitContext *pb, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy)
static float get_band_cost_ESC_mips(struct AACEncContext *s,
PutBitContext *pb, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy)
static float (*const get_band_cost_arr[])(struct AACEncContext *s,
PutBitContext *pb, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy) = ;
#define get_band_cost(                                  \
s, pb, in, scaled, size, scale_idx, cb, \
lambda, uplim, bits, energy)            \
get_band_cost_arr[cb](                              \
s, pb, in, scaled, size, scale_idx, cb, \
lambda, uplim, bits, energy)
static float quantize_band_cost(struct AACEncContext *s, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy, int rtz)
static void search_for_ms_mips(AACEncContext *s, ChannelElement *cpe)
void ff_aac_coder_init_mips(AACEncContext *c)
