#define AVCODEC_CBRT_TABLEGEN_H
#if USE_FIXED
#define CBRT(x) lrint((x) * 8192)
#define CBRT(x) av_float2int((float)(x))
uint32_t AAC_RENAME(ff_cbrt_tab)[1 << 13];
av_cold void AAC_RENAME(ff_cbrt_tableinit)(void)
