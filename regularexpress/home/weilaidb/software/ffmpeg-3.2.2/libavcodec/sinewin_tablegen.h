#define AVCODEC_SINEWIN_TABLEGEN_H
#if !CONFIG_HARDCODED_TABLES
SINETABLE(  32);
SINETABLE(  64);
SINETABLE( 128);
SINETABLE( 256);
SINETABLE( 512);
SINETABLE(1024);
SINETABLE(2048);
SINETABLE(4096);
SINETABLE(8192);
#if USE_FIXED
#if USE_FIXED
#define SIN_FIX(a) (int)floor((a) * 0x80000000 + 0.5)
#define SIN_FIX(a) a
SINETABLE_CONST INTFLOAT * const AAC_RENAME(ff_sine_windows)[] = ;
av_cold void AAC_RENAME(ff_sine_window_init)(INTFLOAT *window, int n)
av_cold void AAC_RENAME(ff_init_ff_sine_windows)(int index)
