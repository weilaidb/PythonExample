#define SWRESAMPLE_RESAMPLE_H
typedef struct ResampleContext  ResampleContext;
void swri_resample_dsp_init(ResampleContext *c);
void swri_resample_dsp_x86_init(ResampleContext *c);
void swri_resample_dsp_arm_init(ResampleContext *c);
