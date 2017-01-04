typedef struct VDPAUContext  VDPAUContext;
int vdpau_api_ver = 2;
static void vdpau_uninit(AVCodecContext *s)
static void vdpau_release_buffer(void *opaque, uint8_t *data)
static int vdpau_get_buffer(AVCodecContext *s, AVFrame *frame, int flags)
static int vdpau_retrieve_data(AVCodecContext *s, AVFrame *frame)
static const int vdpau_formats[][2] = ;
static int vdpau_alloc(AVCodecContext *s)
static int vdpau_old_init(AVCodecContext *s)
int vdpau_init(AVCodecContext *s)
