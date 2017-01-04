#define HWND_MESSAGE ((HWND) -3)
struct vfw_ctx ;
static enum AVPixelFormat vfw_pixfmt(DWORD biCompression, WORD biBitCount)
static enum AVCodecID vfw_codecid(DWORD biCompression)
#define dstruct(pctx, sname, var, type) \
av_log(pctx, AV_LOG_DEBUG, #var":\t%"type"\n", sname->var)
static void dump_captureparms(AVFormatContext *s, CAPTUREPARMS *cparms)
static void dump_videohdr(AVFormatContext *s, VIDEOHDR *vhdr)
static void dump_bih(AVFormatContext *s, BITMAPINFOHEADER *bih)
static int shall_we_drop(AVFormatContext *s)
static LRESULT CALLBACK videostream_cb(HWND hwnd, LPVIDEOHDR vdhdr)
static int vfw_read_close(AVFormatContext *s)
static int vfw_read_header(AVFormatContext *s)
static int vfw_read_packet(AVFormatContext *s, AVPacket *pkt)
#define OFFSET(x) offsetof(struct vfw_ctx, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass vfw_class = ;
AVInputFormat ff_vfwcap_demuxer = ;
