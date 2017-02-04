static uint8_t  uni_DCtab_lum_len[512];
static uint8_t  uni_DCtab_chrom_len[512];
static uint16_t uni_DCtab_lum_bits[512];
static uint16_t uni_DCtab_chrom_bits[512];
static uint32_t uni_mpeg4_intra_rl_bits[64 * 64 * 2 * 2];
static uint8_t  uni_mpeg4_intra_rl_len[64 * 64 * 2 * 2];
static uint32_t uni_mpeg4_inter_rl_bits[64 * 64 * 2 * 2];
static uint8_t  uni_mpeg4_inter_rl_len[64 * 64 * 2 * 2];
UNI_MPEG4_ENC_INDEX ((last) * 128 * 64 + (run) * 128 + (level))
get_block_rate
restore_ac_coeffs
decide_ac_pred
ff_clean_mpeg4_qscales
mpeg4_encode_dc
mpeg4_get_dc_length
mpeg4_encode_block
mpeg4_get_block_length
mpeg4_encode_blocks
get_b_cbp
static const int dquant_code[5] = ;
ff_mpeg4_encode_mb
ff_mpeg4_stuffing
ff_set_mpeg4_time
mpeg4_encode_gop_header
mpeg4_encode_visual_object_header
mpeg4_encode_vol_header
ff_mpeg4_encode_picture_header
init_uni_dc_tab
init_uni_mpeg4_rl_tab
encode_init
ff_mpeg4_init_partitions
ff_mpeg4_merge_partitions
ff_mpeg4_encode_video_packet_header
OFFSET offsetof(MpegEncContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass mpeg4enc_class = ;
AVCodec ff_mpeg4_encoder = ;
