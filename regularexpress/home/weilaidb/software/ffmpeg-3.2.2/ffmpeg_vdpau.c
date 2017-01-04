typedef struct VDPAUContext  VDPAUContext;
static void vdpau_uninit(AVCodecContext *s)
static int vdpau_get_buffer(AVCodecContext *s, AVFrame *frame, int flags)
static int vdpau_retrieve_data(AVCodecContext *s, AVFrame *frame)
static int vdpau_alloc(AVCodecContext *s)
int vdpau_init(AVCodecContext *s)
