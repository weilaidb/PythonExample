#define UNCHECKED_BITSTREAM_READER 1
#define SPRITE_TRAJ_VLC_BITS 6
#define DC_VLC_BITS 9
#define MB_TYPE_B_VLC_BITS 4
static VLC dc_lum, dc_chrom;
static VLC sprite_trajectory;
static VLC mb_type_b_vlc;
static const int mb_type_b_map[4] = ;
void ff_mpeg4_pred_ac(MpegEncContext *s, int16_t *block, int n, int dir)
static inline int mpeg4_is_resync(Mpeg4DecContext *ctx)
static int mpeg4_decode_sprite_trajectory(Mpeg4DecContext *ctx, GetBitContext *gb)
static int decode_new_pred(Mpeg4DecContext *ctx, GetBitContext *gb)
int ff_mpeg4_decode_video_packet_header(Mpeg4DecContext *ctx)
static inline int get_amv(Mpeg4DecContext *ctx, int n)
static inline int mpeg4_decode_dc(MpegEncContext *s, int n, int *dir_ptr)
static int mpeg4_decode_partition_a(Mpeg4DecContext *ctx)
static int mpeg4_decode_partition_b(MpegEncContext *s, int mb_count)
int ff_mpeg4_decode_partitions(Mpeg4DecContext *ctx)
static inline int mpeg4_decode_block(Mpeg4DecContext *ctx, int16_t *block,
int n, int coded, int intra, int rvlc)
static int mpeg4_decode_partitioned_mb(MpegEncContext *s, int16_t block[6][64])
static int mpeg4_decode_mb(MpegEncContext *s, int16_t block[6][64])
static int mpeg4_decode_gop_header(MpegEncContext *s, GetBitContext *gb)
static int mpeg4_decode_profile_level(MpegEncContext *s, GetBitContext *gb)
static int decode_vol_header(Mpeg4DecContext *ctx, GetBitContext *gb)
static int decode_user_data(Mpeg4DecContext *ctx, GetBitContext *gb)
int ff_mpeg4_workaround_bugs(AVCodecContext *avctx)
static int decode_vop_header(Mpeg4DecContext *ctx, GetBitContext *gb)
int ff_mpeg4_decode_picture_header(Mpeg4DecContext *ctx, GetBitContext *gb)
av_cold void ff_mpeg4videodec_static_init(void)
int ff_mpeg4_frame_end(AVCodecContext *avctx, const uint8_t *buf, int buf_size)
#if HAVE_THREADS
static int mpeg4_update_thread_context(AVCodecContext *dst,
const AVCodecContext *src)
static av_cold int decode_init(AVCodecContext *avctx)
static const AVOption mpeg4_options[] = ;
static const AVClass mpeg4_class = ;
AVCodec ff_mpeg4_decoder = ;
#if CONFIG_MPEG4_VDPAU_DECODER && FF_API_VDPAU
static const AVClass mpeg4_vdpau_class = ;
AVCodec ff_mpeg4_vdpau_decoder = ;
