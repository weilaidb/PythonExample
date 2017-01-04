int ff_qsv_map_pixfmt(enum AVPixelFormat format)
static int qsv_init_session(AVCodecContext *avctx, QSVContext *q, mfxSession session)
static int qsv_decode_init(AVCodecContext *avctx, QSVContext *q, AVPacket *avpkt)
static int alloc_frame(AVCodecContext *avctx, QSVFrame *frame)
static void qsv_clear_unused_frames(QSVContext *q)
static int get_surface(AVCodecContext *avctx, QSVContext *q, mfxFrameSurface1 **surf)
static QSVFrame *find_frame(QSVContext *q, mfxFrameSurface1 *surf)
static void qsv_fifo_relocate(AVFifoBuffer *f, int bytes_to_free)
static void close_decoder(QSVContext *q)
static int do_qsv_decode(AVCodecContext *avctx, QSVContext *q,
AVFrame *frame, int *got_frame,
AVPacket *avpkt)
static void qsv_packet_push_front(QSVContext *q, AVPacket *avpkt)
int ff_qsv_decode(AVCodecContext *avctx, QSVContext *q,
AVFrame *frame, int *got_frame,
AVPacket *avpkt)
void ff_qsv_decode_reset(AVCodecContext *avctx, QSVContext *q)
int ff_qsv_decode_close(QSVContext *q)
