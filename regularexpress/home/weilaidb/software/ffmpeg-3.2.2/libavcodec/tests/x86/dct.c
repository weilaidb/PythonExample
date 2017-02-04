#if (CONFIG_PRORES_DECODER || CONFIG_PRORES_LGPL_DECODER) && ARCH_X86_64 && HAVE_YASM
ff_prores_idct_put_10_sse2;
PR_WRAP \
static void ff_prores_idct_put_10_##INSN##_wrap(int16_t *dst)
PR_WRAP(sse2)
# if HAVE_AVX_EXTERNAL
ff_prores_idct_put_10_avx;
PR_WRAP(avx)
# endif
static const struct algo fdct_tab_arch[] = ;
static const struct algo idct_tab_arch[] = ;
static const uint8_t idct_simple_mmx_perm[64] = ;
static const uint8_t idct_sse2_row_perm[8] = ;
permute_x86
