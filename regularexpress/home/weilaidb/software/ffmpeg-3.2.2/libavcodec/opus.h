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
#define ROUND_MULL(a,b,s) (((MUL64(a, b) >> ((s) - 1)) + 1) >> 1)
#define ROUND_MUL16(a,b)  ((MUL16(a, b) + 16384) >> 15)
#define opus_ilog(i) (av_log2(i) + !!(i))
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
static av_always_inline void opus_rc_normalize(OpusRangeCoder *rc)
static av_always_inline void opus_rc_update(OpusRangeCoder *rc, unsigned int scale,
unsigned int low, unsigned int high,
unsigned int total)
static av_always_inline unsigned int opus_rc_getsymbol(OpusRangeCoder *rc, const uint16_t *cdf)
static av_always_inline unsigned int opus_rc_p2model(OpusRangeCoder *rc, unsigned int bits)
static av_always_inline unsigned int opus_rc_tell(const OpusRangeCoder *rc)
static av_always_inline unsigned int opus_rc_tell_frac(const OpusRangeCoder *rc)
static av_always_inline unsigned int opus_getrawbits(OpusRangeCoder *rc, unsigned int count)
static av_always_inline unsigned int opus_rc_unimodel(OpusRangeCoder *rc, unsigned int size)
static av_always_inline int opus_rc_laplace(OpusRangeCoder *rc, unsigned int symbol, int decay)
static av_always_inline unsigned int opus_rc_stepmodel(OpusRangeCoder *rc, int k0)
static av_always_inline unsigned int opus_rc_trimodel(OpusRangeCoder *rc, int qn)
int ff_opus_parse_packet(OpusPacket *pkt, const uint8_t *buf, int buf_size,
int self_delimited);
int ff_opus_parse_extradata(AVCodecContext *avctx, OpusContext *s);
int ff_silk_init(AVCodecContext *avctx, SilkContext **ps, int output_channels);
void ff_silk_free(SilkContext **ps);
void ff_silk_flush(SilkContext *s);
int ff_silk_decode_superframe(SilkContext *s, OpusRangeCoder *rc,
float *output[2],
enum OpusBandwidth bandwidth, int coded_channels,
int duration_ms);
int ff_celt_init(AVCodecContext *avctx, CeltContext **s, int output_channels);
void ff_celt_free(CeltContext **s);
void ff_celt_flush(CeltContext *s);
int ff_celt_decode_frame(CeltContext *s, OpusRangeCoder *rc,
float **output, int coded_channels, int frame_size,
int startband,  int endband);
extern const float ff_celt_window2[120];
