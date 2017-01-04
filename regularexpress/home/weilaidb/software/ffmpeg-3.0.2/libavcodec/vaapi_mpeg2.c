static inline int mpeg2_get_f_code(MpegEncContext *s)
static inline int mpeg2_get_is_frame_start(MpegEncContext *s)
static int vaapi_mpeg2_start_frame(AVCodecContext *avctx, av_unused const uint8_t *buffer, av_unused uint32_t size)
static int vaapi_mpeg2_decode_slice(AVCodecContext *avctx, const uint8_t *buffer, uint32_t size)
AVHWAccel ff_mpeg2_vaapi_hwaccel = ;
