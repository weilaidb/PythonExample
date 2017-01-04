void ff_clear_block_mmx(int16_t *block);
void ff_clear_block_sse(int16_t *block);
void ff_clear_blocks_mmx(int16_t *blocks);
void ff_clear_blocks_sse(int16_t *blocks);
av_cold void ff_blockdsp_init_x86(BlockDSPContext *c,
AVCodecContext *avctx)
