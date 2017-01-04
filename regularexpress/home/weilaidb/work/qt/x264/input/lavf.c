#define FAIL_IF_ERROR( cond, ... ) FAIL_IF_ERR( cond, "lavf", __VA_ARGS__ )
#undef DECLARE_ALIGNED
typedef struct
lavf_hnd_t;
static int handle_jpeg( int csp, int *fullrange )
static int read_frame_internal( cli_pic_t *p_pic, lavf_hnd_t *h, int i_frame, video_info_t *info )
static int open_file( char *psz_filename, hnd_t *p_handle, video_info_t *info, cli_input_opt_t *opt )
static int picture_alloc( cli_pic_t *pic, hnd_t handle, int csp, int width, int height )
static int read_frame( cli_pic_t *pic, hnd_t handle, int i_frame )
static void picture_clean( cli_pic_t *pic, hnd_t handle )
static int close_file( hnd_t handle )
const cli_input_t lavf_input = ;
