#define AVCODEC_HEVCDSP_H
#define MAX_PB_SIZE 64
typedef struct SAOParams  SAOParams;
typedef struct HEVCDSPContext  HEVCDSPContext;
ff_hevc_dsp_init;
extern const int8_t ff_hevc_epel_filters[7][4];
extern const int8_t ff_hevc_qpel_filters[3][16];
ff_hevc_dsp_init_x86;
ff_hevcdsp_init_arm;
ff_hevc_dsp_init_mips;
