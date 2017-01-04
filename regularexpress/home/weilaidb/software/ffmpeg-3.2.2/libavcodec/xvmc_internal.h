#define AVCODEC_XVMC_INTERNAL_H
void ff_xvmc_init_block(MpegEncContext *s);
void ff_xvmc_pack_pblocks(MpegEncContext *s, int cbp);
