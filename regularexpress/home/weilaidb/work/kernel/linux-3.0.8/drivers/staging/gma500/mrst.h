struct mrst_vbt  __attribute__ ((packed));
struct mrst_timing_info  __attribute__((packed));
struct gct_r10_timing_info  __attribute__((packed));
struct mrst_panel_descriptor_v1  __attribute__ ((packed));
struct mrst_panel_descriptor_v2  __attribute__ ((packed));
union mrst_panel_rx  __attribute__ ((packed));
struct mrst_gct_v1  __attribute__ ((packed));
struct mrst_gct_v2  __attribute__ ((packed));
struct mrst_gct_data  __attribute__ ((packed));
#define MODE_SETTING_IN_CRTC 	0x1
#define MODE_SETTING_IN_ENCODER 0x2
#define MODE_SETTING_ON_GOING 	0x3
#define MODE_SETTING_IN_DSR 	0x4
#define MODE_SETTING_ENCODER_DONE 0x8
#define GCT_R10_HEADER_SIZE	16
#define GCT_R10_DISPLAY_DESC_SIZE	28
