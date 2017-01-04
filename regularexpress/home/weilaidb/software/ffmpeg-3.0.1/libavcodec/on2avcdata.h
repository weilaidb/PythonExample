#define AVCODEC_ON2AVCDATA_H
#define ON2AVC_MAX_BANDS 112
#define ON2AVC_ESC_CB     15
typedef struct On2AVCMode  On2AVCMode;
extern const On2AVCMode ff_on2avc_modes_40[8];
extern const On2AVCMode ff_on2avc_modes_44[8];
#define ON2AVC_SCALE_DIFFS 121
extern const uint32_t ff_on2avc_scale_diff_codes[];
extern const uint8_t  ff_on2avc_scale_diff_bits[];
extern const uint32_t * const ff_on2avc_quad_cb_codes[];
extern const uint8_t  * const ff_on2avc_quad_cb_bits[];
extern const uint16_t * const ff_on2avc_quad_cb_syms[];
extern const int              ff_on2avc_quad_cb_elems[];
extern const uint16_t * const ff_on2avc_pair_cb_codes[];
extern const uint8_t  * const ff_on2avc_pair_cb_bits[];
extern const uint16_t * const ff_on2avc_pair_cb_syms[];
extern const int              ff_on2avc_pair_cb_elems[];
extern const float ff_on2avc_window_long_32000[1024];
extern const float ff_on2avc_window_long_24000[1024];
extern const float ff_on2avc_window_short[128];
extern const double ff_on2avc_tab_10_1[];
extern const double ff_on2avc_tab_10_2[];
extern const double ff_on2avc_tab_20_1[];
extern const double ff_on2avc_tab_20_2[];
extern const double ff_on2avc_tab_40_1[];
extern const double ff_on2avc_tab_40_2[];
extern const double ff_on2avc_tab_84_1[];
extern const double ff_on2avc_tab_84_2[];
extern const double ff_on2avc_tab_84_3[];
extern const double ff_on2avc_tab_84_4[];
extern const double* const ff_on2avc_tabs_4_10_1[4];
extern const double* const ff_on2avc_tabs_4_10_2[4];
extern const double* const ff_on2avc_tabs_9_20_1[9];
extern const double* const ff_on2avc_tabs_9_20_2[9];
extern const double* const ff_on2avc_tabs_19_40_1[19];
extern const double* const ff_on2avc_tabs_19_40_2[19];
extern const double* const ff_on2avc_tabs_20_84_1[20];
extern const double* const ff_on2avc_tabs_20_84_2[20];
extern const double* const ff_on2avc_tabs_20_84_3[20];
extern const double* const ff_on2avc_tabs_20_84_4[20];
extern const float ff_on2avc_ctab_1[2048];
extern const float ff_on2avc_ctab_2[2048];
extern const float ff_on2avc_ctab_3[2048];
extern const float ff_on2avc_ctab_4[2048];
