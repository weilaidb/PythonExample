#undef NDEBUG
void ff_xvmc_init_block(MpegEncContext *s)
static void exchange_uv(MpegEncContext *s)
void ff_xvmc_pack_pblocks(MpegEncContext *s, int cbp)
static int ff_xvmc_field_start(AVCodecContext *avctx, const uint8_t *buf, uint32_t buf_size)
static int ff_xvmc_field_end(AVCodecContext *avctx)
static void ff_xvmc_decode_mb(struct MpegEncContext *s)
#if CONFIG_MPEG1_XVMC_HWACCEL
AVHWAccel ff_mpeg1_xvmc_hwaccel = ;
#if CONFIG_MPEG2_XVMC_HWACCEL
AVHWAccel ff_mpeg2_xvmc_hwaccel = ;
