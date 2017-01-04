void ff_put_h264_chroma_mc8_neon(uint8_t *, uint8_t *, int, int, int, int);
void ff_put_h264_chroma_mc4_neon(uint8_t *, uint8_t *, int, int, int, int);
void ff_put_h264_chroma_mc2_neon(uint8_t *, uint8_t *, int, int, int, int);
void ff_avg_h264_chroma_mc8_neon(uint8_t *, uint8_t *, int, int, int, int);
void ff_avg_h264_chroma_mc4_neon(uint8_t *, uint8_t *, int, int, int, int);
void ff_avg_h264_chroma_mc2_neon(uint8_t *, uint8_t *, int, int, int, int);
av_cold void ff_h264chroma_init_arm(H264ChromaContext *c, int bit_depth)
