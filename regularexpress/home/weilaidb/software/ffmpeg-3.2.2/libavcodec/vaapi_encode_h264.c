enum ;
typedef struct VAAPIEncodeH264MiscSequenceParams  VAAPIEncodeH264MiscSequenceParams;
typedef struct VAAPIEncodeH264MiscSliceParams  VAAPIEncodeH264MiscSliceParams;
typedef struct VAAPIEncodeH264Slice  VAAPIEncodeH264Slice;
typedef struct VAAPIEncodeH264Context  VAAPIEncodeH264Context;
typedef struct VAAPIEncodeH264Options  VAAPIEncodeH264Options;
vseq_var     vseq->name, name
vseq_field   vseq->seq_fields.bits.name, name
vvui_field   vseq->vui_fields.bits.name, name
vpic_var     vpic->name, name
vpic_field   vpic->pic_fields.bits.name, name
vslice_var   vslice->name, name
vslice_field vslice->slice_fields.bits.name, name
mseq_var     mseq->name, name
mslice_var   mslice->name, name
vaapi_encode_h264_write_nal_header
vaapi_encode_h264_write_trailing_rbsp
vaapi_encode_h264_write_vui
vaapi_encode_h264_write_sps
vaapi_encode_h264_write_pps
vaapi_encode_h264_write_slice_header2
vaapi_encode_h264_write_buffering_period
vaapi_encode_h264_write_pic_timing
vaapi_encode_h264_write_identifier
vaapi_encode_h264_write_sei
vaapi_encode_h264_write_sequence_header
vaapi_encode_h264_write_slice_header
vaapi_encode_h264_write_extra_header
vaapi_encode_h264_init_sequence_params
vaapi_encode_h264_init_picture_params
vaapi_encode_h264_init_slice_params
vaapi_encode_h264_init_constant_bitrate
vaapi_encode_h264_init_fixed_qp
vaapi_encode_h264_init_internal
static VAAPIEncodeType vaapi_encode_type_h264 = ;
vaapi_encode_h264_init
OFFSET (offsetof(VAAPIEncodeContext, codec_options_data) + \
offsetof(VAAPIEncodeH264Options, x))
#define FLAGS (AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM)
static const AVOption vaapi_encode_h264_options[] = ;
static const AVCodecDefault vaapi_encode_h264_defaults[] = ;
static const AVClass vaapi_encode_h264_class = ;
AVCodec ff_h264_vaapi_encoder = ;
