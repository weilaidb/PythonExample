#define AVCODEC_OPUS_H
#define MAX_FRAME_SIZE               1275
#define MAX_FRAMES                   48
#define MAX_PACKET_DUR               5760
#define CELT_SHORT_BLOCKSIZE         120
#define CELT_OVERLAP                 CELT_SHORT_BLOCKSIZE
#define CELT_MAX_LOG_BLOCKS          3
#define CELT_MAX_FRAME_SIZE          (CELT_SHORT_BLOCKSIZE * (1 << CELT_MAX_LOG_BLOCKS))
#define CELT_MAX_BANDS               21
#define CELT_VECTORS                 11
#define CELT_ALLOC_STEPS             6
#define CELT_FINE_OFFSET             21
#define CELT_MAX_FINE_BITS           8
#define CELT_NORM_SCALE              16384
#define CELT_QTHETA_OFFSET           4
#define CELT_QTHETA_OFFSET_TWOPHASE  16
#define CELT_DEEMPH_COEFF            0.85000610f
#define CELT_POSTFILTER_MINPERIOD    15
#define CELT_ENERGY_SILENCE          (-28.0f)
#define SILK_HISTORY                 322
#define SILK_MAX_LPC                 16
ROUND_MULL (((MUL64(a, b) >> ((s) - 1)) + 1) >> 1)
ROUND_MUL16  ((MUL16(a, b) + 16384) >> 15)
opus_ilog (av_log2(i) + !!(i))
#define OPUS_TS_HEADER     0x7FE0
#define OPUS_TS_MASK       0xFFE0
static const uint8_t opus_default_extradata[30] = ;
enum OpusMode ;
enum OpusBandwidth ;
typedef struct RawBitsContext  RawBitsContext;
typedef struct OpusRangeCoder  OpusRangeCoder;
typedef struct SilkContext SilkContext;
typedef struct CeltContext CeltContext;
typedef struct OpusPacket  OpusPacket;
typedef struct OpusStreamContext  OpusStreamContext;
typedef struct ChannelMap  ChannelMap;
typedef struct OpusContext  OpusContext;
opus_rc_normalize
opus_rc_update
opus_rc_getsymbol
opus_rc_p2model
opus_rc_tell
opus_rc_tell_frac
opus_getrawbits
opus_rc_unimodel
opus_rc_laplace
opus_rc_stepmodel
opus_rc_trimodel
ff_opus_parse_packet;
ff_opus_parse_extradata;
ff_silk_init;
ff_silk_free;
ff_silk_flush;
ff_silk_decode_superframe;
ff_celt_init;
ff_celt_free;
ff_celt_flush;
ff_celt_decode_frame;
extern const float ff_celt_window2[120];
