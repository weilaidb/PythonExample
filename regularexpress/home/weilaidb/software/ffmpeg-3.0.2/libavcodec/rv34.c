static inline void ZERO8x2(void* dst, int stride)
static const int rv34_mb_type_to_lavc[12] = ;
static RV34VLC intra_vlcs[NUM_INTRA_TABLES], inter_vlcs[NUM_INTER_TABLES];
static int rv34_decode_mv(RV34DecContext *r, int block_type);
static const int table_offs[] = ;
static VLC_TYPE table_data[117592][2];
static void rv34_gen_vlc(const uint8_t *bits, int size, VLC *vlc, const uint8_t *insyms,
const int num)
static av_cold void rv34_init_tables(void)
static int rv34_decode_cbp(GetBitContext *gb, RV34VLC *vlc, int table)
static inline void decode_coeff(int16_t *dst, int coef, int esc, GetBitContext *gb, VLC* vlc, int q)
static inline void decode_subblock(int16_t *dst, int code, const int is_block2, GetBitContext *gb, VLC *vlc, int q)
static inline void decode_subblock1(int16_t *dst, int code, GetBitContext *gb, VLC *vlc, int q)
static inline void decode_subblock3(int16_t *dst, int code, GetBitContext *gb, VLC *vlc,
int q_dc, int q_ac1, int q_ac2)
static int rv34_decode_block(int16_t *dst, GetBitContext *gb, RV34VLC *rvlc, int fc, int sc, int q_dc, int q_ac1, int q_ac2)
int ff_rv34_get_start_offset(GetBitContext *gb, int mb_size)
static inline RV34VLC* choose_vlc_set(int quant, int mod, int type)
static int rv34_decode_intra_mb_header(RV34DecContext *r, int8_t *intra_types)
static int rv34_decode_inter_mb_header(RV34DecContext *r, int8_t *intra_types)
static const uint8_t part_sizes_w[RV34_MB_TYPES] = ;
static const uint8_t part_sizes_h[RV34_MB_TYPES] = ;
static const uint8_t avail_indexes[4] = ;
static void rv34_pred_mv(RV34DecContext *r, int block_type, int subblock_no, int dmv_no)
#define GET_PTS_DIFF(a, b) (((a) - (b) + 8192) & 0x1FFF)
static int calc_add_mv(RV34DecContext *r, int dir, int val)
static inline void rv34_pred_b_vector(int A[2], int B[2], int C[2],
int A_avail, int B_avail, int C_avail,
int *mx, int *my)
static void rv34_pred_mv_b(RV34DecContext *r, int block_type, int dir)
static void rv34_pred_mv_rv3(RV34DecContext *r, int block_type, int dir)
static const int chroma_coeffs[3] = ;
static inline void rv34_mc(RV34DecContext *r, const int block_type,
const int xoff, const int yoff, int mv_off,
const int width, const int height, int dir,
const int thirdpel, int weighted,
qpel_mc_func (*qpel_mc)[16],
h264_chroma_mc_func (*chroma_mc))
static void rv34_mc_1mv(RV34DecContext *r, const int block_type,
const int xoff, const int yoff, int mv_off,
const int width, const int height, int dir)
static void rv4_weight(RV34DecContext *r)
static void rv34_mc_2mv(RV34DecContext *r, const int block_type)
static void rv34_mc_2mv_skip(RV34DecContext *r)
static const int num_mvs[RV34_MB_TYPES] = ;
static int rv34_decode_mv(RV34DecContext *r, int block_type)
static const int ittrans[9] = ;
static const int ittrans16[4] = ;
static void rv34_pred_4x4_block(RV34DecContext *r, uint8_t *dst, int stride, int itype, int up, int left, int down, int right)
static inline int adjust_pred16(int itype, int up, int left)
static inline void rv34_process_block(RV34DecContext *r,
uint8_t *pdst, int stride,
int fc, int sc, int q_dc, int q_ac)
static void rv34_output_i16x16(RV34DecContext *r, int8_t *intra_types, int cbp)
static void rv34_output_intra(RV34DecContext *r, int8_t *intra_types, int cbp)
static int is_mv_diff_gt_3(int16_t (*motion_val)[2], int step)
static int rv34_set_deblock_coef(RV34DecContext *r)
static int rv34_decode_inter_macroblock(RV34DecContext *r, int8_t *intra_types)
static int rv34_decode_intra_macroblock(RV34DecContext *r, int8_t *intra_types)
static int check_slice_end(RV34DecContext *r, MpegEncContext *s)
static void rv34_decoder_free(RV34DecContext *r)
static int rv34_decoder_alloc(RV34DecContext *r)
static int rv34_decoder_realloc(RV34DecContext *r)
static int rv34_decode_slice(RV34DecContext *r, int end, const uint8_t* buf, int buf_size)
av_cold int ff_rv34_decode_init(AVCodecContext *avctx)
int ff_rv34_decode_init_thread_copy(AVCodecContext *avctx)
int ff_rv34_decode_update_thread_context(AVCodecContext *dst, const AVCodecContext *src)
static int get_slice_offset(AVCodecContext *avctx, const uint8_t *buf, int n)
static int finish_frame(AVCodecContext *avctx, AVFrame *pict)
static AVRational update_sar(int old_w, int old_h, AVRational sar, int new_w, int new_h)
int ff_rv34_decode_frame(AVCodecContext *avctx,
void *data, int *got_picture_ptr,
AVPacket *avpkt)
av_cold int ff_rv34_decode_end(AVCodecContext *avctx)
