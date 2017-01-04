#if !defined(AVCODEC_RDFT_H) && (!defined(FFT_FLOAT) || FFT_FLOAT)
#define AVCODEC_RDFT_H
#if CONFIG_HARDCODED_TABLES
#   define SINTABLE_CONST const
#   define SINTABLE_CONST
#define SINTABLE(size) \
SINTABLE_CONST DECLARE_ALIGNED(16, FFTSample, ff_sin_##size)[size/2]
extern SINTABLE(16);
extern SINTABLE(32);
extern SINTABLE(64);
extern SINTABLE(128);
extern SINTABLE(256);
extern SINTABLE(512);
extern SINTABLE(1024);
extern SINTABLE(2048);
extern SINTABLE(4096);
extern SINTABLE(8192);
extern SINTABLE(16384);
extern SINTABLE(32768);
extern SINTABLE(65536);
struct RDFTContext ;
int ff_rdft_init(RDFTContext *s, int nbits, enum RDFTransformType trans);
void ff_rdft_end(RDFTContext *s);
void ff_rdft_init_arm(RDFTContext *s);
