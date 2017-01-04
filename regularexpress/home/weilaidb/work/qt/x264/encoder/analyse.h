#define X264_ANALYSE_H
int x264_analyse_init_costs( x264_t *h );
void x264_analyse_free_costs( x264_t *h );
void x264_analyse_weight_frame( x264_t *h, int end );
void x264_macroblock_analyse( x264_t *h );
void x264_slicetype_decide( x264_t *h );
void x264_slicetype_analyse( x264_t *h, int intra_minigop );
int  x264_lookahead_init( x264_t *h, int i_slicetype_length );
int  x264_lookahead_is_empty( x264_t *h );
void x264_lookahead_put_frame( x264_t *h, x264_frame_t *frame );
void x264_lookahead_get_frames( x264_t *h );
void x264_lookahead_delete( x264_t *h );
