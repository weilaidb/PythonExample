#define CHECK(x)\
do  while( 0 )
typedef struct
flv_hnd_t;
static int write_header( flv_buffer *c )
static int open_file( char *psz_filename, hnd_t *p_handle, cli_output_opt_t *opt )
static int set_param( hnd_t handle, x264_param_t *p_param )
static int write_headers( hnd_t handle, x264_nal_t *p_nal )
static int write_frame( hnd_t handle, uint8_t *p_nalu, int i_size, x264_picture_t *p_picture )
static int rewrite_amf_double( FILE *fp, uint64_t position, double value )
#undef CHECK
#define CHECK(x)\
do  while( 0 )
static int close_file( hnd_t handle, int64_t largest_pts, int64_t second_largest_pts )
const cli_output_t flv_output = ;