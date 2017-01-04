#define AVCODEC_H264CHROMA_H
typedef void (*h264_chroma_mc_func)(uint8_t *dst, uint8_t *src, int srcStride, int h, int x, int y);
typedef struct H264ChromaContext  H264ChromaContext;
void ff_h264chroma_init(H264ChromaContext *c, int bit_depth);
void ff_h264chroma_init_aarch64(H264ChromaContext *c, int bit_depth);
void ff_h264chroma_init_arm(H264ChromaContext *c, int bit_depth);
void ff_h264chroma_init_ppc(H264ChromaContext *c, int bit_depth);
void ff_h264chroma_init_x86(H264ChromaContext *c, int bit_depth);
void ff_h264chroma_init_mips(H264ChromaContext *c, int bit_depth);
