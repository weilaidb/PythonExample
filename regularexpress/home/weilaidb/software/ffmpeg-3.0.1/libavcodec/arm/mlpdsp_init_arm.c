void ff_mlp_filter_channel_arm(int32_t *state, const int32_t *coeff,
int firorder, int iirorder,
unsigned int filter_shift, int32_t mask,
int blocksize, int32_t *sample_buffer);
void ff_mlp_rematrix_channel_arm(int32_t *samples,
const int32_t *coeffs,
const uint8_t *bypassed_lsbs,
const int8_t *noise_buffer,
int index,
unsigned int dest_ch,
uint16_t blockpos,
unsigned int maxchan,
int matrix_noise_shift,
int access_unit_size_pow2,
int32_t mask);
#define DECLARE_PACK(order,channels,shift) \
int32_t ff_mlp_pack_output_##order##order_##channels##ch_##shift##shift_armv6(int32_t, uint16_t, int32_t (*)[], void *, uint8_t*, int8_t *, uint8_t, int);
#define ENUMERATE_PACK(order,channels,shift) \
ff_mlp_pack_output_##order##order_##channels##ch_##shift##shift_armv6,
#define PACK_CHANNELS(macro,order,channels) \
macro(order,channels,0) \
macro(order,channels,1) \
macro(order,channels,2) \
macro(order,channels,3) \
macro(order,channels,4) \
macro(order,channels,5) \
macro(order,channels,mixed)
#define PACK_ORDER(macro,order) \
PACK_CHANNELS(macro,order,2) \
PACK_CHANNELS(macro,order,6) \
PACK_CHANNELS(macro,order,8)
#define PACK_ALL(macro) \
PACK_ORDER(macro,outof) \
PACK_ORDER(macro,in)
PACK_ALL(DECLARE_PACK)
#define ff_mlp_pack_output_outoforder_2ch_mixedshift_armv6 0
#define ff_mlp_pack_output_outoforder_6ch_mixedshift_armv6 0
#define ff_mlp_pack_output_outoforder_8ch_mixedshift_armv6 0
#if CONFIG_THUMB
#define ff_mlp_pack_output_outoforder_2ch_0shift_armv6 0
#define ff_mlp_pack_output_outoforder_2ch_1shift_armv6 0
#define ff_mlp_pack_output_outoforder_2ch_2shift_armv6 0
#define ff_mlp_pack_output_outoforder_2ch_3shift_armv6 0
#define ff_mlp_pack_output_outoforder_2ch_4shift_armv6 0
#define ff_mlp_pack_output_outoforder_2ch_5shift_armv6 0
#define ff_mlp_pack_output_outoforder_6ch_0shift_armv6 0
#define ff_mlp_pack_output_outoforder_6ch_1shift_armv6 0
#define ff_mlp_pack_output_outoforder_6ch_2shift_armv6 0
#define ff_mlp_pack_output_outoforder_6ch_3shift_armv6 0
#define ff_mlp_pack_output_outoforder_6ch_4shift_armv6 0
#define ff_mlp_pack_output_outoforder_6ch_5shift_armv6 0
#define ff_mlp_pack_output_outoforder_8ch_0shift_armv6 0
#define ff_mlp_pack_output_outoforder_8ch_1shift_armv6 0
#define ff_mlp_pack_output_outoforder_8ch_2shift_armv6 0
#define ff_mlp_pack_output_outoforder_8ch_3shift_armv6 0
#define ff_mlp_pack_output_outoforder_8ch_4shift_armv6 0
#define ff_mlp_pack_output_outoforder_8ch_5shift_armv6 0
static int32_t (*mlp_select_pack_output_armv6(uint8_t *ch_assign,
int8_t *output_shift,
uint8_t max_matrix_channel,
int is32))(int32_t, uint16_t, int32_t (*)[], void *, uint8_t*, int8_t *, uint8_t, int)
av_cold void ff_mlpdsp_init_arm(MLPDSPContext *c)
