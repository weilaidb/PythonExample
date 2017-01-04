#if HAVE_UTGETOSTYPEFROMSTRING
#if CONFIG_VDA
#  include "libavcodec/vda.h"
#if CONFIG_VIDEOTOOLBOX
#  include "libavcodec/videotoolbox.h"
typedef struct VTContext  VTContext;
char *videotoolbox_pixfmt;
static int videotoolbox_retrieve_data(AVCodecContext *s, AVFrame *frame)
static void videotoolbox_uninit(AVCodecContext *s)
int videotoolbox_init(AVCodecContext *s)
