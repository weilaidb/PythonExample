#define ON2AVC_SUBFRAME_SIZE   1024
enum WindowTypes ;
typedef struct On2AVCContext  On2AVCContext;
static void on2avc_read_ms_info(On2AVCContext *c, GetBitContext *gb)
static int on2avc_decode_band_types(On2AVCContext *c, GetBitContext *gb)
static int on2avc_decode_band_scales(On2AVCContext *c, GetBitContext *gb)
static inline float on2avc_scale(int v, float scale)
static int on2avc_decode_quads(On2AVCContext *c, GetBitContext *gb, float *dst,
int dst_size, int type, float band_scale)
static inline int get_egolomb(GetBitContext *gb)
static int on2avc_decode_pairs(On2AVCContext *c, GetBitContext *gb, float *dst,
int dst_size, int type, float band_scale)
static int on2avc_read_channel_data(On2AVCContext *c, GetBitContext *gb, int ch)
static int on2avc_apply_ms(On2AVCContext *c)
static void zero_head_and_tail(float *src, int len, int order0, int order1)
static void pretwiddle(float *src, float *dst, int dst_len, int tab_step,
int step, int order0, int order1, const double * const *tabs)
static void twiddle(float *src1, float *src2, int src2_len,
const double *tab, int tab_len, int step,
int order0, int order1, const double * const *tabs)
#define CMUL1_R(s, t, is, it) \
s[is + 0] * t[it + 0] - s[is + 1] * t[it + 1]
#define CMUL1_I(s, t, is, it) \
s[is + 0] * t[it + 1] + s[is + 1] * t[it + 0]
#define CMUL2_R(s, t, is, it) \
s[is + 0] * t[it + 0] + s[is + 1] * t[it + 1]
#define CMUL2_I(s, t, is, it) \
s[is + 0] * t[it + 1] - s[is + 1] * t[it + 0]
#define CMUL0(dst, id, s0, s1, s2, s3, t0, t1, t2, t3, is, it)         \
dst[id]     = s0[is] * t0[it]     + s1[is] * t1[it]                \
+ s2[is] * t2[it]     + s3[is] * t3[it];               \
dst[id + 1] = s0[is] * t0[it + 1] + s1[is] * t1[it + 1]            \
+ s2[is] * t2[it + 1] + s3[is] * t3[it + 1];
#define CMUL1(dst, s0, s1, s2, s3, t0, t1, t2, t3, is, it)             \
*dst++ = CMUL1_R(s0, t0, is, it)                                   \
+ CMUL1_R(s1, t1, is, it)                                   \
+ CMUL1_R(s2, t2, is, it)                                   \
+ CMUL1_R(s3, t3, is, it);                                  \
*dst++ = CMUL1_I(s0, t0, is, it)                                   \
+ CMUL1_I(s1, t1, is, it)                                   \
+ CMUL1_I(s2, t2, is, it)                                   \
+ CMUL1_I(s3, t3, is, it);
#define CMUL2(dst, s0, s1, s2, s3, t0, t1, t2, t3, is, it)             \
*dst++ = CMUL2_R(s0, t0, is, it)                                   \
+ CMUL2_R(s1, t1, is, it)                                   \
+ CMUL2_R(s2, t2, is, it)                                   \
+ CMUL2_R(s3, t3, is, it);                                  \
*dst++ = CMUL2_I(s0, t0, is, it)                                   \
+ CMUL2_I(s1, t1, is, it)                                   \
+ CMUL2_I(s2, t2, is, it)                                   \
+ CMUL2_I(s3, t3, is, it);
static void combine_fft(float *s0, float *s1, float *s2, float *s3, float *dst,
const float *t0, const float *t1,
const float *t2, const float *t3, int len, int step)
static void wtf_end_512(On2AVCContext *c, float *out, float *src,
float *tmp0, float *tmp1)
static void wtf_end_1024(On2AVCContext *c, float *out, float *src,
float *tmp0, float *tmp1)
static void wtf_40(On2AVCContext *c, float *out, float *src, int size)
static void wtf_44(On2AVCContext *c, float *out, float *src, int size)
static int on2avc_reconstruct_channel_ext(On2AVCContext *c, AVFrame *dst, int offset)
static int on2avc_reconstruct_channel(On2AVCContext *c, int channel,
AVFrame *dst, int offset)
static int on2avc_decode_subframe(On2AVCContext *c, const uint8_t *buf,
int buf_size, AVFrame *dst, int offset)
static int on2avc_decode_frame(AVCodecContext * avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static av_cold void on2avc_free_vlcs(On2AVCContext *c)
static av_cold int on2avc_decode_init(AVCodecContext *avctx)
static av_cold int on2avc_decode_close(AVCodecContext *avctx)
AVCodec ff_on2avc_decoder = ;
