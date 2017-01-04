#define FAIL_IF_ERROR( cond, ... ) FAIL_IF_ERR( cond, "raw", __VA_ARGS__ )
typedef struct
raw_hnd_t;
static int open_file( char *psz_filename, hnd_t *p_handle, video_info_t *info, cli_input_opt_t *opt )
static int read_frame_internal( cli_pic_t *pic, raw_hnd_t *h, int bit_depth_uc )
static int read_frame( cli_pic_t *pic, hnd_t handle, int i_frame )
static int release_frame( cli_pic_t *pic, hnd_t handle )
static int picture_alloc( cli_pic_t *pic, hnd_t handle, int csp, int width, int height )
static void picture_clean( cli_pic_t *pic, hnd_t handle )
static int close_file( hnd_t handle )
const cli_input_t raw_input = ;
