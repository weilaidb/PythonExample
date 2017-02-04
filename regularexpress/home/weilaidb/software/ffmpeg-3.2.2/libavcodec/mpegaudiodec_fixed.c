#define USE_FLOATS 0
SHR       ((a)>>(b))
FIXR_OLD    ((int)((a) * FRAC_ONE + 0.5))
FIXR        ((int)((a) * FRAC_ONE + 0.5))
FIXHR       ((int)((a) * (1LL<<32) + 0.5))
MULH3 MULH((s)*(x), y)
MULLx MULL(x,y,s)
RENAME      a ## _fixed
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
