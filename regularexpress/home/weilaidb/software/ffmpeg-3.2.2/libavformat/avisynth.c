#define AVSC_NO_DECLSPEC
#undef EXTERN_C
#define AVISYNTH_LIB "avisynth"
#define USING_AVISYNTH
#define AVISYNTH_NAME "libavxsynth"
#define AVISYNTH_LIB AVISYNTH_NAME SLIBSUF
#define LoadLibrary(x) dlopen(x, RTLD_NOW | RTLD_LOCAL)
#define GetProcAddress dlsym
#define FreeLibrary dlclose
typedef struct AviSynthLibrary  AviSynthLibrary;
typedef struct AviSynthContext  AviSynthContext;
static const int avs_planes_packed[1] = ;
static const int avs_planes_grey[1]   = ;
static const int avs_planes_yuv[3]    = ;
static const int avs_planes_rgb[3]    = ;
static const int avs_planes_yuva[4]   = ;
static const int avs_planes_rgba[4]   = ;
static AviSynthLibrary avs_library;
static int avs_atexit_called        = 0;
static AviSynthContext *avs_ctx_list = NULL;
static av_cold void avisynth_atexit_handler(void);
static av_cold int avisynth_load_library(void)
static av_cold int avisynth_context_create(AVFormatContext *s)
static av_cold void avisynth_context_destroy(AviSynthContext *avs)
static av_cold void avisynth_atexit_handler(void)
static int avisynth_create_stream_video(AVFormatContext *s, AVStream *st)
static int avisynth_create_stream_audio(AVFormatContext *s, AVStream *st)
static int avisynth_create_stream(AVFormatContext *s)
static int avisynth_open_file(AVFormatContext *s)
static void avisynth_next_stream(AVFormatContext *s, AVStream **st,
AVPacket *pkt, int *discard)
static int avisynth_read_packet_video(AVFormatContext *s, AVPacket *pkt,
int discard)
static int avisynth_read_packet_audio(AVFormatContext *s, AVPacket *pkt,
int discard)
static av_cold int avisynth_read_header(AVFormatContext *s)
static int avisynth_read_packet(AVFormatContext *s, AVPacket *pkt)
static av_cold int avisynth_read_close(AVFormatContext *s)
static int avisynth_read_seek(AVFormatContext *s, int stream_index,
int64_t timestamp, int flags)
AVInputFormat ff_avisynth_demuxer = ;
