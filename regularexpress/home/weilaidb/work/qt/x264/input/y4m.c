#define FAIL_IF_ERROR( cond, ... ) FAIL_IF_ERR( cond, "y4m", __VA_ARGS__ )
typedef struct
y4m_hnd_t;
#define Y4M_MAGIC "YUV4MPEG2"
#define MAX_YUV4_HEADER 80
#define Y4M_FRAME_MAGIC "FRAME"
#define MAX_FRAME_HEADER 80
static int parse_csp_and_depth( char *csp_name, int *bit_depth )
static int open_file( char *psz_filename, hnd_t *p_handle, video_info_t *info, cli_input_opt_t *opt )
static int read_frame_internal( cli_pic_t *pic, y4m_hnd_t *h, int bit_depth_uc )
static int read_frame( cli_pic_t *pic, hnd_t handle, int i_frame )
static int release_frame( cli_pic_t *pic, hnd_t handle )
static int picture_alloc( cli_pic_t *pic, hnd_t handle, int csp, int width, int height )
static void picture_clean( cli_pic_t *pic, hnd_t handle )
static int close_file( hnd_t handle )
const cli_input_t y4m_input = ;
