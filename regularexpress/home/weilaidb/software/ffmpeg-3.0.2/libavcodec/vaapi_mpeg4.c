static int mpeg4_get_intra_dc_vlc_thr(Mpeg4DecContext *s)
static int vaapi_mpeg4_start_frame(AVCodecContext *avctx, av_unused const uint8_t *buffer, av_unused uint32_t size)
static int vaapi_mpeg4_decode_slice(AVCodecContext *avctx, const uint8_t *buffer, uint32_t size)
#if CONFIG_MPEG4_VAAPI_HWACCEL
AVHWAccel ff_mpeg4_vaapi_hwaccel = ;
#if CONFIG_H263_VAAPI_HWACCEL
AVHWAccel ff_h263_vaapi_hwaccel = ;
