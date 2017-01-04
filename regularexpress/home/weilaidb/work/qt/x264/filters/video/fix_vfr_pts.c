typedef struct
fix_vfr_pts_hnd_t;
cli_vid_filter_t fix_vfr_pts_filter;
static int init( hnd_t *handle, cli_vid_filter_t *filter, video_info_t *info, x264_param_t *param, char *opt_string )
static int get_frame( hnd_t handle, cli_pic_t *output, int frame )
static int release_frame( hnd_t handle, cli_pic_t *pic, int frame )
static void free_filter( hnd_t handle )
cli_vid_filter_t fix_vfr_pts_filter = ;
