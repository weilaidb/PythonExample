#define MONO            0x1000001
#define STEREO          0x1000002
#define JOINT_STEREO    0x1000003
#define MC_COOK         0x2000000
#define SUBBAND_SIZE    20
#define MAX_SUBPACKETS   5
typedef struct cook_gains  cook_gains;
typedef struct COOKSubpacket  COOKSubpacket;
typedef struct cook  COOKContext;
static float     pow2tab[127];
static float rootpow2tab[127];
static av_cold void init_pow2table(void)
static av_cold void init_gain_table(COOKContext *q)
static av_cold int init_cook_vlc_tables(COOKContext *q)
static av_cold int init_cook_mlt(COOKContext *q)
static av_cold void init_cplscales_table(COOKContext *q)
#define DECODE_BYTES_PAD1(bytes) (3 - ((bytes) + 3) % 4)
#define DECODE_BYTES_PAD2(bytes) ((bytes) % 4 + DECODE_BYTES_PAD1(2 * (bytes)))
static inline int decode_bytes(const uint8_t *inbuffer, uint8_t *out, int bytes)
static av_cold int cook_decode_close(AVCodecContext *avctx)
static void decode_gain_info(GetBitContext *gb, int *gaininfo)
static int decode_envelope(COOKContext *q, COOKSubpacket *p,
int *quant_index_table)
static void categorize(COOKContext *q, COOKSubpacket *p, const int *quant_index_table,
int *category, int *category_index)
static inline void expand_category(COOKContext *q, int *category,
int *category_index)
static void scalar_dequant_float(COOKContext *q, int index, int quant_index,
int *subband_coef_index, int *subband_coef_sign,
float *mlt_p)
static int unpack_SQVH(COOKContext *q, COOKSubpacket *p, int category,
int *subband_coef_index, int *subband_coef_sign)
static void decode_vectors(COOKContext *q, COOKSubpacket *p, int *category,
int *quant_index_table, float *mlt_buffer)
static int mono_decode(COOKContext *q, COOKSubpacket *p, float *mlt_buffer)
static void interpolate_float(COOKContext *q, float *buffer,
int gain_index, int gain_index_next)
static void imlt_window_float(COOKContext *q, float *inbuffer,
cook_gains *gains_ptr, float *previous_buffer)
static void imlt_gain(COOKContext *q, float *inbuffer,
cook_gains *gains_ptr, float *previous_buffer)
static int decouple_info(COOKContext *q, COOKSubpacket *p, int *decouple_tab)
static void decouple_float(COOKContext *q,
COOKSubpacket *p,
int subband,
float f1, float f2,
float *decode_buffer,
float *mlt_buffer1, float *mlt_buffer2)
static int joint_decode(COOKContext *q, COOKSubpacket *p,
float *mlt_buffer_left, float *mlt_buffer_right)
static inline void decode_bytes_and_gain(COOKContext *q, COOKSubpacket *p,
const uint8_t *inbuffer,
cook_gains *gains_ptr)
static void saturate_output_float(COOKContext *q, float *out)
static inline void mlt_compensate_output(COOKContext *q, float *decode_buffer,
cook_gains *gains_ptr, float *previous_buffer,
float *out)
static int decode_subpacket(COOKContext *q, COOKSubpacket *p,
const uint8_t *inbuffer, float **outbuffer)
static int cook_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static void dump_cook_context(COOKContext *q)
static av_cold int cook_decode_init(AVCodecContext *avctx)
AVCodec ff_cook_decoder = ;
