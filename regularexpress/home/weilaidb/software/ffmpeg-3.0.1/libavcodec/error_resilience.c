static void set_mv_strides(ERContext *s, int *mv_step, int *stride)
static void put_dc(ERContext *s, uint8_t *dest_y, uint8_t *dest_cb,
uint8_t *dest_cr, int mb_x, int mb_y)
static void filter181(int16_t *data, int width, int height, int stride)
static void guess_dc(ERContext *s, int16_t *dc, int w,
int h, int stride, int is_luma)
static void h_block_filter(ERContext *s, uint8_t *dst, int w,
int h, int stride, int is_luma)
static void v_block_filter(ERContext *s, uint8_t *dst, int w, int h,
int stride, int is_luma)
static void guess_mv(ERContext *s)
static int is_intra_more_likely(ERContext *s)
void ff_er_frame_start(ERContext *s)
static int er_supported(ERContext *s)
void ff_er_add_slice(ERContext *s, int startx, int starty,
int endx, int endy, int status)
void ff_er_frame_end(ERContext *s)
