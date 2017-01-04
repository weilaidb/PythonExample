#define AVCODEC_SNOW_DWT_H
typedef int DWTELEM;
typedef short IDWTELEM;
#define MAX_DECOMPOSITIONS 8
typedef struct DWTCompose  DWTCompose;
typedef struct slice_buffer_s  slice_buffer;
struct SnowDWTContext;
typedef struct SnowDWTContext  SnowDWTContext;
#define DWT_97 0
#define DWT_53 1
#define liftS lift
#define W_AM 3
#define W_AO 0
#define W_AS 1
#undef liftS
#define W_BM 1
#define W_BO 8
#define W_BS 4
#define W_CM 1
#define W_CO 0
#define W_CS 0
#define W_DM 3
#define W_DO 4
#define W_DS 3
#define slice_buffer_get_line(slice_buf, line_num)                          \
((slice_buf)->line[line_num] ? (slice_buf)->line[line_num]              \
: ff_slice_buffer_load_line((slice_buf),   \
(line_num)))
int ff_slice_buffer_init(slice_buffer *buf, int line_count,
int max_allocated_lines, int line_width,
IDWTELEM *base_buffer);
void ff_slice_buffer_release(slice_buffer *buf, int line);
void ff_slice_buffer_flush(slice_buffer *buf);
void ff_slice_buffer_destroy(slice_buffer *buf);
IDWTELEM *ff_slice_buffer_load_line(slice_buffer *buf, int line);
void ff_snow_vertical_compose97i(IDWTELEM *b0, IDWTELEM *b1, IDWTELEM *b2,
IDWTELEM *b3, IDWTELEM *b4, IDWTELEM *b5,
int width);
void ff_snow_horizontal_compose97i(IDWTELEM *b, IDWTELEM *temp, int width);
void ff_snow_inner_add_yblock(const uint8_t *obmc, const int obmc_stride,
uint8_t **block, int b_w, int b_h, int src_x,
int src_y, int src_stride, slice_buffer *sb,
int add, uint8_t *dst8);
int ff_w53_32_c(struct MpegEncContext *v, uint8_t *pix1, uint8_t *pix2, ptrdiff_t line_size, int h);
int ff_w97_32_c(struct MpegEncContext *v, uint8_t *pix1, uint8_t *pix2, ptrdiff_t line_size, int h);
void ff_spatial_dwt(int *buffer, int *temp, int width, int height, int stride,
int type, int decomposition_count);
void ff_spatial_idwt_buffered_init(DWTCompose *cs, slice_buffer *sb, int width,
int height, int stride_line, int type,
int decomposition_count);
void ff_spatial_idwt_buffered_slice(SnowDWTContext *dsp, DWTCompose *cs,
slice_buffer *slice_buf, IDWTELEM *temp,
int width, int height, int stride_line,
int type, int decomposition_count, int y);
void ff_spatial_idwt(IDWTELEM *buffer, IDWTELEM *temp, int width, int height,
int stride, int type, int decomposition_count);
void ff_dwt_init(SnowDWTContext *c);
void ff_dwt_init_x86(SnowDWTContext *c);
