#define AVCODEC_MPEGVIDEOENCDSP_H
#define BASIS_SHIFT 16
#define RECON_SHIFT 6
#define EDGE_TOP    1
#define EDGE_BOTTOM 2
typedef struct MpegvideoEncDSPContext  MpegvideoEncDSPContext;
void ff_mpegvideoencdsp_init(MpegvideoEncDSPContext *c,
AVCodecContext *avctx);
void ff_mpegvideoencdsp_init_arm(MpegvideoEncDSPContext *c,
AVCodecContext *avctx);
void ff_mpegvideoencdsp_init_ppc(MpegvideoEncDSPContext *c,
AVCodecContext *avctx);
void ff_mpegvideoencdsp_init_x86(MpegvideoEncDSPContext *c,
AVCodecContext *avctx);
void ff_mpegvideoencdsp_init_mips(MpegvideoEncDSPContext *c,
AVCodecContext *avctx);
