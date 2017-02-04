#define AVCODEC_MPEGVIDEO_H
#define MAX_THREADS 32
#define MAX_B_FRAMES 16
#define SEQ_END_CODE            0x000001b7
#define SEQ_START_CODE          0x000001b3
#define GOP_START_CODE          0x000001b8
#define PICTURE_START_CODE      0x00000100
#define SLICE_MIN_START_CODE    0x00000101
#define SLICE_MAX_START_CODE    0x000001af
#define EXT_START_CODE          0x000001b5
#define USER_START_CODE         0x000001b2
typedef struct MpegEncContext  MpegEncContext;
#define FF_MPV_FLAG_SKIP_RD      0x0001
#define FF_MPV_FLAG_STRICT_GOP   0x0002
#define FF_MPV_FLAG_QP_RD        0x0004
#define FF_MPV_FLAG_CBP_RD       0x0008
#define FF_MPV_FLAG_NAQ          0x0010
#define FF_MPV_FLAG_MV0          0x0020
enum rc_strategy ;
#define FF_MPV_OPT_CMP_FUNC \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
FF_MPV_OFFSET offsetof(MpegEncContext, x)
#define FF_MPV_OPT_FLAGS (AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM)
#define FF_MPV_COMMON_OPTS \
FF_MPV_OPT_CMP_FUNC, \
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,                        \
,           \
,             \
,            \
,       \
, \
,    \
,            \
,            \
,   \
,   \
,   \
, \
, \
,   \
, \
, \
, \
,   \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
extern const AVOption ff_mpv_generic_options[];
ff_mpv_common_defaults;
ff_dct_encode_init_x86;
ff_mpv_common_init;
ff_mpv_common_init_arm;
ff_mpv_common_init_axp;
ff_mpv_common_init_neon;
ff_mpv_common_init_ppc;
ff_mpv_common_init_x86;
ff_mpv_common_init_mips;
ff_mpv_common_frame_size_change;
ff_mpv_common_end;
ff_mpv_decode_defaults;
ff_mpv_decode_init;
ff_mpv_decode_mb;
ff_mpv_report_decode_progress;
ff_mpv_frame_start;
ff_mpv_frame_end;
ff_mpv_encode_init;
ff_mpv_encode_init_x86;
ff_mpv_encode_end;
ff_mpv_encode_picture;
ff_mpv_reallocate_putbitbuffer;
ff_clean_intra_table_entries;
ff_mpeg_draw_horiz_band;
ff_mpeg_flush;
ff_print_debug_info;
ff_print_debug_info2[2],
int *low_delay,
int mb_width, int mb_height, int mb_stride, int quarter_sample);
ff_mpv_export_qp_table;
ff_write_quant_matrix;
ff_update_duplicate_context;
ff_mpeg_update_thread_context;
ff_set_qscale;
ff_mpv_idct_init;
ff_dct_encode_init;
ff_convert_matrix[64], uint16_t (*qmat16)[2][64],
const uint16_t *quant_matrix, int bias, int qmin, int qmax, int intra);
ff_dct_quantize_c;
ff_block_permute;
ff_init_block_index;
ff_mpv_motion[4],
qpel_mc_func (*qpix_op)[16]);
ff_update_block_index
get_bits_diff
