#define H264_NALU_LENGTH_SIZE 4
#define MP4_LOG_ERROR( ... )                x264_cli_log( "mp4", X264_LOG_ERROR, __VA_ARGS__ )
#define MP4_LOG_WARNING( ... )              x264_cli_log( "mp4", X264_LOG_WARNING, __VA_ARGS__ )
#define MP4_LOG_INFO( ... )                 x264_cli_log( "mp4", X264_LOG_INFO, __VA_ARGS__ )
#define MP4_FAIL_IF_ERR( cond, ... )        FAIL_IF_ERR( cond, "mp4", __VA_ARGS__ )
#define MP4_LOG_IF_ERR( cond, ... )\
do\
while( 0 )
#define MP4_FAIL_IF_ERR_EX( cond, ... )\
do\
while( 0 )
typedef struct
mp4_hnd_t;
static void remove_mp4_hnd( hnd_t handle )
static int close_file( hnd_t handle, int64_t largest_pts, int64_t second_largest_pts )
static int open_file( char *psz_filename, hnd_t *p_handle, cli_output_opt_t *opt )
static int set_param( hnd_t handle, x264_param_t *p_param )
static int write_headers( hnd_t handle, x264_nal_t *p_nal )
static int write_frame( hnd_t handle, uint8_t *p_nalu, int i_size, x264_picture_t *p_picture )
const cli_output_t mp4_output = ;
