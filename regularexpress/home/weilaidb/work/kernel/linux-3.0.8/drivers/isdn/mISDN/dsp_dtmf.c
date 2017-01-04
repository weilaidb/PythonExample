#define NCOEFF            8
static u64 cos2pik[NCOEFF] =
;
static char dtmf_matrix[4][4] =
;
void dsp_dtmf_goertzel_init(struct dsp *dsp)
void dsp_dtmf_hardware(struct dsp *dsp)
u8
*dsp_dtmf_goertzel_decode(struct dsp *dsp, u8 *data, int len, int fmt)
