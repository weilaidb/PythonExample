static const struct  profile_names[] = ;
static const char *print_profile(mfxU16 profile)
static const struct  rc_names[] = ;
static const char *print_ratecontrol(mfxU16 rc_mode)
static const char *print_threestate(mfxU16 val)
static void dump_video_param(AVCodecContext *avctx, QSVEncContext *q,
mfxExtBuffer **coding_opts)
static int select_rc_mode(AVCodecContext *avctx, QSVEncContext *q)
static int rc_supported(QSVEncContext *q)
static int init_video_param(AVCodecContext *avctx, QSVEncContext *q)
static int qsv_retrieve_enc_params(AVCodecContext *avctx, QSVEncContext *q)
static int qsv_init_opaque_alloc(AVCodecContext *avctx, QSVEncContext *q)
int ff_qsv_enc_init(AVCodecContext *avctx, QSVEncContext *q)
static void free_encoder_ctrl_payloads(mfxEncodeCtrl* enc_ctrl)
static void clear_unused_frames(QSVEncContext *q)
static int get_free_frame(QSVEncContext *q, QSVFrame **f)
static int submit_frame(QSVEncContext *q, const AVFrame *frame,
QSVFrame **new_frame)
static void print_interlace_msg(AVCodecContext *avctx, QSVEncContext *q)
static int encode_frame(AVCodecContext *avctx, QSVEncContext *q,
const AVFrame *frame)
int ff_qsv_encode(AVCodecContext *avctx, QSVEncContext *q,
AVPacket *pkt, const AVFrame *frame, int *got_packet)
int ff_qsv_enc_close(AVCodecContext *avctx, QSVEncContext *q)
