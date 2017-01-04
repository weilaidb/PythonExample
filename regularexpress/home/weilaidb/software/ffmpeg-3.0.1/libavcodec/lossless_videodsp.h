#define AVCODEC_LOSSLESS_VIDEODSP_H
typedef struct LLVidDSPContext  LLVidDSPContext;
void ff_llviddsp_init(LLVidDSPContext *llviddsp, AVCodecContext *avctx);
void ff_llviddsp_init_x86(LLVidDSPContext *llviddsp, AVCodecContext *avctx);
