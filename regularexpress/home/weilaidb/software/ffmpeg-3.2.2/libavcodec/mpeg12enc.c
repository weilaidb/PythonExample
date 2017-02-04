static const uint8_t svcd_scan_offset_placeholder[] = ;
static uint8_t mv_penalty[MAX_FCODE + 1][MAX_DMV * 2 + 1];
static uint8_t fcode_tab[MAX_MV * 2 + 1];
static uint8_t uni_mpeg1_ac_vlc_len[64 * 64 * 2];
static uint8_t uni_mpeg2_ac_vlc_len[64 * 64 * 2];
static uint32_t mpeg1_lum_dc_uni[512];
static uint32_t mpeg1_chr_dc_uni[512];
static uint8_t mpeg1_index_run[2][64];
static int8_t  mpeg1_max_level[2][64];
init_uni_ac_vlc
find_frame_rate_index
encode_init
put_header
mpeg1_encode_sequence_header
encode_mb_skip_run
put_qscale
ff_mpeg1_encode_slice_header
ff_mpeg1_encode_picture_header
put_mb_modes
mpeg1_encode_motion
encode_dc
mpeg1_encode_block
mpeg1_encode_mb_internal
ff_mpeg1_encode_mb
ff_mpeg1_encode_init
OFFSET offsetof(MpegEncContext, x)
#define VE AV_OPT_FLAG_ENCODING_PARAM | AV_OPT_FLAG_VIDEO_PARAM
#define COMMON_OPTS                                                           \
,\
, \
, \
, \
, \
static const AVOption mpeg1_options[] = ;
static const AVOption mpeg2_options[] = ;
mpeg12_class                                 \
static const AVClass mpeg ## x ## _class = ;
mpeg12_class(1)
mpeg12_class(2)
AVCodec ff_mpeg1video_encoder = ;
AVCodec ff_mpeg2video_encoder = ;
