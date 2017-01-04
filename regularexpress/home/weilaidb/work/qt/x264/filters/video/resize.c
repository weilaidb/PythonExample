#define NAME "resize"
#define FAIL_IF_ERROR( cond, ... ) FAIL_IF_ERR( cond, NAME, __VA_ARGS__ )
cli_vid_filter_t resize_filter;
static int full_check( video_info_t *info, x264_param_t *param )
#if HAVE_SWSCALE
#undef DECLARE_ALIGNED
#define AV_PIX_FMT_BGRA64 AV_PIX_FMT_NONE
typedef struct
frame_prop_t;
typedef struct
resizer_hnd_t;
static void help( int longhelp )
static uint32_t convert_method_to_flag( const char *name )
static int convert_csp_to_pix_fmt( int csp )
static int pix_number_of_planes( const AVPixFmtDescriptor *pix_desc )
static int pick_closest_supported_csp( int csp )
static int handle_opts( const char * const *optlist, char **opts, video_info_t *info, resizer_hnd_t *h )
static int x264_init_sws_context( resizer_hnd_t *h )
static int check_resizer( resizer_hnd_t *h, cli_pic_t *in )
static int init( hnd_t *handle, cli_vid_filter_t *filter, video_info_t *info, x264_param_t *param, char *opt_string )
static int get_frame( hnd_t handle, cli_pic_t *output, int frame )
static int release_frame( hnd_t handle, cli_pic_t *pic, int frame )
static void free_filter( hnd_t handle )
static int init( hnd_t *handle, cli_vid_filter_t *filter, video_info_t *info, x264_param_t *param, char *opt_string )
#define help NULL
#define get_frame NULL
#define release_frame NULL
#define free_filter NULL
#define convert_csp_to_pix_fmt(x) (x & X264_CSP_MASK)
cli_vid_filter_t resize_filter = ;
