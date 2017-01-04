typedef struct QSVContext  QSVContext;
static void buffer_release(void *opaque, uint8_t *data)
static int qsv_get_buffer(AVCodecContext *s, AVFrame *frame, int flags)
static int init_opaque_surf(QSVContext *qsv)
static void qsv_uninit(AVCodecContext *s)
int qsv_init(AVCodecContext *s)
static mfxIMPL choose_implementation(const InputStream *ist)
int qsv_transcode_init(OutputStream *ost)
