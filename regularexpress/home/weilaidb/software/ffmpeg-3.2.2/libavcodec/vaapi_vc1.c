static int get_VAMvModeVC1(enum MVModes mv_mode)
static inline int vc1_has_MVTYPEMB_bitplane(VC1Context *v)
static inline int vc1_has_SKIPMB_bitplane(VC1Context *v)
static inline int vc1_has_DIRECTMB_bitplane(VC1Context *v)
static inline int vc1_has_ACPRED_bitplane(VC1Context *v)
static inline int vc1_has_OVERFLAGS_bitplane(VC1Context *v)
static int vc1_get_PTYPE(VC1Context *v)
static inline VAMvModeVC1 vc1_get_MVMODE(VC1Context *v)
static inline VAMvModeVC1 vc1_get_MVMODE2(VC1Context *v)
static inline int vc1_get_TTFRM(VC1Context *v)
static inline void vc1_pack_bitplanes(uint8_t *bitplane, int n, const uint8_t *ff_bp[3], int x, int y, int stride)
static int vaapi_vc1_start_frame(AVCodecContext *avctx, av_unused const uint8_t *buffer, av_unused uint32_t size)
static int vaapi_vc1_decode_slice(AVCodecContext *avctx, const uint8_t *buffer, uint32_t size)
#if CONFIG_WMV3_VAAPI_HWACCEL
AVHWAccel ff_wmv3_vaapi_hwaccel = ;
AVHWAccel ff_vc1_vaapi_hwaccel = ;
