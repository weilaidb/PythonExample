#define AVCODEC_MPEGVIDEOENCDSP_H
#define BASIS_SHIFT 16
#define RECON_SHIFT 6
#define EDGE_TOP    1
#define EDGE_BOTTOM 2
typedef struct MpegvideoEncDSPContext  MpegvideoEncDSPContext;
ff_mpegvideoencdsp_init;
ff_mpegvideoencdsp_init_arm;
ff_mpegvideoencdsp_init_ppc;
ff_mpegvideoencdsp_init_x86;
ff_mpegvideoencdsp_init_mips;
