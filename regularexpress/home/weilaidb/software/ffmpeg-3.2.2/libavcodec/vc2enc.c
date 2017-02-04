#define COEF_LUT_TAB 2048
SSIZE_ROUND (FFALIGN((b), s->size_scaler) + 4 + s->prefix_bytes)
#define SLICE_REDIST_TOTAL 150
typedef struct VC2BaseVideoFormat  VC2BaseVideoFormat;
static const VC2BaseVideoFormat base_video_fmts[] = ;
static const int base_video_fmts_len = FF_ARRAY_ELEMS(base_video_fmts);
enum VC2_QM ;
typedef struct SubBand  SubBand;
typedef struct Plane  Plane;
typedef struct SliceArgs  SliceArgs;
typedef struct TransformArgs  TransformArgs;
typedef struct VC2EncContext  VC2EncContext;
put_vc2_ue_uint
count_vc2_ue_uint
get_vc2_ue_uint
encode_parse_info
encode_parse_params
encode_frame_size
encode_sample_fmt
encode_scan_format
encode_frame_rate
encode_aspect_ratio
encode_clean_area
encode_signal_range
encode_color_spec
encode_source_params
encode_seq_header
encode_picture_header
encode_slice_params
const uint8_t vc2_qm_col_tab[][4] = ;
const uint8_t vc2_qm_flat_tab[][4] = ;
init_quant_matrix
encode_quant_matrix
encode_transform_params
encode_wavelet_transform
encode_picture_start
QUANT (((c) << 2)/(qf))
encode_subband
count_hq_slice
rate_control
calc_slice_sizes
encode_hq_slice
encode_slices
dwt_plane
encode_frame
vc2_encode_frame
vc2_encode_end
vc2_encode_init
#define VC2ENC_FLAGS (AV_OPT_FLAG_ENCODING_PARAM | AV_OPT_FLAG_VIDEO_PARAM)
static const AVOption vc2enc_options[] = ;
static const AVClass vc2enc_class = ;
static const AVCodecDefault vc2enc_defaults[] = ;
static const enum AVPixelFormat allowed_pix_fmts[] = ;
AVCodec ff_vc2_encoder = ;
