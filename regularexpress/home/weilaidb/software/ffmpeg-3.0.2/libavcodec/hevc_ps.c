static const uint8_t default_scaling_list_intra[] = ;
static const uint8_t default_scaling_list_inter[] = ;
static const AVRational vui_sar[] = ;
static void remove_pps(HEVCParamSets *s, int id)
static void remove_sps(HEVCParamSets *s, int id)
static void remove_vps(HEVCParamSets *s, int id)
int ff_hevc_decode_short_term_rps(GetBitContext *gb, AVCodecContext *avctx,
ShortTermRPS *rps, const HEVCSPS *sps, int is_slice_header)
static int decode_profile_tier_level(GetBitContext *gb, AVCodecContext *avctx,
PTLCommon *ptl)
static int parse_ptl(GetBitContext *gb, AVCodecContext *avctx,
PTL *ptl, int max_num_sub_layers)
static void decode_sublayer_hrd(GetBitContext *gb, unsigned int nb_cpb,
int subpic_params_present)
static int decode_hrd(GetBitContext *gb, int common_inf_present,
int max_sublayers)
int ff_hevc_decode_nal_vps(GetBitContext *gb, AVCodecContext *avctx,
HEVCParamSets *ps)
static void decode_vui(GetBitContext *gb, AVCodecContext *avctx,
int apply_defdispwin, HEVCSPS *sps)
static void set_default_scaling_list_data(ScalingList *sl)
static int scaling_list_data(GetBitContext *gb, AVCodecContext *avctx, ScalingList *sl, HEVCSPS *sps)
static int map_pixel_format(AVCodecContext *avctx, HEVCSPS *sps)
int ff_hevc_parse_sps(HEVCSPS *sps, GetBitContext *gb, unsigned int *sps_id,
int apply_defdispwin, AVBufferRef **vps_list, AVCodecContext *avctx)
int ff_hevc_decode_nal_sps(GetBitContext *gb, AVCodecContext *avctx,
HEVCParamSets *ps, int apply_defdispwin)
static void hevc_pps_free(void *opaque, uint8_t *data)
static int pps_range_extensions(GetBitContext *gb, AVCodecContext *avctx,
HEVCPPS *pps, HEVCSPS *sps)
static inline int setup_pps(AVCodecContext *avctx, GetBitContext *gb,
HEVCPPS *pps, HEVCSPS *sps)
int ff_hevc_decode_nal_pps(GetBitContext *gb, AVCodecContext *avctx,
HEVCParamSets *ps)
