#define AVCODEC_VC2ENC_DWT_H
typedef int16_t dwtcoef;
typedef int32_t qcoef;
enum VC2TransformType ;
typedef struct VC2TransformContext  VC2TransformContext;
int  ff_vc2enc_init_transforms(VC2TransformContext *t, int p_width, int p_height);
void ff_vc2enc_free_transforms(VC2TransformContext *t);
