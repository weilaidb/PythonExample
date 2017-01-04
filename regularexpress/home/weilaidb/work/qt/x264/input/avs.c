#if USE_AVXSYNTH
#if SYS_MACOSX
#define avs_open() dlopen( "libavxsynth.dylib", RTLD_NOW )
#define avs_open() dlopen( "libavxsynth.so", RTLD_NOW )
#define avs_close dlclose
#define avs_address dlsym
#define avs_open() LoadLibraryW( L"avisynth" )
#define avs_close FreeLibrary
#define avs_address GetProcAddress
#define FAIL_IF_ERROR( cond, ... ) FAIL_IF_ERR( cond, "avs", __VA_ARGS__ )
#define AVSC_NO_DECLSPEC
#undef EXTERN_C
#if USE_AVXSYNTH
#define AVSC_DECLARE_FUNC(name) name##_func name
#define AVS_INTERFACE_25 2
#if HAVE_SWSCALE
#define AVS_MAX_SEQUENCE 5
#define LOAD_AVS_FUNC(name, continue_on_fail)\
#define LOAD_AVS_FUNC_ALIAS(name, alias, continue_on_fail)\
typedef struct
avs_hnd_t;
static int x264_avs_load_library( avs_hnd_t *h )
#if USE_AVXSYNTH
#define avs_is_yv24( vi ) (0)
#define avs_is_yv16( vi ) (0)
#define avs_is_yv411( vi ) (0)
#define avs_is_y8( vi ) (0)
#define AVS_IS_AVISYNTHPLUS (0)
#define AVS_IS_420( vi ) (0)
#define AVS_IS_422( vi ) (0)
#define AVS_IS_444( vi ) (0)
#define AVS_IS_RGB48( vi ) (0)
#define AVS_IS_RGB64( vi ) (0)
#define AVS_IS_YUV420P16( vi ) (0)
#define AVS_IS_YUV422P16( vi ) (0)
#define AVS_IS_YUV444P16( vi ) (0)
#define AVS_IS_AVISYNTHPLUS (h->func.avs_is_420 && h->func.avs_is_422 && h->func.avs_is_444)
#define AVS_IS_420( vi ) (h->func.avs_is_420 ? h->func.avs_is_420( vi ) : avs_is_yv12( vi ))
#define AVS_IS_422( vi ) (h->func.avs_is_422 ? h->func.avs_is_422( vi ) : avs_is_yv16( vi ))
#define AVS_IS_444( vi ) (h->func.avs_is_444 ? h->func.avs_is_444( vi ) : avs_is_yv24( vi ))
#define AVS_IS_RGB48( vi ) (h->func.avs_is_rgb48 && h->func.avs_is_rgb48( vi ))
#define AVS_IS_RGB64( vi ) (h->func.avs_is_rgb64 && h->func.avs_is_rgb64( vi ))
#define AVS_IS_YUV420P16( vi ) (h->func.avs_is_yuv420p16 && h->func.avs_is_yuv420p16( vi ))
#define AVS_IS_YUV422P16( vi ) (h->func.avs_is_yuv422p16 && h->func.avs_is_yuv422p16( vi ))
#define AVS_IS_YUV444P16( vi ) (h->func.avs_is_yuv444p16 && h->func.avs_is_yuv444p16( vi ))
static void avs_build_filter_sequence( char *filename_ext, const char *filter[AVS_MAX_SEQUENCE+1] )
static AVS_Value update_clip( avs_hnd_t *h, const AVS_VideoInfo **vi, AVS_Value res, AVS_Value release )
static float get_avs_version( avs_hnd_t *h )
static int open_file( char *psz_filename, hnd_t *p_handle, video_info_t *info, cli_input_opt_t *opt )
static int picture_alloc( cli_pic_t *pic, hnd_t handle, int csp, int width, int height )
static int read_frame( cli_pic_t *pic, hnd_t handle, int i_frame )
static int release_frame( cli_pic_t *pic, hnd_t handle )
static void picture_clean( cli_pic_t *pic, hnd_t handle )
static int close_file( hnd_t handle )
const cli_input_t avs_input = ;
