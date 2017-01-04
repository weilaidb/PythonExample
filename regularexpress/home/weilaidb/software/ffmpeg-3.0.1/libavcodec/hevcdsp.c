static const int8_t transform[32][32] = ;
DECLARE_ALIGNED(16, const int8_t, ff_hevc_epel_filters[7][4]) = ;
DECLARE_ALIGNED(16, const int8_t, ff_hevc_qpel_filters[3][16]) = ;
#define BIT_DEPTH 8
#undef BIT_DEPTH
#define BIT_DEPTH 9
#undef BIT_DEPTH
#define BIT_DEPTH 10
#undef BIT_DEPTH
#define BIT_DEPTH 12
#undef BIT_DEPTH
void ff_hevc_dsp_init(HEVCDSPContext *hevcdsp, int bit_depth)
