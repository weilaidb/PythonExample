uint8_t ff_mpeg4_static_rl_table_store[3][2][2 * MAX_RUN + MAX_LEVEL + 3];
int ff_mpeg4_get_video_packet_prefix_length(MpegEncContext *s)
void ff_mpeg4_clean_buffers(MpegEncContext *s)
#define tab_size ((signed)FF_ARRAY_ELEMS(s->direct_scale_mv[0]))
#define tab_bias (tab_size / 2)
void ff_mpeg4_init_direct_mv(MpegEncContext *s)
static inline void ff_mpeg4_set_one_direct_mv(MpegEncContext *s, int mx,
int my, int i)
#undef tab_size
#undef tab_bias
int ff_mpeg4_set_direct_mv(MpegEncContext *s, int mx, int my)
