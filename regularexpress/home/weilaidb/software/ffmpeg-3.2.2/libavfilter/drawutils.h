#define AVFILTER_DRAWUTILS_H
int ff_fill_rgba_map(uint8_t *rgba_map, enum AVPixelFormat pix_fmt);
int ff_fill_line_with_color(uint8_t *line[4], int pixel_step[4], int w,
uint8_t dst_color[4],
enum AVPixelFormat pix_fmt, uint8_t rgba_color[4],
int *is_packed_rgba, uint8_t rgba_map[4]);
void ff_draw_rectangle(uint8_t *dst[4], int dst_linesize[4],
uint8_t *src[4], int pixelstep[4],
int hsub, int vsub, int x, int y, int w, int h);
void ff_copy_rectangle(uint8_t *dst[4], int dst_linesize[4],
uint8_t *src[4], int src_linesize[4], int pixelstep[4],
int hsub, int vsub, int x, int y, int y2, int w, int h);
#define MAX_PLANES 4
typedef struct FFDrawContext  FFDrawContext;
typedef struct FFDrawColor  FFDrawColor;
#define FF_DRAW_PROCESS_ALPHA 1
int ff_draw_init(FFDrawContext *draw, enum AVPixelFormat format, unsigned flags);
void ff_draw_color(FFDrawContext *draw, FFDrawColor *color, const uint8_t rgba[4]);
void ff_copy_rectangle2(FFDrawContext *draw,
uint8_t *dst[], int dst_linesize[],
uint8_t *src[], int src_linesize[],
int dst_x, int dst_y, int src_x, int src_y,
int w, int h);
void ff_fill_rectangle(FFDrawContext *draw, FFDrawColor *color,
uint8_t *dst[], int dst_linesize[],
int dst_x, int dst_y, int w, int h);
void ff_blend_rectangle(FFDrawContext *draw, FFDrawColor *color,
uint8_t *dst[], int dst_linesize[],
int dst_w, int dst_h,
int x0, int y0, int w, int h);
void ff_blend_mask(FFDrawContext *draw, FFDrawColor *color,
uint8_t *dst[], int dst_linesize[], int dst_w, int dst_h,
const uint8_t *mask, int mask_linesize, int mask_w, int mask_h,
int l2depth, unsigned endianness, int x0, int y0);
int ff_draw_round_to_sub(FFDrawContext *draw, int sub_dir, int round_dir,
int value);
AVFilterFormats *ff_draw_supported_pixel_formats(unsigned flags);
