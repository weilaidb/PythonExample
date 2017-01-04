#define AVCODEC_CBRT_TABLEGEN_H
#if USE_FIXED
#define CBRT(x) lrint((x) * 8192)
#define CBRT(x) av_float2int((float)(x))
#if CONFIG_HARDCODED_TABLES
#if USE_FIXED
#define cbrt_tableinit_fixed()
#define cbrt_tableinit()
static uint32_t cbrt_tab[1 << 13];
static av_cold void AAC_RENAME(cbrt_tableinit)(void)
