#define AVCODEC_MIPS_LSP_MIPS_H
#if HAVE_MIPSFPU && HAVE_INLINE_ASM
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
ff_lsp2polyf_mips
#define ff_lsp2polyf ff_lsp2polyf_mips
