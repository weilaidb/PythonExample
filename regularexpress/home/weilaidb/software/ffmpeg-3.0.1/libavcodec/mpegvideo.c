static void dct_unquantize_mpeg1_intra_c(MpegEncContext *s,
int16_t *block, int n, int qscale)
static void dct_unquantize_mpeg1_inter_c(MpegEncContext *s,
int16_t *block, int n, int qscale)
static void dct_unquantize_mpeg2_intra_c(MpegEncContext *s,
int16_t *block, int n, int qscale)
static void dct_unquantize_mpeg2_intra_bitexact(MpegEncContext *s,
int16_t *block, int n, int qscale)
static void dct_unquantize_mpeg2_inter_c(MpegEncContext *s,
int16_t *block, int n, int qscale)
static void dct_unquantize_h263_intra_c(MpegEncContext *s,
int16_t *block, int n, int qscale)
static void dct_unquantize_h263_inter_c(MpegEncContext *s,
int16_t *block, int n, int qscale)
static void gray16(uint8_t *dst, const uint8_t *src, ptrdiff_t linesize, int h)
static void gray8(uint8_t *dst, const uint8_t *src, ptrdiff_t linesize, int h)
static av_cold int dct_init(MpegEncContext *s)
av_cold void ff_mpv_idct_init(MpegEncContext *s)
static int alloc_picture(MpegEncContext *s, Picture *pic, int shared)
static int init_duplicate_context(MpegEncContext *s)
static void free_duplicate_context(MpegEncContext *s)
static void backup_duplicate_context(MpegEncContext *bak, MpegEncContext *src)
int ff_update_duplicate_context(MpegEncContext *dst, MpegEncContext *src)
int ff_mpeg_update_thread_context(AVCodecContext *dst,
const AVCodecContext *src)
void ff_mpv_common_defaults(MpegEncContext *s)
void ff_mpv_decode_defaults(MpegEncContext *s)
void ff_mpv_decode_init(MpegEncContext *s, AVCodecContext *avctx)
static int init_context_frame(MpegEncContext *s)
static void clear_context(MpegEncContext *s)
av_cold int ff_mpv_common_init(MpegEncContext *s)
static void free_context_frame(MpegEncContext *s)
int ff_mpv_common_frame_size_change(MpegEncContext *s)
void ff_mpv_common_end(MpegEncContext *s)
static void gray_frame(AVFrame *frame)
int ff_mpv_frame_start(MpegEncContext *s, AVCodecContext *avctx)
void ff_mpv_frame_end(MpegEncContext *s)
#if FF_API_VISMV
static int clip_line(int *sx, int *sy, int *ex, int *ey, int maxx)
static void draw_line(uint8_t *buf, int sx, int sy, int ex, int ey,
int w, int h, int stride, int color)
static void draw_arrow(uint8_t *buf, int sx, int sy, int ex,
int ey, int w, int h, int stride, int color, int tail, int direction)
static int add_mb(AVMotionVector *mb, uint32_t mb_type,
int dst_x, int dst_y,
int motion_x, int motion_y, int motion_scale,
int direction)
void ff_print_debug_info2(AVCodecContext *avctx, AVFrame *pict, uint8_t *mbskip_table,
uint32_t *mbtype_table, int8_t *qscale_table, int16_t (*motion_val[2])[2],
int *low_delay,
int mb_width, int mb_height, int mb_stride, int quarter_sample)
void ff_print_debug_info(MpegEncContext *s, Picture *p, AVFrame *pict)
int ff_mpv_export_qp_table(MpegEncContext *s, AVFrame *f, Picture *p, int qp_type)
static inline int hpel_motion_lowres(MpegEncContext *s,
uint8_t *dest, uint8_t *src,
int field_based, int field_select,
int src_x, int src_y,
int width, int height, ptrdiff_t stride,
int h_edge_pos, int v_edge_pos,
int w, int h, h264_chroma_mc_func *pix_op,
int motion_x, int motion_y)
static av_always_inline void mpeg_motion_lowres(MpegEncContext *s,
uint8_t *dest_y,
uint8_t *dest_cb,
uint8_t *dest_cr,
int field_based,
int bottom_field,
int field_select,
uint8_t **ref_picture,
h264_chroma_mc_func *pix_op,
int motion_x, int motion_y,
int h, int mb_y)
static inline void chroma_4mv_motion_lowres(MpegEncContext *s,
uint8_t *dest_cb, uint8_t *dest_cr,
uint8_t **ref_picture,
h264_chroma_mc_func * pix_op,
int mx, int my)
static inline void MPV_motion_lowres(MpegEncContext *s,
uint8_t *dest_y, uint8_t *dest_cb,
uint8_t *dest_cr,
int dir, uint8_t **ref_picture,
h264_chroma_mc_func *pix_op)
static int lowest_referenced_row(MpegEncContext *s, int dir)
static inline void put_dct(MpegEncContext *s,
int16_t *block, int i, uint8_t *dest, int line_size, int qscale)
static inline void add_dct(MpegEncContext *s,
int16_t *block, int i, uint8_t *dest, int line_size)
static inline void add_dequant_dct(MpegEncContext *s,
int16_t *block, int i, uint8_t *dest, int line_size, int qscale)
void ff_clean_intra_table_entries(MpegEncContext *s)
static av_always_inline
void mpv_decode_mb_internal(MpegEncContext *s, int16_t block[12][64],
int lowres_flag, int is_mpeg12)
void ff_mpv_decode_mb(MpegEncContext *s, int16_t block[12][64])
void ff_mpeg_draw_horiz_band(MpegEncContext *s, int y, int h)
void ff_init_block_index(MpegEncContext *s)
void ff_mpeg_flush(AVCodecContext *avctx)
void ff_set_qscale(MpegEncContext * s, int qscale)
void ff_mpv_report_decode_progress(MpegEncContext *s)
