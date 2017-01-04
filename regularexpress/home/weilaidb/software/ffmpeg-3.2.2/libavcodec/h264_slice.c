static const uint8_t field_scan[16+1] = ;
static const uint8_t field_scan8x8[64+1] = ;
static const uint8_t field_scan8x8_cavlc[64+1] = ;
static const uint8_t zigzag_scan8x8_cavlc[64+1] = ;
static void release_unused_pictures(H264Context *h, int remove_current)
static int alloc_scratch_buffers(H264SliceContext *sl, int linesize)
static int init_table_pools(H264Context *h)
static int alloc_picture(H264Context *h, H264Picture *pic)
static inline int pic_is_unused(H264Context *h, H264Picture *pic)
static int find_unused_picture(H264Context *h)
#define IN_RANGE(a, b, size) (((void*)(a) >= (void*)(b)) && ((void*)(a) < (void*)((b) + (size))))
#define REBASE_PICTURE(pic, new_ctx, old_ctx)             \
(((pic) && (pic) >= (old_ctx)->DPB &&                       \
(pic) < (old_ctx)->DPB + H264_MAX_PICTURE_COUNT) ?          \
&(new_ctx)->DPB[(pic) - (old_ctx)->DPB] : NULL)
static void copy_picture_range(H264Picture **to, H264Picture **from, int count,
H264Context *new_base,
H264Context *old_base)
static int h264_slice_header_init(H264Context *h);
int ff_h264_update_thread_context(AVCodecContext *dst,
const AVCodecContext *src)
static int h264_frame_start(H264Context *h)
static av_always_inline void backup_mb_border(const H264Context *h, H264SliceContext *sl,
uint8_t *src_y,
uint8_t *src_cb, uint8_t *src_cr,
int linesize, int uvlinesize,
int simple)
static void implicit_weight_table(const H264Context *h, H264SliceContext *sl, int field)
static void init_scan_tables(H264Context *h)
static enum AVPixelFormat get_pixel_format(H264Context *h, int force_callback)
static int init_dimensions(H264Context *h)
static int h264_slice_header_init(H264Context *h)
static enum AVPixelFormat non_j_pixfmt(enum AVPixelFormat a)
static int h264_init_ps(H264Context *h, const H264SliceContext *sl, int first_slice)
static int h264_export_frame_props(H264Context *h)
static int h264_field_start(H264Context *h, const H264SliceContext *sl,
const H2645NAL *nal, int first_slice)
static int h264_slice_header_parse(const H264Context *h, H264SliceContext *sl,
const H2645NAL *nal)
int ff_h264_decode_slice_header(H264Context *h, H264SliceContext *sl,
const H2645NAL *nal)
int ff_h264_get_slice_type(const H264SliceContext *sl)
static av_always_inline void fill_filter_caches_inter(const H264Context *h,
H264SliceContext *sl,
int mb_type, int top_xy,
int left_xy[LEFT_MBS],
int top_type,
int left_type[LEFT_MBS],
int mb_xy, int list)
static int fill_filter_caches(const H264Context *h, H264SliceContext *sl, int mb_type)
static void loop_filter(const H264Context *h, H264SliceContext *sl, int start_x, int end_x)
static void predict_field_decoding_flag(const H264Context *h, H264SliceContext *sl)
static void decode_finish_row(const H264Context *h, H264SliceContext *sl)
static void er_add_slice(H264SliceContext *sl,
int startx, int starty,
int endx, int endy, int status)
static int decode_slice(struct AVCodecContext *avctx, void *arg)
int ff_h264_execute_decode_slices(H264Context *h, unsigned context_count)
