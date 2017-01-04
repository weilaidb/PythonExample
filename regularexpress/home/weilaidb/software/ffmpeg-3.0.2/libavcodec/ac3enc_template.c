static void scale_coefficients(AC3EncodeContext *s);
static int normalize_samples(AC3EncodeContext *s);
static void clip_coefficients(AudioDSPContext *adsp, CoefType *coef,
unsigned int len);
static CoefType calc_cpl_coord(CoefSumType energy_ch, CoefSumType energy_cpl);
static void sum_square_butterfly(AC3EncodeContext *s, CoefSumType sum[4],
const CoefType *coef0, const CoefType *coef1,
int len);
int AC3_NAME(allocate_sample_buffers)(AC3EncodeContext *s)
static void copy_input_samples(AC3EncodeContext *s, SampleType **samples)
static void apply_mdct(AC3EncodeContext *s)
static void apply_channel_coupling(AC3EncodeContext *s)
static void compute_rematrixing_strategy(AC3EncodeContext *s)
int AC3_NAME(encode_frame)(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
