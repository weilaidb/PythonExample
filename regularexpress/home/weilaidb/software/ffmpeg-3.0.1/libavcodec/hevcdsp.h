#define AVCODEC_HEVCDSP_H
#define MAX_PB_SIZE 64
typedef struct SAOParams  SAOParams;
typedef struct HEVCDSPContext  HEVCDSPContext;
void ff_hevc_dsp_init(HEVCDSPContext *hpc, int bit_depth);
extern const int8_t ff_hevc_epel_filters[7][4];
extern const int8_t ff_hevc_qpel_filters[3][16];
void ff_hevc_dsp_init_x86(HEVCDSPContext *c, const int bit_depth);
void ff_hevcdsp_init_arm(HEVCDSPContext *c, const int bit_depth);
void ff_hevc_dsp_init_mips(HEVCDSPContext *c, const int bit_depth);
