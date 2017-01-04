#define AVCODEC_AUDIODSP_H
typedef struct AudioDSPContext  AudioDSPContext;
void ff_audiodsp_init(AudioDSPContext *c);
void ff_audiodsp_init_arm(AudioDSPContext *c);
void ff_audiodsp_init_ppc(AudioDSPContext *c);
void ff_audiodsp_init_x86(AudioDSPContext *c);
