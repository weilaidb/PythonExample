#define AVFILTER_SHOWCQT_H
typedef struct  Coeffs;
typedef struct  RGBFloat;
typedef struct  YUVFloat;
typedef union  ColorFloat;
typedef struct  ShowCQTContext;
void ff_showcqt_init_x86(ShowCQTContext *s);
