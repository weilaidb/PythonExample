REMATRIX_CHANNEL_FUNC \
void ff_mlp_rematrix_channel_##opt(int32_t *samples, \
const int32_t *coeffs, \
const uint8_t *bypassed_lsbs, \
const int8_t *noise_buffer, \
int index, \
unsigned int dest_ch, \
uint16_t blockpos, \
unsigned int maxchan, \
int matrix_noise_shift, \
int access_unit_size_pow2, \
int32_t mask);
REMATRIX_CHANNEL_FUNC(sse4)
REMATRIX_CHANNEL_FUNC(avx2_bmi2)
#if HAVE_7REGS && HAVE_INLINE_ASM && HAVE_INLINE_ASM_NONLOCAL_LABELS
extern char ff_mlp_firorder_8;
extern char ff_mlp_firorder_7;
extern char ff_mlp_firorder_6;
extern char ff_mlp_firorder_5;
extern char ff_mlp_firorder_4;
extern char ff_mlp_firorder_3;
extern char ff_mlp_firorder_2;
extern char ff_mlp_firorder_1;
extern char ff_mlp_firorder_0;
extern char ff_mlp_iirorder_4;
extern char ff_mlp_iirorder_3;
extern char ff_mlp_iirorder_2;
extern char ff_mlp_iirorder_1;
extern char ff_mlp_iirorder_0;
static const void * const firtable[9] = ;
static const void * const iirtable[5] = ;
#if ARCH_X86_64
MLPMUL   \
LABEL_MANGLE(label) \
\
\
\
FIRMULREG\
LABEL_MANGLE(label) \
\
\
#define CLEAR_ACCUM                   \
#define SHIFT_ACCUM                   \
#define ACCUM
#define RESULT
#define RESULT32
MLPMUL  \
LABEL_MANGLE(label) \
\
\
\
FIRMULREG  \
MLPMUL(label, #offset, )
#define CLEAR_ACCUM                  \
\
#define SHIFT_ACCUM                  \
\
\
\
\
#define ACCUM
#define RESULT
#define RESULT32
AV_STRINGIFY
AV_STRINGIFY)
AV_STRINGIFY
FIRMUL MLPMUL(label, #offset,   )
IIRMUL MLPMUL(label, #offset, IOFFS, IOFFC)
mlp_filter_channel_x86
ff_mlpdsp_init_x86
