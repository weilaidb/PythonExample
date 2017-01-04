MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("CCDC Driver for DM355");
MODULE_AUTHOR("Texas Instruments");
static struct ccdc_oper_config  ccdc_cfg = ;
static u32 ccdc_raw_bayer_pix_formats[] =
;
static u32 ccdc_raw_yuv_pix_formats[] =
;
static inline u32 regr(u32 offset)
static inline void regw(u32 val, u32 offset)
static void ccdc_enable(int en)
static void ccdc_enable_output_to_sdram(int en)
static void ccdc_config_gain_offset(void)
static int ccdc_restore_defaults(void)
static int ccdc_open(struct device *device)
static int ccdc_close(struct device *device)
static void ccdc_setwin(struct v4l2_rect *image_win,
enum ccdc_frmfmt frm_fmt, int ppc)
static int validate_ccdc_param(struct ccdc_config_params_raw *ccdcparam)
static int ccdc_set_params(void __user *params)
static void ccdc_config_ycbcr(void)
static void ccdc_config_black_clamp(struct ccdc_black_clamp *bclamp)
static void ccdc_config_black_compense(struct ccdc_black_compensation *bcomp)
int ccdc_write_dfc_entry(int index, struct ccdc_vertical_dft *dfc)
static int ccdc_config_vdfc(struct ccdc_vertical_dft *dfc)
static void ccdc_config_csc(struct ccdc_csc *csc)
static void ccdc_config_color_patterns(struct ccdc_col_pat *pat0,
struct ccdc_col_pat *pat1)
static int ccdc_config_raw(void)
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
static struct ccdc_hw_device ccdc_hw_dev = ;
static int __init dm355_ccdc_probe(struct platform_device *pdev)
static int dm355_ccdc_remove(struct platform_device *pdev)
static struct platform_driver dm355_ccdc_driver = ;
static int __init dm355_ccdc_init(void)
static void __exit dm355_ccdc_exit(void)
module_init(dm355_ccdc_init);
module_exit(dm355_ccdc_exit);
