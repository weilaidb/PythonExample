static const int8_t quant5_10bit[256] = ;
static const int8_t quant5[256] = ;
static const int8_t quant9_10bit[256] = ;
static const int8_t quant11[256] = ;
static const uint8_t ver2_state[256] = ;
find_best_state
put_symbol_inline
put_symbol
put_vlc_symbol
#define TYPE int16_t
RENAME name
#undef TYPE
#undef RENAME
#define TYPE int32_t
RENAME name ## 32
encode_plane
write_quant_table
write_quant_tables
write_header
write_extradata
sort_stt
encode_init
encode_slice_header
choose_rct_params
encode_slice
encode_frame
encode_close
OFFSET offsetof(FFV1Context, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass ffv1_class = ;
#if FF_API_CODER_TYPE
static const AVCodecDefault ffv1_defaults[] = ;
AVCodec ff_ffv1_encoder = ;
