static const uint8_t svcd_scan_offset_placeholder[] = ;
static uint8_t mv_penalty[MAX_FCODE + 1][MAX_DMV * 2 + 1];
static uint8_t fcode_tab[MAX_MV * 2 + 1];
static uint8_t uni_mpeg1_ac_vlc_len[64 * 64 * 2];
static uint8_t uni_mpeg2_ac_vlc_len[64 * 64 * 2];
static uint32_t mpeg1_lum_dc_uni[512];
static uint32_t mpeg1_chr_dc_uni[512];
static uint8_t mpeg1_index_run[2][64];
static int8_t  mpeg1_max_level[2][64];
static av_cold void init_uni_ac_vlc(RLTable *rl, uint8_t *uni_ac_vlc_len)
static int find_frame_rate_index(MpegEncContext *s)
static av_cold int encode_init(AVCodecContext *avctx)
static void put_header(MpegEncContext *s, int header)
static void mpeg1_encode_sequence_header(MpegEncContext *s)
static inline void encode_mb_skip_run(MpegEncContext *s, int run)
static av_always_inline void put_qscale(MpegEncContext *s)
void ff_mpeg1_encode_slice_header(MpegEncContext *s)
void ff_mpeg1_encode_picture_header(MpegEncContext *s, int picture_number)
static inline void put_mb_modes(MpegEncContext *s, int n, int bits,
int has_mv, int field_motion)
static void mpeg1_encode_motion(MpegEncContext *s, int val, int f_or_b_code)
static inline void encode_dc(MpegEncContext *s, int diff, int component)
static void mpeg1_encode_block(MpegEncContext *s, int16_t *block, int n)
static av_always_inline void mpeg1_encode_mb_internal(MpegEncContext *s,
int16_t block[8][64],
int motion_x, int motion_y,
int mb_block_count)
void ff_mpeg1_encode_mb(MpegEncContext *s, int16_t block[8][64],
int motion_x, int motion_y)
av_cold void ff_mpeg1_encode_init(MpegEncContext *s)
#define OFFSET(x) offsetof(MpegEncContext, x)
#define VE AV_OPT_FLAG_ENCODING_PARAM | AV_OPT_FLAG_VIDEO_PARAM
#define COMMON_OPTS                                                           \
,\
, \
, \
, \
, \
static const AVOption mpeg1_options[] = ;
static const AVOption mpeg2_options[] = ;
#define mpeg12_class(x)                                 \
static const AVClass mpeg ## x ## _class = ;
mpeg12_class(1)
mpeg12_class(2)
AVCodec ff_mpeg1video_encoder = ;
AVCodec ff_mpeg2video_encoder = ;
