#define AVCODEC_MIPS_AACSBR_MIPS_H
#if HAVE_INLINE_ASM
sbr_qmf_analysis_mips
#if HAVE_MIPSFPU
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
sbr_qmf_synthesis_mips
#define sbr_qmf_analysis sbr_qmf_analysis_mips
#define sbr_qmf_synthesis sbr_qmf_synthesis_mips
