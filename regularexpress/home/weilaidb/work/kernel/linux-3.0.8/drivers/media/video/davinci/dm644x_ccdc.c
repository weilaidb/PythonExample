MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("CCDC Driver for DM6446");
MODULE_AUTHOR("Texas Instruments");
static struct ccdc_oper_config  ccdc_cfg = ;
#define CCDC_MAX_RAW_YUV_FORMATS	2
static u32 ccdc_raw_bayer_pix_formats[] =
;
static u32 ccdc_raw_yuv_pix_formats[] =
;
static u32 ccdc_ctx[CCDC_REG_END / sizeof(u32)];
static inline u32 regr(u32 offset)
static inline void regw(u32 val, u32 offset)
static void ccdc_enable(int flag)
static void ccdc_enable_vport(int flag)
void ccdc_setwin(struct v4l2_rect *image_win,
enum ccdc_frmfmt frm_fmt,
int ppc)
static void ccdc_readregs(void)
static int validate_ccdc_param(struct ccdc_config_params_raw *ccdcparam)
static int ccdc_update_raw_params(struct ccdc_config_params_raw *raw_params)
static int ccdc_close(struct device *dev)
static void ccdc_restore_defaults(void)
static int ccdc_open(struct device *device)
static void ccdc_sbl_reset(void)
static int ccdc_set_params(void __user *params)
void ccdc_config_ycbcr(void)
static void ccdc_config_black_clamp(struct ccdc_black_clamp *bclamp)
static void ccdc_config_black_compense(struct ccdc_black_compensation *bcomp)
static void ccdc_config_fpc(struct ccdc_fault_pixel *fpc)
void ccdc_config_raw(void)
static int ccdc_configure(void)
static int ccdc_set_buftype(enum ccdc_buftype buf_type)
static enum ccdc_buftype ccdc_get_buftype(void)
static int ccdc_enum_pix(u32 *pix, int i)
static int ccdc_set_pixel_format(u32 pixfmt)
static u32 ccdc_get_pixel_format(void)
static int ccdc_set_image_window(struct v4l2_rect *win)
static void ccdc_get_image_window(struct v4l2_rect *win)
static unsigned int ccdc_get_line_length(void)
static int ccdc_set_frame_format(enum ccdc_frmfmt frm_fmt)
static enum ccdc_frmfmt ccdc_get_frame_format(void)
static int ccdc_getfid(void)
static inline void ccdc_setfbaddr(unsigned long addr)
static int ccdc_set_hw_if_params(struct vpfe_hw_if_param *params)
static void ccdc_save_context(void)
static void ccdc_restore_context(void)
static struct ccdc_hw_device ccdc_hw_dev = ;
static int __init dm644x_ccdc_probe(struct platform_device *pdev)
static int dm644x_ccdc_remove(struct platform_device *pdev)
static int dm644x_ccdc_suspend(struct device *dev)
static int dm644x_ccdc_resume(struct device *dev)
static const struct dev_pm_ops dm644x_ccdc_pm_ops = ;
static struct platform_driver dm644x_ccdc_driver = ;
static int __init dm644x_ccdc_init(void)
static void __exit dm644x_ccdc_exit(void)
module_init(dm644x_ccdc_init);
module_exit(dm644x_ccdc_exit);
