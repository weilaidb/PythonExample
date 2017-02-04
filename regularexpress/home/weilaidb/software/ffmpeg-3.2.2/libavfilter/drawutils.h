#define AVFILTER_DRAWUTILS_H
ff_fill_rgba_map;
ff_fill_line_with_color;
ff_draw_rectangle;
ff_copy_rectangle;
#define MAX_PLANES 4
typedef struct FFDrawContext  FFDrawContext;
typedef struct FFDrawColor  FFDrawColor;
#define FF_DRAW_PROCESS_ALPHA 1
ff_draw_init;
ff_draw_color;
ff_copy_rectangle2;
ff_fill_rectangle;
ff_blend_rectangle;
ff_blend_mask;
ff_draw_round_to_sub;
*ff_draw_supported_pixel_formats;
