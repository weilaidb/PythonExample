#define NAME "cache"
#define LAST_FRAME (h->first_frame + h->cur_size - 1)
typedef struct
cache_hnd_t;
cli_vid_filter_t cache_filter;
static int init( hnd_t *handle, cli_vid_filter_t *filter, video_info_t *info, x264_param_t *param, char *opt_string )
static void fill_cache( cache_hnd_t *h, int frame )
static int get_frame( hnd_t handle, cli_pic_t *output, int frame )
static int release_frame( hnd_t handle, cli_pic_t *pic, int frame )
static void free_filter( hnd_t handle )
cli_vid_filter_t cache_filter = ;
