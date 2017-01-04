typedef struct
thread_hnd_t;
typedef struct thread_input_arg_t
thread_input_arg_t;
static int open_file( char *psz_filename, hnd_t *p_handle, video_info_t *info, cli_input_opt_t *opt )
static void read_frame_thread_int( thread_input_arg_t *i )
static int read_frame( cli_pic_t *p_pic, hnd_t handle, int i_frame )
static int release_frame( cli_pic_t *pic, hnd_t handle )
static int picture_alloc( cli_pic_t *pic, hnd_t handle, int csp, int width, int height )
static void picture_clean( cli_pic_t *pic, hnd_t handle )
static int close_file( hnd_t handle )
const cli_input_t thread_input = ;
