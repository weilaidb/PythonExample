#define AVCODEC_SINEWIN_H
#if CONFIG_HARDCODED_TABLES
#   define SINETABLE_CONST const
#   define SINETABLE_CONST
#define USE_FIXED 0
#define SINETABLE(size) \
SINETABLE_CONST DECLARE_ALIGNED(32, INTFLOAT, AAC_RENAME(ff_sine_##size))[size]
void AAC_RENAME(ff_sine_window_init)(INTFLOAT *window, int n);
void AAC_RENAME(ff_init_ff_sine_windows)(int index);
extern SINETABLE(  32);
extern SINETABLE(  64);
extern SINETABLE( 128);
extern SINETABLE( 256);
extern SINETABLE( 512);
extern SINETABLE(1024);
extern SINETABLE(2048);
extern SINETABLE(4096);
extern SINETABLE(8192);
extern SINETABLE_CONST INTFLOAT * const AAC_RENAME(ff_sine_windows)[14];
