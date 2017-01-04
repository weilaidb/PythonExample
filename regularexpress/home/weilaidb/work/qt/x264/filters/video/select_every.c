#define NAME "select_every"
#define FAIL_IF_ERROR( cond, ... ) FAIL_IF_ERR( cond, NAME, __VA_ARGS__ )
#define MAX_PATTERN_SIZE 100
typedef struct
selvry_hnd_t;
cli_vid_filter_t select_every_filter;
static void help( int longhelp )
static int init( hnd_t *handle, cli_vid_filter_t *filter, video_info_t *info, x264_param_t *param, char *opt_string )
static int get_frame( hnd_t handle, cli_pic_t *output, int frame )
static int release_frame( hnd_t handle, cli_pic_t *pic, int frame )
static void free_filter( hnd_t handle )
cli_vid_filter_t select_every_filter = ;
