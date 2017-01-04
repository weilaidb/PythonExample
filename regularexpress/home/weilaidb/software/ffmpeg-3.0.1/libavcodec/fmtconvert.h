#define AVCODEC_FMTCONVERT_H
typedef struct FmtConvertContext  FmtConvertContext;
void ff_fmt_convert_init(FmtConvertContext *c, AVCodecContext *avctx);
void ff_fmt_convert_init_aarch64(FmtConvertContext *c, AVCodecContext *avctx);
void ff_fmt_convert_init_arm(FmtConvertContext *c, AVCodecContext *avctx);
void ff_fmt_convert_init_ppc(FmtConvertContext *c, AVCodecContext *avctx);
void ff_fmt_convert_init_x86(FmtConvertContext *c, AVCodecContext *avctx);
void ff_fmt_convert_init_mips(FmtConvertContext *c);
