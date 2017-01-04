#define X264_FILTER_VIDEO_H
typedef struct cli_vid_filter_t cli_vid_filter_t;
struct cli_vid_filter_t
;
void x264_register_vid_filters( void );
void x264_vid_filter_help( int longhelp );
int  x264_init_vid_filter( const char *name, hnd_t *handle, cli_vid_filter_t *filter,
video_info_t *info, x264_param_t *param, char *opt_string );
