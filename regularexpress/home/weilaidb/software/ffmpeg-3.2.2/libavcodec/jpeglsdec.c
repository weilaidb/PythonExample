int ff_jpegls_decode_lse(MJpegDecodeContext *s)
static inline int ls_get_code_regular(GetBitContext *gb, JLSState *state, int Q)
static inline int ls_get_code_runterm(GetBitContext *gb, JLSState *state,
int RItype, int limit_add)
static inline void ls_decode_line(JLSState *state, MJpegDecodeContext *s,
void *last, void *dst, int last2, int w,
int stride, int comp, int bits)
int ff_jpegls_decode_picture(MJpegDecodeContext *s, int near,
int point_transform, int ilv)
AVCodec ff_jpegls_decoder = ;
