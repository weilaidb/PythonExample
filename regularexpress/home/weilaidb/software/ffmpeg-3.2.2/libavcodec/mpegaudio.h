#define AVCODEC_MPEGAUDIO_H
#   define USE_FLOATS 0
#define MPA_FRAME_SIZE 1152
#define MPA_MAX_CODED_FRAME_SIZE 1792
#define MPA_MAX_CHANNELS 2
#define SBLIMIT 32
#define MPA_STEREO  0
#define MPA_JSTEREO 1
#define MPA_DUAL    2
#define MPA_MONO    3
#define FRAC_BITS   23
#define WFRAC_BITS  16
#define IMDCT_SCALAR 1.759
#define FRAC_ONE    (1 << FRAC_BITS)
FIX   ((int)((a) * FRAC_ONE))
#if USE_FLOATS
#   define INTFLOAT float
typedef float MPA_INT;
typedef float OUT_INT;
#elif FRAC_BITS <= 15
#   define INTFLOAT int
typedef int16_t MPA_INT;
typedef int16_t OUT_INT;
#   define INTFLOAT int
typedef int32_t MPA_INT;
typedef int16_t OUT_INT;
ff_mpa_l2_select_table;
