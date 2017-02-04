H264_CHROMA_MC\
FUNCC(uint8_t *_dst, uint8_t *_src, int stride, int h, int x, int y)\
FUNCC(uint8_t *_dst, uint8_t *_src, int stride, int h, int x, int y)\
\
FUNCC(uint8_t *_dst, uint8_t *_src, int stride, int h, int x, int y)\
\
FUNCC(uint8_t *_dst, uint8_t *_src, int stride, int h, int x, int y)
op_avg a = (((a)+(((b) + 32)>>6)+1)>>1)
op_put a = (((b) + 32)>>6)
H264_CHROMA_MC(put_       , op_put)
H264_CHROMA_MC(avg_       , op_avg)
#undef op_avg
#undef op_put
