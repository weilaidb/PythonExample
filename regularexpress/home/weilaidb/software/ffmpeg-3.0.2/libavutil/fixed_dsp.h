#define AVUTIL_FIXED_DSP_H
typedef struct AVFixedDSPContext  AVFixedDSPContext;
AVFixedDSPContext * avpriv_alloc_fixed_dsp(int strict);
void ff_fixed_dsp_init_x86(AVFixedDSPContext *fdsp);
static av_always_inline int fixed_sqrt(int x, int bits)
