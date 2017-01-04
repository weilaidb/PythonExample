#define MSM_FB_H
#define MSM_FB_DEFAULT_PAGE_SIZE 2
#define MFD_KEY  0x11161126
#define MSM_FB_MAX_DEV_LIST 32
struct disp_info_type_suspend ;
struct msm_fb_data_type ;
struct dentry *msm_fb_get_debugfs_root(void);
void msm_fb_debugfs_file_create(struct dentry *root, const char *name,
u32 *var);
void msm_fb_set_backlight(struct msm_fb_data_type *mfd, __u32 bkl_lvl,
u32 save);
void msm_fb_add_device(struct platform_device *pdev);
int msm_fb_detect_client(const char *name);
void msm_fb_config_backlight(struct msm_fb_data_type *mfd);
