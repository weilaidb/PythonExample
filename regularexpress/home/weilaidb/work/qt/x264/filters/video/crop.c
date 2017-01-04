#define NAME "crop"
#define FAIL_IF_ERROR( cond, ... ) FAIL_IF_ERR( cond, NAME, __VA_ARGS__ )
cli_vid_filter_t crop_filter;
typedef struct
crop_hnd_t;
static void help( int longhelp )
static int handle_opts( crop_hnd_t *h, video_info_t *info, char **opts, const char * const *optlist )
static int init( hnd_t *handle, cli_vid_filter_t *filter, video_info_t *info, x264_param_t *param, char *opt_string )
static int get_frame( hnd_t handle, cli_pic_t *output, int frame )
static int release_frame( hnd_t handle, cli_pic_t *pic, int frame )
static void free_filter( hnd_t handle )
cli_vid_filter_t crop_filter = ;
