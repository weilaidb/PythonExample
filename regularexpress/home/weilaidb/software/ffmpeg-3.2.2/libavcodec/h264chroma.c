#define BIT_DEPTH 8
#undef BIT_DEPTH
#define BIT_DEPTH 16
#undef BIT_DEPTH
SET_CHROMA                                                   \
c->put_h264_chroma_pixels_tab[0] = put_h264_chroma_mc8_ ## depth ## _c; \
c->put_h264_chroma_pixels_tab[1] = put_h264_chroma_mc4_ ## depth ## _c; \
c->put_h264_chroma_pixels_tab[2] = put_h264_chroma_mc2_ ## depth ## _c; \
c->put_h264_chroma_pixels_tab[3] = put_h264_chroma_mc1_ ## depth ## _c; \
c->avg_h264_chroma_pixels_tab[0] = avg_h264_chroma_mc8_ ## depth ## _c; \
c->avg_h264_chroma_pixels_tab[1] = avg_h264_chroma_mc4_ ## depth ## _c; \
c->avg_h264_chroma_pixels_tab[2] = avg_h264_chroma_mc2_ ## depth ## _c; \
c->avg_h264_chroma_pixels_tab[3] = avg_h264_chroma_mc1_ ## depth ## _c; \
ff_h264chroma_init
