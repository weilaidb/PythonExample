#define AVCODEC_H264CHROMA_H
typedef void (*h264_chroma_mc_func)(uint8_t *dst, uint8_t *src, int srcStride, int h, int x, int y);
typedef struct H264ChromaContext  H264ChromaContext;
ff_h264chroma_init;
ff_h264chroma_init_aarch64;
ff_h264chroma_init_arm;
ff_h264chroma_init_ppc;
ff_h264chroma_init_x86;
ff_h264chroma_init_mips;
