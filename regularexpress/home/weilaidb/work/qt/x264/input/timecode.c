#define FAIL_IF_ERROR( cond, ... ) FAIL_IF_ERR( cond, "timecode", __VA_ARGS__ )
typedef struct
timecode_hnd_t;
static inline double sigexp10( double value, double *exponent )
#define DOUBLE_EPSILON 5e-6
#define MKV_TIMEBASE_DEN 1000000000
static double correct_fps( double fps, timecode_hnd_t *h )
static int try_mkv_timebase_den( double *fpss, timecode_hnd_t *h, int loop_num )
static int parse_tcfile( FILE *tcfile_in, timecode_hnd_t *h, video_info_t *info )
#undef DOUBLE_EPSILON
#undef MKV_TIMEBASE_DEN
static int open_file( char *psz_filename, hnd_t *p_handle, video_info_t *info, cli_input_opt_t *opt )
static int64_t get_frame_pts( timecode_hnd_t *h, int frame, int real_frame )
static int read_frame( cli_pic_t *pic, hnd_t handle, int frame )
static int release_frame( cli_pic_t *pic, hnd_t handle )
static int picture_alloc( cli_pic_t *pic, hnd_t handle, int csp, int width, int height )
static void picture_clean( cli_pic_t *pic, hnd_t handle )
static int close_file( hnd_t handle )
const cli_input_t timecode_input = ;
