int ff_h264_pred_weight_table(GetBitContext *gb, const SPS *sps,
const int *ref_count, int slice_type_nos,
H264PredWeightTable *pwt, void *logctx)
int ff_h264_check_intra4x4_pred_mode(int8_t *pred_mode_cache, void *logctx,
int top_samples_available, int left_samples_available)
int ff_h264_check_intra_pred_mode(void *logctx, int top_samples_available,
int left_samples_available,
int mode, int is_chroma)
int ff_h264_parse_ref_count(int *plist_count, int ref_count[2],
GetBitContext *gb, const PPS *pps,
int slice_type_nos, int picture_structure, void *logctx)
int ff_h264_init_poc(int pic_field_poc[2], int *pic_poc,
const SPS *sps, H264POCContext *pc,
int picture_structure, int nal_ref_idc)
static int decode_extradata_ps(const uint8_t *data, int size, H264ParamSets *ps,
int is_avc, void *logctx)
static int decode_extradata_ps_mp4(const uint8_t *buf, int buf_size, H264ParamSets *ps,
int err_recognition, void *logctx)
int ff_h264_decode_extradata(const uint8_t *data, int size, H264ParamSets *ps,
int *is_avc, int *nal_length_size,
int err_recognition, void *logctx)
int ff_h264_get_profile(const SPS *sps)
