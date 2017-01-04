typedef struct
mkv_hnd_t;
static int open_file( char *psz_filename, hnd_t *p_handle, cli_output_opt_t *opt )
#define STEREO_COUNT 7
static const uint8_t stereo_modes[STEREO_COUNT] = ;
static const uint8_t stereo_w_div[STEREO_COUNT] = ;
static const uint8_t stereo_h_div[STEREO_COUNT] = ;
static int set_param( hnd_t handle, x264_param_t *p_param )
static int write_headers( hnd_t handle, x264_nal_t *p_nal )
static int write_frame( hnd_t handle, uint8_t *p_nalu, int i_size, x264_picture_t *p_picture )
static int close_file( hnd_t handle, int64_t largest_pts, int64_t second_largest_pts )
const cli_output_t mkv_output = ;
