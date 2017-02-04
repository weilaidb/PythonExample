#if HAVE_INLINE_ASM
#if HAVE_MIPSDSP
ac3_bit_alloc_calc_bap_mips
ac3_update_bap_counts_mips
#if HAVE_MIPSFPU
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
float_to_fixed24_mips
ac3_downmix_mips[2],
int out_ch, int in_ch, int len)
ff_ac3dsp_init_mips
