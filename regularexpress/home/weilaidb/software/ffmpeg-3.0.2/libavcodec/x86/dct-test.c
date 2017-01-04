#if (CONFIG_PRORES_DECODER || CONFIG_PRORES_LGPL_DECODER) && ARCH_X86_64 && HAVE_YASM
void ff_prores_idct_put_10_sse2(uint16_t *dst, int linesize,
int16_t *block, int16_t *qmat);
#define PR_WRAP(INSN) \
static void ff_prores_idct_put_10_##INSN##_wrap(int16_t *dst)
PR_WRAP(sse2)
# if HAVE_AVX_EXTERNAL
void ff_prores_idct_put_10_avx(uint16_t *dst, int linesize,
int16_t *block, int16_t *qmat);
PR_WRAP(avx)
# endif
static const struct algo fdct_tab_arch[] = ;
static const struct algo idct_tab_arch[] = ;
static const uint8_t idct_simple_mmx_perm[64] = ;
static const uint8_t idct_sse2_row_perm[8] = ;
static int permute_x86(int16_t dst[64], const int16_t src[64],
enum idct_permutation_type perm_type)
