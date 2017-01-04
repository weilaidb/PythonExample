#define AVCODEC_DCADSP_H
typedef struct DCADSPContext  DCADSPContext;
av_cold void ff_dcadsp_init(DCADSPContext *s);
av_cold void ff_dcadsp_init_x86(DCADSPContext *s);
