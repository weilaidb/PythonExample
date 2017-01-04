int ff_slice_buffer_init(slice_buffer *buf, int line_count,
int max_allocated_lines, int line_width,
IDWTELEM *base_buffer)
IDWTELEM *ff_slice_buffer_load_line(slice_buffer *buf, int line)
void ff_slice_buffer_release(slice_buffer *buf, int line)
void ff_slice_buffer_flush(slice_buffer *buf)
void ff_slice_buffer_destroy(slice_buffer *buf)
static av_always_inline void lift(DWTELEM *dst, DWTELEM *src, DWTELEM *ref,
int dst_step, int src_step, int ref_step,
int width, int mul, int add, int shift,
int highpass, int inverse)
static av_always_inline void liftS(DWTELEM *dst, DWTELEM *src, DWTELEM *ref,
int dst_step, int src_step, int ref_step,
int width, int mul, int add, int shift,
int highpass, int inverse)
static void horizontal_decompose53i(DWTELEM *b, DWTELEM *temp, int width)
static void vertical_decompose53iH0(DWTELEM *b0, DWTELEM *b1, DWTELEM *b2,
int width)
static void vertical_decompose53iL0(DWTELEM *b0, DWTELEM *b1, DWTELEM *b2,
int width)
static void spatial_decompose53i(DWTELEM *buffer, DWTELEM *temp,
int width, int height, int stride)
static void horizontal_decompose97i(DWTELEM *b, DWTELEM *temp, int width)
static void vertical_decompose97iH0(DWTELEM *b0, DWTELEM *b1, DWTELEM *b2,
int width)
static void vertical_decompose97iH1(DWTELEM *b0, DWTELEM *b1, DWTELEM *b2,
int width)
static void vertical_decompose97iL0(DWTELEM *b0, DWTELEM *b1, DWTELEM *b2,
int width)
static void vertical_decompose97iL1(DWTELEM *b0, DWTELEM *b1, DWTELEM *b2,
int width)
static void spatial_decompose97i(DWTELEM *buffer, DWTELEM *temp,
int width, int height, int stride)
void ff_spatial_dwt(DWTELEM *buffer, DWTELEM *temp, int width, int height,
int stride, int type, int decomposition_count)
static void horizontal_compose53i(IDWTELEM *b, IDWTELEM *temp, int width)
static void vertical_compose53iH0(IDWTELEM *b0, IDWTELEM *b1, IDWTELEM *b2,
int width)
static void vertical_compose53iL0(IDWTELEM *b0, IDWTELEM *b1, IDWTELEM *b2,
int width)
static void spatial_compose53i_buffered_init(DWTCompose *cs, slice_buffer *sb,
int height, int stride_line)
static void spatial_compose53i_init(DWTCompose *cs, IDWTELEM *buffer,
int height, int stride)
static void spatial_compose53i_dy_buffered(DWTCompose *cs, slice_buffer *sb,
IDWTELEM *temp,
int width, int height,
int stride_line)
static void spatial_compose53i_dy(DWTCompose *cs, IDWTELEM *buffer,
IDWTELEM *temp, int width, int height,
int stride)
void ff_snow_horizontal_compose97i(IDWTELEM *b, IDWTELEM *temp, int width)
static void vertical_compose97iH0(IDWTELEM *b0, IDWTELEM *b1, IDWTELEM *b2,
int width)
static void vertical_compose97iH1(IDWTELEM *b0, IDWTELEM *b1, IDWTELEM *b2,
int width)
static void vertical_compose97iL0(IDWTELEM *b0, IDWTELEM *b1, IDWTELEM *b2,
int width)
static void vertical_compose97iL1(IDWTELEM *b0, IDWTELEM *b1, IDWTELEM *b2,
int width)
void ff_snow_vertical_compose97i(IDWTELEM *b0, IDWTELEM *b1, IDWTELEM *b2,
IDWTELEM *b3, IDWTELEM *b4, IDWTELEM *b5,
int width)
static void spatial_compose97i_buffered_init(DWTCompose *cs, slice_buffer *sb,
int height, int stride_line)
static void spatial_compose97i_init(DWTCompose *cs, IDWTELEM *buffer, int height,
int stride)
static void spatial_compose97i_dy_buffered(SnowDWTContext *dsp, DWTCompose *cs,
slice_buffer * sb, IDWTELEM *temp,
int width, int height,
int stride_line)
static void spatial_compose97i_dy(DWTCompose *cs, IDWTELEM *buffer,
IDWTELEM *temp, int width, int height,
int stride)
void ff_spatial_idwt_buffered_init(DWTCompose *cs, slice_buffer *sb, int width,
int height, int stride_line, int type,
int decomposition_count)
void ff_spatial_idwt_buffered_slice(SnowDWTContext *dsp, DWTCompose *cs,
slice_buffer *slice_buf, IDWTELEM *temp,
int width, int height, int stride_line,
int type, int decomposition_count, int y)
static void spatial_idwt_init(DWTCompose *cs, IDWTELEM *buffer, int width,
int height, int stride, int type,
int decomposition_count)
static void spatial_idwt_slice(DWTCompose *cs, IDWTELEM *buffer,
IDWTELEM *temp, int width, int height,
int stride, int type,
int decomposition_count, int y)
void ff_spatial_idwt(IDWTELEM *buffer, IDWTELEM *temp, int width, int height,
int stride, int type, int decomposition_count)
static inline int w_c(struct MpegEncContext *v, uint8_t *pix1, uint8_t *pix2, ptrdiff_t line_size,
int w, int h, int type)
static int w53_8_c(struct MpegEncContext *v, uint8_t *pix1, uint8_t *pix2, ptrdiff_t line_size, int h)
static int w97_8_c(struct MpegEncContext *v, uint8_t *pix1, uint8_t *pix2, ptrdiff_t line_size, int h)
static int w53_16_c(struct MpegEncContext *v, uint8_t *pix1, uint8_t *pix2, ptrdiff_t line_size, int h)
static int w97_16_c(struct MpegEncContext *v, uint8_t *pix1, uint8_t *pix2, ptrdiff_t line_size, int h)
int ff_w53_32_c(struct MpegEncContext *v, uint8_t *pix1, uint8_t *pix2, ptrdiff_t line_size, int h)
int ff_w97_32_c(struct MpegEncContext *v, uint8_t *pix1, uint8_t *pix2, ptrdiff_t line_size, int h)
av_cold void ff_dsputil_init_dwt(MECmpContext *c)
av_cold void ff_dwt_init(SnowDWTContext *c)
