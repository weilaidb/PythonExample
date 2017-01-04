static int init_pass2(MpegEncContext *s);
static double get_qscale(MpegEncContext *s, RateControlEntry *rce,
double rate_factor, int frame_num);
void ff_write_pass1_stats(MpegEncContext *s)
static double get_fps(AVCodecContext *avctx)
static inline double qp2bits(RateControlEntry *rce, double qp)
static inline double bits2qp(RateControlEntry *rce, double bits)
av_cold int ff_rate_control_init(MpegEncContext *s)
av_cold void ff_rate_control_uninit(MpegEncContext *s)
int ff_vbv_update(MpegEncContext *s, int frame_size)
static double get_qscale(MpegEncContext *s, RateControlEntry *rce,
double rate_factor, int frame_num)
static double get_diff_limited_q(MpegEncContext *s, RateControlEntry *rce, double q)
static void get_qminmax(int *qmin_ret, int *qmax_ret, MpegEncContext *s, int pict_type)
static double modify_qscale(MpegEncContext *s, RateControlEntry *rce,
double q, int frame_num)
static double predict_size(Predictor *p, double q, double var)
static void update_predictor(Predictor *p, double q, double var, double size)
static void adaptive_quantization(MpegEncContext *s, double q)
void ff_get_2pass_fcode(MpegEncContext *s)
float ff_rate_estimate_qscale(MpegEncContext *s, int dry_run)
static int init_pass2(MpegEncContext *s)
