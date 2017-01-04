#define COEF_LUT_TAB 2048
#define SSIZE_ROUND(b) (FFALIGN((b), s->size_scaler) + 4 + s->prefix_bytes)
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
static av_always_inline void put_vc2_ue_uint(PutBitContext *pb, uint32_t val)
static av_always_inline int count_vc2_ue_uint(uint32_t val)
static av_always_inline void get_vc2_ue_uint(int val, uint8_t *nbits,
uint32_t *eval)
static void encode_parse_info(VC2EncContext *s, enum DiracParseCodes pcode)
static void encode_parse_params(VC2EncContext *s)
static void encode_frame_size(VC2EncContext *s)
static void encode_sample_fmt(VC2EncContext *s)
static void encode_scan_format(VC2EncContext *s)
static void encode_frame_rate(VC2EncContext *s)
static void encode_aspect_ratio(VC2EncContext *s)
static void encode_clean_area(VC2EncContext *s)
static void encode_signal_range(VC2EncContext *s)
static void encode_color_spec(VC2EncContext *s)
static void encode_source_params(VC2EncContext *s)
static void encode_seq_header(VC2EncContext *s)
static void encode_picture_header(VC2EncContext *s)
static void encode_slice_params(VC2EncContext *s)
const uint8_t vc2_qm_col_tab[][4] = ;
const uint8_t vc2_qm_flat_tab[][4] = ;
static void init_quant_matrix(VC2EncContext *s)
static void encode_quant_matrix(VC2EncContext *s)
static void encode_transform_params(VC2EncContext *s)
static void encode_wavelet_transform(VC2EncContext *s)
static void encode_picture_start(VC2EncContext *s)
#define QUANT(c, qf) (((c) << 2)/(qf))
static void encode_subband(VC2EncContext *s, PutBitContext *pb, int sx, int sy,
SubBand *b, int quant)
static int count_hq_slice(SliceArgs *slice, int quant_idx)
static int rate_control(AVCodecContext *avctx, void *arg)
static int calc_slice_sizes(VC2EncContext *s)
static int encode_hq_slice(AVCodecContext *avctx, void *arg)
static int encode_slices(VC2EncContext *s)
static int dwt_plane(AVCodecContext *avctx, void *arg)
static int encode_frame(VC2EncContext *s, AVPacket *avpkt, const AVFrame *frame,
const char *aux_data, const int header_size, int field)
static av_cold int vc2_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet)
static av_cold int vc2_encode_end(AVCodecContext *avctx)
static av_cold int vc2_encode_init(AVCodecContext *avctx)
#define VC2ENC_FLAGS (AV_OPT_FLAG_ENCODING_PARAM | AV_OPT_FLAG_VIDEO_PARAM)
static const AVOption vc2enc_options[] = ;
static const AVClass vc2enc_class = ;
static const AVCodecDefault vc2enc_defaults[] = ;
static const enum AVPixelFormat allowed_pix_fmts[] = ;
AVCodec ff_vc2_encoder = ;
