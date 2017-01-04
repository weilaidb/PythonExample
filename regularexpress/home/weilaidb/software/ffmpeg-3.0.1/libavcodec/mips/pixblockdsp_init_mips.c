#if HAVE_MSA
static av_cold void pixblockdsp_init_msa(PixblockDSPContext *c,
AVCodecContext *avctx,
unsigned high_bit_depth)
#if HAVE_MMI
static av_cold void pixblockdsp_init_mmi(PixblockDSPContext *c,
AVCodecContext *avctx, unsigned high_bit_depth)
void ff_pixblockdsp_init_mips(PixblockDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth)
