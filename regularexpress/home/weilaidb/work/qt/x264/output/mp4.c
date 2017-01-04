typedef struct
mp4_hnd_t;
static void recompute_bitrate_mp4( GF_ISOFile *p_file, int i_track )
static int close_file( hnd_t handle, int64_t largest_pts, int64_t second_largest_pts )
static int open_file( char *psz_filename, hnd_t *p_handle, cli_output_opt_t *opt )
static int set_param( hnd_t handle, x264_param_t *p_param )
static int check_buffer( mp4_hnd_t *p_mp4, int needed_size )
static int write_headers( hnd_t handle, x264_nal_t *p_nal )
static int write_frame( hnd_t handle, uint8_t *p_nalu, int i_size, x264_picture_t *p_picture )
const cli_output_t mp4_output = ;
