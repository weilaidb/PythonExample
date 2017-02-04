#define AVSC_NO_DECLSPEC
#undef EXTERN_C
#define AVISYNTH_LIB
#define USING_AVISYNTH
#define AVISYNTH_NAME
#define AVISYNTH_LIB AVISYNTH_NAME SLIBSUF
LoadLibrary dlopen(x, RTLD_NOW | RTLD_LOCAL)
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
avisynth_atexit_handler;
avisynth_load_library
avisynth_context_create
avisynth_context_destroy
avisynth_atexit_handler
avisynth_create_stream_video
avisynth_create_stream_audio
avisynth_create_stream
avisynth_open_file
avisynth_next_stream
avisynth_read_packet_video
avisynth_read_packet_audio
avisynth_read_header
avisynth_read_packet
avisynth_read_close
avisynth_read_seek
AVInputFormat ff_avisynth_demuxer = ;
