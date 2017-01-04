#define FAIL_IF_ERROR( cond, ... ) FAIL_IF_ERR( cond, "x264", __VA_ARGS__ )
void x264_cli_plane_copy( uint8_t *dst, int i_dst, uint8_t *src, int i_src, int w, int h )
int x264_cli_pic_copy( cli_pic_t *out, cli_pic_t *in )
