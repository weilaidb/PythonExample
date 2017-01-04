#define MAX_ST_REF_PIC_SETS  32
#define MAX_DPB_PICS         16
#define MAX_LAYERS            1
typedef struct VAAPIEncodeH265STRPS  VAAPIEncodeH265STRPS;
typedef struct VAAPIEncodeH265MiscSequenceParams  VAAPIEncodeH265MiscSequenceParams;
typedef struct VAAPIEncodeH265MiscSliceParams  VAAPIEncodeH265MiscSliceParams;
typedef struct VAAPIEncodeH265Slice  VAAPIEncodeH265Slice;
typedef struct VAAPIEncodeH265Context  VAAPIEncodeH265Context;
typedef struct VAAPIEncodeH265Options  VAAPIEncodeH265Options;
#define vseq_var(name)     vseq->name, name
#define vseq_field(name)   vseq->seq_fields.bits.name, name
#define vpic_var(name)     vpic->name, name
#define vpic_field(name)   vpic->pic_fields.bits.name, name
#define vslice_var(name)   vslice->name, name
#define vslice_field(name) vslice->slice_fields.bits.name, name
#define mseq_var(name)     mseq->name, name
#define mslice_var(name)   mslice->name, name
#define mstrps_var(name)   mstrps->name, name
static void vaapi_encode_h265_write_nal_unit_header(PutBitContext *pbc,
int nal_unit_type)
static void vaapi_encode_h265_write_rbsp_trailing_bits(PutBitContext *pbc)
static void vaapi_encode_h265_write_profile_tier_level(PutBitContext *pbc,
VAAPIEncodeContext *ctx)
static void vaapi_encode_h265_write_vps(PutBitContext *pbc,
VAAPIEncodeContext *ctx)
static void vaapi_encode_h265_write_st_ref_pic_set(PutBitContext *pbc,
int st_rps_idx,
VAAPIEncodeH265STRPS *mstrps)
static void vaapi_encode_h265_write_vui_parameters(PutBitContext *pbc,
VAAPIEncodeContext *ctx)
static void vaapi_encode_h265_write_sps(PutBitContext *pbc,
VAAPIEncodeContext *ctx)
static void vaapi_encode_h265_write_pps(PutBitContext *pbc,
VAAPIEncodeContext *ctx)
static void vaapi_encode_h265_write_slice_header2(PutBitContext *pbc,
VAAPIEncodeContext *ctx,
VAAPIEncodePicture *pic,
VAAPIEncodeSlice *slice)
static int vaapi_encode_h265_write_sequence_header(AVCodecContext *avctx,
char *data, size_t *data_len)
static int vaapi_encode_h265_write_slice_header(AVCodecContext *avctx,
VAAPIEncodePicture *pic,
VAAPIEncodeSlice *slice,
char *data, size_t *data_len)
static int vaapi_encode_h265_init_sequence_params(AVCodecContext *avctx)
static int vaapi_encode_h265_init_picture_params(AVCodecContext *avctx,
VAAPIEncodePicture *pic)
static int vaapi_encode_h265_init_slice_params(AVCodecContext *avctx,
VAAPIEncodePicture *pic,
VAAPIEncodeSlice *slice)
static av_cold int vaapi_encode_h265_init_constant_bitrate(AVCodecContext *avctx)
static av_cold int vaapi_encode_h265_init_fixed_qp(AVCodecContext *avctx)
static av_cold int vaapi_encode_h265_init_internal(AVCodecContext *avctx)
static VAAPIEncodeType vaapi_encode_type_h265 = ;
static av_cold int vaapi_encode_h265_init(AVCodecContext *avctx)
#define OFFSET(x) (offsetof(VAAPIEncodeContext, codec_options_data) + \
offsetof(VAAPIEncodeH265Options, x))
#define FLAGS (AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM)
static const AVOption vaapi_encode_h265_options[] = ;
static const AVCodecDefault vaapi_encode_h265_defaults[] = ;
static const AVClass vaapi_encode_h265_class = ;
AVCodec ff_hevc_vaapi_encoder = ;
