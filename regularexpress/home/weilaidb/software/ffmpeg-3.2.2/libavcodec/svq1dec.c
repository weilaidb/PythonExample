static VLC svq1_block_type;
static VLC svq1_motion_component;
static VLC svq1_intra_multistage[6];
static VLC svq1_inter_multistage[6];
static VLC svq1_intra_mean;
static VLC svq1_inter_mean;
typedef struct svq1_pmv_s  svq1_pmv;
typedef struct SVQ1Context  SVQ1Context;
static const uint8_t string_table[256] = ;
#define SVQ1_PROCESS_VECTOR()                                           \
for (; level > 0; i++)
#define SVQ1_ADD_CODEBOOK()                                             \                                \
for (j = 0; j < stages; j++)                                                                    \
\                                              \
if (n1 & 0xFF00FF00)                                                                    \
\
if (n2 & 0xFF00FF00)
#define SVQ1_CALC_CODEBOOK_ENTRIES(cbook)                               \
codebook = (const uint32_t *)cbook[level];                          \
if (stages > 0)                                                     \
bit_cache = get_bits(bitbuf, 4 * stages);                       \                    \
for (j = 0; j < stages; j++)                                                                    \
mean -= stages * 128;                                               \
n4    = (mean << 16) + mean;
static int svq1_decode_block_intra(GetBitContext *bitbuf, uint8_t *pixels,
int pitch)
static int svq1_decode_block_non_intra(GetBitContext *bitbuf, uint8_t *pixels,
int pitch)
static int svq1_decode_motion_vector(GetBitContext *bitbuf, svq1_pmv *mv,
svq1_pmv **pmv)
static void svq1_skip_block(uint8_t *current, uint8_t *previous,
int pitch, int x, int y)
static int svq1_motion_inter_block(HpelDSPContext *hdsp, GetBitContext *bitbuf,
uint8_t *current, uint8_t *previous,
int pitch, svq1_pmv *motion, int x, int y,
int width, int height)
static int svq1_motion_inter_4v_block(HpelDSPContext *hdsp, GetBitContext *bitbuf,
uint8_t *current, uint8_t *previous,
int pitch, svq1_pmv *motion, int x, int y,
int width, int height)
static int svq1_decode_delta_block(AVCodecContext *avctx, HpelDSPContext *hdsp,
GetBitContext *bitbuf,
uint8_t *current, uint8_t *previous,
int pitch, svq1_pmv *motion, int x, int y,
int width, int height)
static void svq1_parse_string(GetBitContext *bitbuf, uint8_t out[257])
static int svq1_decode_frame_header(AVCodecContext *avctx, AVFrame *frame)
static int svq1_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
static av_cold int svq1_decode_init(AVCodecContext *avctx)
static av_cold int svq1_decode_end(AVCodecContext *avctx)
static void svq1_flush(AVCodecContext *avctx)
AVCodec ff_svq1_decoder = ;
