#define MAX_BLOCKS           8
#define MAX_LSPS             16
#define MAX_LSPS_ALIGN16     16
#define MAX_FRAMES           3
#define MAX_FRAMESIZE        160
#define MAX_SIGNAL_HISTORY   416
#define MAX_SFRAMESIZE       (MAX_FRAMESIZE * MAX_FRAMES)
#define SFRAME_CACHE_MAXSIZE 256
#define VLC_NBITS            6
static VLC frame_type_vlc;
enum ;
enum ;
static const struct frame_type_desc  frame_descs[17] = ;
typedef struct WMAVoiceContext  WMAVoiceContext;
static av_cold int decode_vbmtree(GetBitContext *gb, int8_t vbm_tree[25])
static av_cold void wmavoice_init_static_data(AVCodec *codec)
static av_cold int wmavoice_decode_init(AVCodecContext *ctx)
static void adaptive_gain_control(float *out, const float *in,
const float *speech_synth,
int size, float alpha, float *gain_mem)
static int kalman_smoothen(WMAVoiceContext *s, int pitch,
const float *in, float *out, int size)
static float tilt_factor(const float *lpcs, int n_lpcs)
static void calc_input_response(WMAVoiceContext *s, float *lpcs,
int fcb_type, float *coeffs, int remainder)
static void wiener_denoise(WMAVoiceContext *s, int fcb_type,
float *synth_pf, int size,
const float *lpcs)
static void postfilter(WMAVoiceContext *s, const float *synth,
float *samples,    int size,
const float *lpcs, float *zero_exc_pf,
int fcb_type,      int pitch)
static void dequant_lsps(double *lsps, int num,
const uint16_t *values,
const uint16_t *sizes,
int n_stages, const uint8_t *table,
const double *mul_q,
const double *base_q)
static void dequant_lsp10i(GetBitContext *gb, double *lsps)
static void dequant_lsp10r(GetBitContext *gb,
double *i_lsps, const double *old,
double *a1, double *a2, int q_mode)
static void dequant_lsp16i(GetBitContext *gb, double *lsps)
static void dequant_lsp16r(GetBitContext *gb,
double *i_lsps, const double *old,
double *a1, double *a2, int q_mode)
static void aw_parse_coords(WMAVoiceContext *s, GetBitContext *gb,
const int *pitch)
static int aw_pulse_set2(WMAVoiceContext *s, GetBitContext *gb,
int block_idx, AMRFixed *fcb)
static void aw_pulse_set1(WMAVoiceContext *s, GetBitContext *gb,
int block_idx, AMRFixed *fcb)
static int pRNG(int frame_cntr, int block_num, int block_size)
static void synth_block_hardcoded(WMAVoiceContext *s, GetBitContext *gb,
int block_idx, int size,
const struct frame_type_desc *frame_desc,
float *excitation)
static void synth_block_fcb_acb(WMAVoiceContext *s, GetBitContext *gb,
int block_idx, int size,
int block_pitch_sh2,
const struct frame_type_desc *frame_desc,
float *excitation)
static void synth_block(WMAVoiceContext *s, GetBitContext *gb,
int block_idx, int size,
int block_pitch_sh2,
const double *lsps, const double *prev_lsps,
const struct frame_type_desc *frame_desc,
float *excitation, float *synth)
static int synth_frame(AVCodecContext *ctx, GetBitContext *gb, int frame_idx,
float *samples,
const double *lsps, const double *prev_lsps,
float *excitation, float *synth)
static void stabilize_lsps(double *lsps, int num)
static int check_bits_for_superframe(GetBitContext *orig_gb,
WMAVoiceContext *s)
static int synth_superframe(AVCodecContext *ctx, AVFrame *frame,
int *got_frame_ptr)
static int parse_packet_header(WMAVoiceContext *s)
static void copy_bits(PutBitContext *pb,
const uint8_t *data, int size,
GetBitContext *gb, int nbits)
static int wmavoice_decode_packet(AVCodecContext *ctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static av_cold int wmavoice_decode_end(AVCodecContext *ctx)
static av_cold void wmavoice_flush(AVCodecContext *ctx)
AVCodec ff_wmavoice_decoder = ;
