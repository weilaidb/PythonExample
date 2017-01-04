#define AVCODEC_SYNTH_FILTER_H
typedef struct SynthFilterContext  SynthFilterContext;
void ff_synth_filter_init(SynthFilterContext *c);
void ff_synth_filter_init_aarch64(SynthFilterContext *c);
void ff_synth_filter_init_arm(SynthFilterContext *c);
void ff_synth_filter_init_x86(SynthFilterContext *c);
