#define AVCODEC_JPEG2000DSP_H
typedef struct Jpeg2000DSPContext  Jpeg2000DSPContext;
void ff_jpeg2000dsp_init(Jpeg2000DSPContext *c);
void ff_jpeg2000dsp_init_x86(Jpeg2000DSPContext *c);
