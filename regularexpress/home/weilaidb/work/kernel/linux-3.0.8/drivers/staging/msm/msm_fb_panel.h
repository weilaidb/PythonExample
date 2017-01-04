#define MSM_FB_PANEL_H
struct msm_fb_data_type;
typedef void (*msm_fb_vsync_handler_type) (void *arg);
typedef struct panel_id_s  panel_id_type;
#define NO_PANEL       0xffff
#define MDDI_PANEL     1
#define EBI2_PANEL     2
#define LCDC_PANEL     3
#define EXT_MDDI_PANEL 4
#define TV_PANEL       5
#define HDMI_PANEL     6
typedef enum  DISP_TARGET;
typedef enum  DISP_TARGET_PHYS;
struct lcd_panel_info ;
struct lcdc_panel_info ;
struct mddi_panel_info ;
struct msm_panel_info ;
struct msm_fb_panel_data ;
struct platform_device *msm_fb_device_alloc(struct msm_fb_panel_data *pdata,
u32 type, u32 id);
int panel_next_on(struct platform_device *pdev);
int panel_next_off(struct platform_device *pdev);
int lcdc_device_register(struct msm_panel_info *pinfo);
int mddi_toshiba_device_register(struct msm_panel_info *pinfo,
u32 channel, u32 panel);
