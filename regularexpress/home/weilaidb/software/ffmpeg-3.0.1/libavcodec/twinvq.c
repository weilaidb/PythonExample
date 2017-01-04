static float eval_lpc_spectrum(const float *lsp, float cos_val, int order)
static void eval_lpcenv(TwinVQContext *tctx, const float *cos_vals, float *lpc)
static void interpolate(float *out, float v1, float v2, int size)
static inline float get_cos(int idx, int part, const float *cos_tab, int size)
static inline void eval_lpcenv_or_interp(TwinVQContext *tctx,
enum TwinVQFrameType ftype,
float *out, const float *in,
int size, int step, int part)
static void eval_lpcenv_2parts(TwinVQContext *tctx, enum TwinVQFrameType ftype,
const float *buf, float *lpc,
int size, int step)
static void dequant(TwinVQContext *tctx, const uint8_t *cb_bits, float *out,
enum TwinVQFrameType ftype,
const int16_t *cb0, const int16_t *cb1, int cb_len)
static void dec_gain(TwinVQContext *tctx,
enum TwinVQFrameType ftype, float *out)
static void rearrange_lsp(int order, float *lsp, float min_dist)
static void decode_lsp(TwinVQContext *tctx, int lpc_idx1, uint8_t *lpc_idx2,
int lpc_hist_idx, float *lsp, float *hist)
static void dec_lpc_spectrum_inv(TwinVQContext *tctx, float *lsp,
enum TwinVQFrameType ftype, float *lpc)
static const uint8_t wtype_to_wsize[] = ;
static void imdct_and_window(TwinVQContext *tctx, enum TwinVQFrameType ftype,
int wtype, float *in, float *prev, int ch)
static void imdct_output(TwinVQContext *tctx, enum TwinVQFrameType ftype,
int wtype, float **out, int offset)
static void read_and_decode_spectrum(TwinVQContext *tctx, float *out,
enum TwinVQFrameType ftype)
const enum TwinVQFrameType ff_twinvq_wtype_to_ftype_table[] = ;
int ff_twinvq_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static av_cold int init_mdct_win(TwinVQContext *tctx)
static void permutate_in_line(int16_t *tab, int num_vect, int num_blocks,
int block_size,
const uint8_t line_len[2], int length_div,
enum TwinVQFrameType ftype)
static void transpose_perm(int16_t *out, int16_t *in, int num_vect,
const uint8_t line_len[2], int length_div)
static void linear_perm(int16_t *out, int16_t *in, int n_blocks, int size)
static av_cold void construct_perm_table(TwinVQContext *tctx,
enum TwinVQFrameType ftype)
static av_cold void init_bitstream_params(TwinVQContext *tctx)
av_cold int ff_twinvq_decode_close(AVCodecContext *avctx)
av_cold int ff_twinvq_decode_init(AVCodecContext *avctx)
