static const uint8_t simple_mmx_permutation[64] = ;
static const uint8_t idct_sse2_row_perm[8] = ;
av_cold int ff_init_scantable_permutation_x86(uint8_t *idct_permutation,
enum idct_permutation_type perm_type)
av_cold void ff_idctdsp_init_x86(IDCTDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth)
