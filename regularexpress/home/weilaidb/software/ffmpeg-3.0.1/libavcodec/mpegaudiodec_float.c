#define USE_FLOATS 1
#define SHR(a,b)       ((a)*(1.0f/(1<<(b))))
#define FIXR_OLD(a)    ((int)((a) * FRAC_ONE + 0.5))
#define FIXR(x)        ((float)(x))
#define FIXHR(x)       ((float)(x))
#define MULH3(x, y, s) ((s)*(y)*(x))
#define MULLx(x, y, s) ((y)*(x))
#define RENAME(a) a ## _float
#define OUT_FMT   AV_SAMPLE_FMT_FLT
#define OUT_FMT_P AV_SAMPLE_FMT_FLTP
#if CONFIG_MP1FLOAT_DECODER
AVCodec ff_mp1float_decoder = ;
#if CONFIG_MP2FLOAT_DECODER
AVCodec ff_mp2float_decoder = ;
#if CONFIG_MP3FLOAT_DECODER
AVCodec ff_mp3float_decoder = ;
#if CONFIG_MP3ADUFLOAT_DECODER
AVCodec ff_mp3adufloat_decoder = ;
#if CONFIG_MP3ON4FLOAT_DECODER
AVCodec ff_mp3on4float_decoder = ;
