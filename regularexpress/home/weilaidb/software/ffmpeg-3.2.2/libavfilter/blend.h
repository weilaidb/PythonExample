#define AVFILTER_BLEND_H
enum BlendMode ;
typedef struct FilterParams  FilterParams;
void ff_blend_init(FilterParams *param, int is_16bit);
void ff_blend_init_x86(FilterParams *param, int is_16bit);
