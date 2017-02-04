#define MAX_ST_REF_PIC_SETS  32
#define MAX_DPB_PICS         16
#define MAX_LAYERS            1
typedef struct VAAPIEncodeH265STRPS  VAAPIEncodeH265STRPS;
typedef struct VAAPIEncodeH265MiscSequenceParams  VAAPIEncodeH265MiscSequenceParams;
typedef struct VAAPIEncodeH265MiscSliceParams  VAAPIEncodeH265MiscSliceParams;
typedef struct VAAPIEncodeH265Slice  VAAPIEncodeH265Slice;
typedef struct VAAPIEncodeH265Context  VAAPIEncodeH265Context;
typedef struct VAAPIEncodeH265Options  VAAPIEncodeH265Options;
vseq_var     vseq->name, name
vseq_field   vseq->seq_fields.bits.name, name
vpic_var     vpic->name, name
vpic_field   vpic->pic_fields.bits.name, name
vslice_var   vslice->name, name
vslice_field vslice->slice_fields.bits.name, name
mseq_var     mseq->name, name
mslice_var   mslice->name, name
mstrps_var   mstrps->name, name
vaapi_encode_h265_write_nal_unit_header
vaapi_encode_h265_write_rbsp_trailing_bits
vaapi_encode_h265_write_profile_tier_level
vaapi_encode_h265_write_vps
vaapi_encode_h265_write_st_ref_pic_set
vaapi_encode_h265_write_vui_parameters
vaapi_encode_h265_write_sps
vaapi_encode_h265_write_pps
vaapi_encode_h265_write_slice_header2
vaapi_encode_h265_write_sequence_header
vaapi_encode_h265_write_slice_header
vaapi_encode_h265_init_sequence_params
vaapi_encode_h265_init_picture_params
vaapi_encode_h265_init_slice_params
vaapi_encode_h265_init_constant_bitrate
vaapi_encode_h265_init_fixed_qp
vaapi_encode_h265_init_internal
static VAAPIEncodeType vaapi_encode_type_h265 = ;
vaapi_encode_h265_init
OFFSET (offsetof(VAAPIEncodeContext, codec_options_data) + \
offsetof(VAAPIEncodeH265Options, x))
#define FLAGS (AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM)
static const AVOption vaapi_encode_h265_options[] = ;
static const AVCodecDefault vaapi_encode_h265_defaults[] = ;
static const AVClass vaapi_encode_h265_class = ;
AVCodec ff_hevc_vaapi_encoder = ;
