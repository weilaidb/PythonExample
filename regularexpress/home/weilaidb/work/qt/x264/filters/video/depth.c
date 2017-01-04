#define NAME "depth"
#define FAIL_IF_ERROR( cond, ... ) FAIL_IF_ERR( cond, NAME, __VA_ARGS__ )
cli_vid_filter_t depth_filter;
typedef struct
depth_hnd_t;
static int depth_filter_csp_is_supported( int csp )
static int csp_num_interleaved( int csp, int plane )
#define DITHER_PLANE( pitch ) \
static void dither_plane_##pitch( pixel *dst, int dst_stride, uint16_t *src, int src_stride, \
int width, int height, int16_t *errors ) \
DITHER_PLANE( 1 )
DITHER_PLANE( 2 )
DITHER_PLANE( 3 )
DITHER_PLANE( 4 )
static void dither_image( cli_image_t *out, cli_image_t *img, int16_t *error_buf )
static void scale_image( cli_image_t *output, cli_image_t *img )
static int get_frame( hnd_t handle, cli_pic_t *output, int frame )
static int release_frame( hnd_t handle, cli_pic_t *pic, int frame )
static void free_filter( hnd_t handle )
static int init( hnd_t *handle, cli_vid_filter_t *filter, video_info_t *info,
x264_param_t *param, char *opt_string )
cli_vid_filter_t depth_filter = ;
