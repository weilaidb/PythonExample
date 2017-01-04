#define X264_FILTER_VIDEO_INTERNAL_H
void x264_cli_plane_copy( uint8_t *dst, int i_dst, uint8_t *src, int i_src, int w, int h );
int  x264_cli_pic_copy( cli_pic_t *out, cli_pic_t *in );
