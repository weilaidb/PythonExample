#if !CONFIG_HARDCODED_TABLES
SINTABLE(16);
SINTABLE(32);
SINTABLE(64);
SINTABLE(128);
SINTABLE(256);
SINTABLE(512);
SINTABLE(1024);
SINTABLE(2048);
SINTABLE(4096);
SINTABLE(8192);
SINTABLE(16384);
SINTABLE(32768);
SINTABLE(65536);
static SINTABLE_CONST FFTSample * const ff_sin_tabs[] = ;
static void rdft_calc_c(RDFTContext *s, FFTSample *data)
av_cold int ff_rdft_init(RDFTContext *s, int nbits, enum RDFTransformType trans)
av_cold void ff_rdft_end(RDFTContext *s)
