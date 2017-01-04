#define AVCODEC_FLACDSP_H
typedef struct FLACDSPContext  FLACDSPContext;
void ff_flacdsp_init(FLACDSPContext *c, enum AVSampleFormat fmt, int channels, int bps);
void ff_flacdsp_init_arm(FLACDSPContext *c, enum AVSampleFormat fmt, int channels, int bps);
void ff_flacdsp_init_x86(FLACDSPContext *c, enum AVSampleFormat fmt, int channels, int bps);
