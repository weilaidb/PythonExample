#define H264_CHROMA_MC(OPNAME, OP)\
static void FUNCC(OPNAME ## h264_chroma_mc1)(uint8_t *_dst, uint8_t *_src, int stride, int h, int x, int y)\
static void FUNCC(OPNAME ## h264_chroma_mc2)(uint8_t *_dst, uint8_t *_src, int stride, int h, int x, int y)\
\
static void FUNCC(OPNAME ## h264_chroma_mc4)(uint8_t *_dst, uint8_t *_src, int stride, int h, int x, int y)\
\
static void FUNCC(OPNAME ## h264_chroma_mc8)(uint8_t *_dst, uint8_t *_src, int stride, int h, int x, int y)
#define op_avg(a, b) a = (((a)+(((b) + 32)>>6)+1)>>1)
#define op_put(a, b) a = (((b) + 32)>>6)
H264_CHROMA_MC(put_       , op_put)
H264_CHROMA_MC(avg_       , op_avg)
#undef op_avg
#undef op_put
