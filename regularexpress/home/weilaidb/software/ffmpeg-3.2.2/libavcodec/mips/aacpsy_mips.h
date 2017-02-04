#define AVCODEC_MIPS_AACPSY_MIPS_H
#if HAVE_INLINE_ASM && HAVE_MIPSFPU && ( PSY_LAME_FIR_LEN == 21 )
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
calc_thr_3gpp_mips
psy_hp_filter_mips
#define calc_thr_3gpp calc_thr_3gpp_mips
#define psy_hp_filter psy_hp_filter_mips
