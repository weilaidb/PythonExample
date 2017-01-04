static struct isif_config_params_raw isif_config_defaults = ;
static struct isif_oper_config  isif_cfg = ;
static const u32 isif_raw_bayer_pix_formats[] = ;
static const u32 isif_raw_yuv_pix_formats[] = ;
static inline u32 regr(u32 offset)
static inline void regw(u32 val, u32 offset)
static inline u32 reg_modify(u32 mask, u32 val, u32 offset)
static inline void regw_lin_tbl(u32 val, u32 offset, int i)
static void isif_disable_all_modules(void)
static void isif_enable(int en)
static void isif_enable_output_to_sdram(int en)
static void isif_config_culling(struct isif_cul *cul)
static void isif_config_gain_offset(void)
static void isif_restore_defaults(void)
static int isif_open(struct device *device)
static void isif_setwin(struct v4l2_rect *image_win,
enum ccdc_frmfmt frm_fmt, int ppc)
static void isif_config_bclamp(struct isif_black_clamp *bc)
static void isif_config_linearization(struct isif_linearize *linearize)
static int isif_config_dfc(struct isif_dfc *vdfc)
static void isif_config_csc(struct isif_df_csc *df_csc)
static int isif_config_raw(void)
static int isif_set_buftype(enum ccdc_buftype buf_type)
static enum ccdc_buftype isif_get_buftype(void)
static int isif_enum_pix(u32 *pix, int i)
static int isif_set_pixel_format(unsigned int pixfmt)
static u32 isif_get_pixel_format(void)
static int isif_set_image_window(struct v4l2_rect *win)
static void isif_get_image_window(struct v4l2_rect *win)
static unsigned int isif_get_line_length(void)
static int isif_set_frame_format(enum ccdc_frmfmt frm_fmt)
static enum ccdc_frmfmt isif_get_frame_format(void)
static int isif_getfid(void)
static void isif_setfbaddr(unsigned long addr)
static int isif_set_hw_if_params(struct vpfe_hw_if_param *params)
static int isif_config_ycbcr(void)
static int isif_configure(void)
static int isif_close(struct device *device)
static struct ccdc_hw_device isif_hw_dev = ;
static int __init isif_probe(struct platform_device *pdev)
static int isif_remove(struct platform_device *pdev)
static struct platform_driver isif_driver = ;
static int __init isif_init(void)
static void isif_exit(void)
module_init(isif_init);
module_exit(isif_exit);
MODULE_LICENSE("GPL");
