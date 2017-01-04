static cli_vid_filter_t *first_filter = NULL;
static void register_vid_filter( cli_vid_filter_t *new_filter )
#define REGISTER_VFILTER(name)\
void x264_register_vid_filters( void )
int x264_init_vid_filter( const char *name, hnd_t *handle, cli_vid_filter_t *filter,
video_info_t *info, x264_param_t *param, char *opt_string )
void x264_vid_filter_help( int longhelp )
