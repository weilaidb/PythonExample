enum ;
typedef struct VAAPIEncodeH264MiscSequenceParams  VAAPIEncodeH264MiscSequenceParams;
typedef struct VAAPIEncodeH264MiscSliceParams  VAAPIEncodeH264MiscSliceParams;
typedef struct VAAPIEncodeH264Slice  VAAPIEncodeH264Slice;
typedef struct VAAPIEncodeH264Context  VAAPIEncodeH264Context;
typedef struct VAAPIEncodeH264Options  VAAPIEncodeH264Options;
#define vseq_var(name)     vseq->name, name
#define vseq_field(name)   vseq->seq_fields.bits.name, name
#define vvui_field(name)   vseq->vui_fields.bits.name, name
#define vpic_var(name)     vpic->name, name
#define vpic_field(name)   vpic->pic_fields.bits.name, name
#define vslice_var(name)   vslice->name, name
#define vslice_field(name) vslice->slice_fields.bits.name, name
#define mseq_var(name)     mseq->name, name
#define mslice_var(name)   mslice->name, name
static void vaapi_encode_h264_write_nal_header(PutBitContext *pbc,
int nal_unit_type, int nal_ref_idc)
static void vaapi_encode_h264_write_trailing_rbsp(PutBitContext *pbc)
static void vaapi_encode_h264_write_vui(PutBitContext *pbc,
VAAPIEncodeContext *ctx)
static void vaapi_encode_h264_write_sps(PutBitContext *pbc,
VAAPIEncodeContext *ctx)
static void vaapi_encode_h264_write_pps(PutBitContext *pbc,
VAAPIEncodeContext *ctx)
static void vaapi_encode_h264_write_slice_header2(PutBitContext *pbc,
VAAPIEncodeContext *ctx,
VAAPIEncodePicture *pic,
VAAPIEncodeSlice *slice)
static void vaapi_encode_h264_write_buffering_period(PutBitContext *pbc,
VAAPIEncodeContext *ctx,
VAAPIEncodePicture *pic)
static void vaapi_encode_h264_write_pic_timing(PutBitContext *pbc,
VAAPIEncodeContext *ctx,
VAAPIEncodePicture *pic)
static void vaapi_encode_h264_write_identifier(PutBitContext *pbc,
VAAPIEncodeContext *ctx,
VAAPIEncodePicture *pic)
static void vaapi_encode_h264_write_sei(PutBitContext *pbc,
VAAPIEncodeContext *ctx,
VAAPIEncodePicture *pic)
static int vaapi_encode_h264_write_sequence_header(AVCodecContext *avctx,
char *data, size_t *data_len)
static int vaapi_encode_h264_write_slice_header(AVCodecContext *avctx,
VAAPIEncodePicture *pic,
VAAPIEncodeSlice *slice,
char *data, size_t *data_len)
static int vaapi_encode_h264_write_extra_header(AVCodecContext *avctx,
VAAPIEncodePicture *pic,
int index, int *type,
char *data, size_t *data_len)
static int vaapi_encode_h264_init_sequence_params(AVCodecContext *avctx)
static int vaapi_encode_h264_init_picture_params(AVCodecContext *avctx,
VAAPIEncodePicture *pic)
static int vaapi_encode_h264_init_slice_params(AVCodecContext *avctx,
VAAPIEncodePicture *pic,
VAAPIEncodeSlice *slice)
static av_cold int vaapi_encode_h264_init_constant_bitrate(AVCodecContext *avctx)
static av_cold int vaapi_encode_h264_init_fixed_qp(AVCodecContext *avctx)
static av_cold int vaapi_encode_h264_init_internal(AVCodecContext *avctx)
static VAAPIEncodeType vaapi_encode_type_h264 = ;
static av_cold int vaapi_encode_h264_init(AVCodecContext *avctx)
#define OFFSET(x) (offsetof(VAAPIEncodeContext, codec_options_data) + \
offsetof(VAAPIEncodeH264Options, x))
#define FLAGS (AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM)
static const AVOption vaapi_encode_h264_options[] = ;
static const AVCodecDefault vaapi_encode_h264_defaults[] = ;
static const AVClass vaapi_encode_h264_class = ;
AVCodec ff_h264_vaapi_encoder = ;
