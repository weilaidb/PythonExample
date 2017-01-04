#define AVCODEC_H263DSP_H
extern const uint8_t ff_h263_loop_filter_strength[32];
typedef struct H263DSPContext  H263DSPContext;
void ff_h263dsp_init(H263DSPContext *ctx);
void ff_h263dsp_init_x86(H263DSPContext *ctx);
void ff_h263dsp_init_mips(H263DSPContext *ctx);
