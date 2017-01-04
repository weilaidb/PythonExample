#if HAVE_MSA
static av_cold void idctdsp_init_msa(IDCTDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth)
#if HAVE_MMI
static av_cold void idctdsp_init_mmi(IDCTDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth)
av_cold void ff_idctdsp_init_mips(IDCTDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth)
