#define USE_FLOATS 0
#define SHR(a,b)       ((a)>>(b))
#define FIXR_OLD(a)    ((int)((a) * FRAC_ONE + 0.5))
#define FIXR(a)        ((int)((a) * FRAC_ONE + 0.5))
#define FIXHR(a)       ((int)((a) * (1LL<<32) + 0.5))
#define MULH3(x, y, s) MULH((s)*(x), y)
#define MULLx(x, y, s) MULL(x,y,s)
#define RENAME(a)      a ## _fixed
#define OUT_FMT   AV_SAMPLE_FMT_S16
#define OUT_FMT_P AV_SAMPLE_FMT_S16P
#if CONFIG_MP1_DECODER
AVCodec ff_mp1_decoder = ;
#if CONFIG_MP2_DECODER
AVCodec ff_mp2_decoder = ;
#if CONFIG_MP3_DECODER
AVCodec ff_mp3_decoder = ;
#if CONFIG_MP3ADU_DECODER
AVCodec ff_mp3adu_decoder = ;
#if CONFIG_MP3ON4_DECODER
AVCodec ff_mp3on4_decoder = ;
