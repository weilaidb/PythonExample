#define __DVI_H__
#define     VT1632_DEVICE_ID_REG        0x02
#define     VT1632_DEVICE_ID            0x92
#define     GET_DVI_SIZE_BY_SYSTEM_BIOS     0x01
#define     GET_DVI_SIZE_BY_VGA_BIOS        0x02
#define     GET_DVI_SZIE_BY_HW_STRAPPING    0x03
#define     DVI_PANEL_ID0_640X480       0x00
#define     DVI_PANEL_ID1_800x600       0x01
#define     DVI_PANEL_ID1_1024x768      0x02
#define     DVI_PANEL_ID1_1280x768      0x03
#define     DVI_PANEL_ID1_1280x1024     0x04
#define     DVI_PANEL_ID1_1400x1050     0x05
#define     DVI_PANEL_ID1_1600x1200     0x06
#define     EDID_VERSION_1      1
#define     EDID_VERSION_2      2
#define     DEV_CONNECT_DVI     0x01
#define     DEV_CONNECT_HDMI    0x02
int viafb_dvi_sense(void);
void viafb_dvi_disable(void);
void viafb_dvi_enable(void);
bool __devinit viafb_tmds_trasmitter_identify(void);
void __devinit viafb_init_dvi_size(struct tmds_chip_information *tmds_chip,
struct tmds_setting_information *tmds_setting);
void viafb_dvi_set_mode(struct VideoModeTable *videoMode, int mode_bpp,
int set_iga);
