#define REMATRIX_CHANNEL_FUNC(opt) \
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
#define MLPMUL(label, offset, offs, offc)   \
LABEL_MANGLE(label)":             \n\t" \
"movslq "offset"+"offs"(%0), %%rax\n\t" \
"movslq "offset"+"offc"(%1), %%rdx\n\t" \
"imul                 %%rdx, %%rax\n\t" \
"add                  %%rax, %%rsi\n\t"
#define FIRMULREG(label, offset, firc)\
LABEL_MANGLE(label)":       \n\t" \
"movslq "#offset"(%0), %%rax\n\t" \
"imul        %"#firc", %%rax\n\t" \
"add            %%rax, %%rsi\n\t"
#define CLEAR_ACCUM                   \
"xor            %%rsi, %%rsi\n\t"
#define SHIFT_ACCUM                   \
"shr     %%cl,         %%rsi\n\t"
#define ACCUM    "%%rdx"
#define RESULT   "%%rsi"
#define RESULT32 "%%esi"
#define MLPMUL(label, offset, offs, offc)  \
LABEL_MANGLE(label)":            \n\t" \
"mov   "offset"+"offs"(%0), %%eax\n\t" \
"imull "offset"+"offc"(%1)       \n\t" \
"add                %%eax , %%esi\n\t" \
"adc                %%edx , %%ecx\n\t"
#define FIRMULREG(label, offset, firc)  \
MLPMUL(label, #offset, "0", "0")
#define CLEAR_ACCUM                  \
"xor           %%esi, %%esi\n\t" \
"xor           %%ecx, %%ecx\n\t"
#define SHIFT_ACCUM                  \
"mov           %%ecx, %%edx\n\t" \
"mov           %%esi, %%eax\n\t" \
"movzbl        %7   , %%ecx\n\t" \
"shrd    %%cl, %%edx, %%eax\n\t" \
#define ACCUM    "%%edx"
#define RESULT   "%%eax"
#define RESULT32 "%%eax"
#define BINC  AV_STRINGIFY(4* MAX_CHANNELS)
#define IOFFS AV_STRINGIFY(4*(MAX_FIR_ORDER + MAX_BLOCKSIZE))
#define IOFFC AV_STRINGIFY(4* MAX_FIR_ORDER)
#define FIRMUL(label, offset) MLPMUL(label, #offset,   "0",   "0")
#define IIRMUL(label, offset) MLPMUL(label, #offset, IOFFS, IOFFC)
static void mlp_filter_channel_x86(int32_t *state, const int32_t *coeff,
int firorder, int iirorder,
unsigned int filter_shift, int32_t mask,
int blocksize, int32_t *sample_buffer)
av_cold void ff_mlpdsp_init_x86(MLPDSPContext *c)
