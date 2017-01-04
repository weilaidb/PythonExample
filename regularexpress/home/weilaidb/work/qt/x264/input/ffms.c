#define FAIL_IF_ERROR( cond, ... ) FAIL_IF_ERR( cond, "ffms", __VA_ARGS__ )
#undef DECLARE_ALIGNED
#define PROGRESS_LENGTH 36
typedef struct
ffms_hnd_t;
static int FFMS_CC update_progress( int64_t current, int64_t total, void *private )
static int handle_jpeg( int csp, int *fullrange )
static int open_file( char *psz_filename, hnd_t *p_handle, video_info_t *info, cli_input_opt_t *opt )
static int picture_alloc( cli_pic_t *pic, hnd_t handle, int csp, int width, int height )
static int read_frame( cli_pic_t *pic, hnd_t handle, int i_frame )
static void picture_clean( cli_pic_t *pic, hnd_t handle )
static int close_file( hnd_t handle )
const cli_input_t ffms_input = ;
