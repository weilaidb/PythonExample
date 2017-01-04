static struct v4l2_mbus_framefmt *
__ccdc_get_format(struct isp_ccdc_device *ccdc, struct v4l2_subdev_fh *fh,
unsigned int pad, enum v4l2_subdev_format_whence which);
static const unsigned int ccdc_fmts[] = ;
#define CCDC_PRINT_REGISTER(isp, name)\
dev_dbg(isp->dev, "###CCDC " #name "=0x%08x\n", \
isp_reg_readl(isp, OMAP3_ISP_IOMEM_CCDC, ISPCCDC_##name))
static void ccdc_print_status(struct isp_ccdc_device *ccdc)
int omap3isp_ccdc_busy(struct isp_ccdc_device *ccdc)
static int ccdc_lsc_validate_config(struct isp_ccdc_device *ccdc,
struct omap3isp_ccdc_lsc_config *lsc_cfg)
static void ccdc_lsc_program_table(struct isp_ccdc_device *ccdc, u32 addr)
static void ccdc_lsc_setup_regs(struct isp_ccdc_device *ccdc,
struct omap3isp_ccdc_lsc_config *cfg)
static int ccdc_lsc_wait_prefetch(struct isp_ccdc_device *ccdc)
static int __ccdc_lsc_enable(struct isp_ccdc_device *ccdc, int enable)
static int ccdc_lsc_busy(struct isp_ccdc_device *ccdc)
static int __ccdc_lsc_configure(struct isp_ccdc_device *ccdc,
struct ispccdc_lsc_config_req *req)
static void ccdc_lsc_error_handler(struct isp_ccdc_device *ccdc)
static void ccdc_lsc_free_request(struct isp_ccdc_device *ccdc,
struct ispccdc_lsc_config_req *req)
static void ccdc_lsc_free_queue(struct isp_ccdc_device *ccdc,
struct list_head *queue)
static void ccdc_lsc_free_table_work(struct work_struct *work)
static int ccdc_lsc_config(struct isp_ccdc_device *ccdc,
struct omap3isp_ccdc_update_config *config)
static inline int ccdc_lsc_is_configured(struct isp_ccdc_device *ccdc)
static int ccdc_lsc_enable(struct isp_ccdc_device *ccdc)
static void ccdc_configure_clamp(struct isp_ccdc_device *ccdc)
static void ccdc_configure_fpc(struct isp_ccdc_device *ccdc)
static void ccdc_configure_black_comp(struct isp_ccdc_device *ccdc)
static void ccdc_configure_lpf(struct isp_ccdc_device *ccdc)
static void ccdc_configure_alaw(struct isp_ccdc_device *ccdc)
static void ccdc_config_imgattr(struct isp_ccdc_device *ccdc, u32 colptn)
static int ccdc_config(struct isp_ccdc_device *ccdc,
struct omap3isp_ccdc_update_config *ccdc_struct)
static void ccdc_apply_controls(struct isp_ccdc_device *ccdc)
void omap3isp_ccdc_restore_context(struct isp_device *isp)
static void ccdc_config_vp(struct isp_ccdc_device *ccdc)
static void ccdc_enable_vp(struct isp_ccdc_device *ccdc, u8 enable)
static void ccdc_config_outlineoffset(struct isp_ccdc_device *ccdc,
u32 offset, u8 oddeven, u8 numlines)
static void ccdc_set_outaddr(struct isp_ccdc_device *ccdc, u32 addr)
void omap3isp_ccdc_max_rate(struct isp_ccdc_device *ccdc,
unsigned int *max_rate)
static void ccdc_config_sync_if(struct isp_ccdc_device *ccdc,
struct ispccdc_syncif *syncif)
static const u32 ccdc_sgrbg_pattern =
ISPCCDC_COLPTN_Gr_Cy << ISPCCDC_COLPTN_CP0PLC0_SHIFT |
ISPCCDC_COLPTN_R_Ye  << ISPCCDC_COLPTN_CP0PLC1_SHIFT |
ISPCCDC_COLPTN_Gr_Cy << ISPCCDC_COLPTN_CP0PLC2_SHIFT |
ISPCCDC_COLPTN_R_Ye  << ISPCCDC_COLPTN_CP0PLC3_SHIFT |
ISPCCDC_COLPTN_B_Mg  << ISPCCDC_COLPTN_CP1PLC0_SHIFT |
ISPCCDC_COLPTN_Gb_G  << ISPCCDC_COLPTN_CP1PLC1_SHIFT |
ISPCCDC_COLPTN_B_Mg  << ISPCCDC_COLPTN_CP1PLC2_SHIFT |
ISPCCDC_COLPTN_Gb_G  << ISPCCDC_COLPTN_CP1PLC3_SHIFT |
ISPCCDC_COLPTN_Gr_Cy << ISPCCDC_COLPTN_CP2PLC0_SHIFT |
ISPCCDC_COLPTN_R_Ye  << ISPCCDC_COLPTN_CP2PLC1_SHIFT |
ISPCCDC_COLPTN_Gr_Cy << ISPCCDC_COLPTN_CP2PLC2_SHIFT |
ISPCCDC_COLPTN_R_Ye  << ISPCCDC_COLPTN_CP2PLC3_SHIFT |
ISPCCDC_COLPTN_B_Mg  << ISPCCDC_COLPTN_CP3PLC0_SHIFT |
ISPCCDC_COLPTN_Gb_G  << ISPCCDC_COLPTN_CP3PLC1_SHIFT |
ISPCCDC_COLPTN_B_Mg  << ISPCCDC_COLPTN_CP3PLC2_SHIFT |
ISPCCDC_COLPTN_Gb_G  << ISPCCDC_COLPTN_CP3PLC3_SHIFT;
static const u32 ccdc_srggb_pattern =
ISPCCDC_COLPTN_R_Ye  << ISPCCDC_COLPTN_CP0PLC0_SHIFT |
ISPCCDC_COLPTN_Gr_Cy << ISPCCDC_COLPTN_CP0PLC1_SHIFT |
ISPCCDC_COLPTN_R_Ye  << ISPCCDC_COLPTN_CP0PLC2_SHIFT |
ISPCCDC_COLPTN_Gr_Cy << ISPCCDC_COLPTN_CP0PLC3_SHIFT |
ISPCCDC_COLPTN_Gb_G  << ISPCCDC_COLPTN_CP1PLC0_SHIFT |
ISPCCDC_COLPTN_B_Mg  << ISPCCDC_COLPTN_CP1PLC1_SHIFT |
ISPCCDC_COLPTN_Gb_G  << ISPCCDC_COLPTN_CP1PLC2_SHIFT |
ISPCCDC_COLPTN_B_Mg  << ISPCCDC_COLPTN_CP1PLC3_SHIFT |
ISPCCDC_COLPTN_R_Ye  << ISPCCDC_COLPTN_CP2PLC0_SHIFT |
ISPCCDC_COLPTN_Gr_Cy << ISPCCDC_COLPTN_CP2PLC1_SHIFT |
ISPCCDC_COLPTN_R_Ye  << ISPCCDC_COLPTN_CP2PLC2_SHIFT |
ISPCCDC_COLPTN_Gr_Cy << ISPCCDC_COLPTN_CP2PLC3_SHIFT |
ISPCCDC_COLPTN_Gb_G  << ISPCCDC_COLPTN_CP3PLC0_SHIFT |
ISPCCDC_COLPTN_B_Mg  << ISPCCDC_COLPTN_CP3PLC1_SHIFT |
ISPCCDC_COLPTN_Gb_G  << ISPCCDC_COLPTN_CP3PLC2_SHIFT |
ISPCCDC_COLPTN_B_Mg  << ISPCCDC_COLPTN_CP3PLC3_SHIFT;
static const u32 ccdc_sbggr_pattern =
ISPCCDC_COLPTN_B_Mg  << ISPCCDC_COLPTN_CP0PLC0_SHIFT |
ISPCCDC_COLPTN_Gb_G  << ISPCCDC_COLPTN_CP0PLC1_SHIFT |
ISPCCDC_COLPTN_B_Mg  << ISPCCDC_COLPTN_CP0PLC2_SHIFT |
ISPCCDC_COLPTN_Gb_G  << ISPCCDC_COLPTN_CP0PLC3_SHIFT |
ISPCCDC_COLPTN_Gr_Cy << ISPCCDC_COLPTN_CP1PLC0_SHIFT |
ISPCCDC_COLPTN_R_Ye  << ISPCCDC_COLPTN_CP1PLC1_SHIFT |
ISPCCDC_COLPTN_Gr_Cy << ISPCCDC_COLPTN_CP1PLC2_SHIFT |
ISPCCDC_COLPTN_R_Ye  << ISPCCDC_COLPTN_CP1PLC3_SHIFT |
ISPCCDC_COLPTN_B_Mg  << ISPCCDC_COLPTN_CP2PLC0_SHIFT |
ISPCCDC_COLPTN_Gb_G  << ISPCCDC_COLPTN_CP2PLC1_SHIFT |
ISPCCDC_COLPTN_B_Mg  << ISPCCDC_COLPTN_CP2PLC2_SHIFT |
ISPCCDC_COLPTN_Gb_G  << ISPCCDC_COLPTN_CP2PLC3_SHIFT |
ISPCCDC_COLPTN_Gr_Cy << ISPCCDC_COLPTN_CP3PLC0_SHIFT |
ISPCCDC_COLPTN_R_Ye  << ISPCCDC_COLPTN_CP3PLC1_SHIFT |
ISPCCDC_COLPTN_Gr_Cy << ISPCCDC_COLPTN_CP3PLC2_SHIFT |
ISPCCDC_COLPTN_R_Ye  << ISPCCDC_COLPTN_CP3PLC3_SHIFT;
static const u32 ccdc_sgbrg_pattern =
ISPCCDC_COLPTN_Gb_G  << ISPCCDC_COLPTN_CP0PLC0_SHIFT |
ISPCCDC_COLPTN_B_Mg  << ISPCCDC_COLPTN_CP0PLC1_SHIFT |
ISPCCDC_COLPTN_Gb_G  << ISPCCDC_COLPTN_CP0PLC2_SHIFT |
ISPCCDC_COLPTN_B_Mg  << ISPCCDC_COLPTN_CP0PLC3_SHIFT |
ISPCCDC_COLPTN_R_Ye  << ISPCCDC_COLPTN_CP1PLC0_SHIFT |
ISPCCDC_COLPTN_Gr_Cy << ISPCCDC_COLPTN_CP1PLC1_SHIFT |
ISPCCDC_COLPTN_R_Ye  << ISPCCDC_COLPTN_CP1PLC2_SHIFT |
ISPCCDC_COLPTN_Gr_Cy << ISPCCDC_COLPTN_CP1PLC3_SHIFT |
ISPCCDC_COLPTN_Gb_G  << ISPCCDC_COLPTN_CP2PLC0_SHIFT |
ISPCCDC_COLPTN_B_Mg  << ISPCCDC_COLPTN_CP2PLC1_SHIFT |
ISPCCDC_COLPTN_Gb_G  << ISPCCDC_COLPTN_CP2PLC2_SHIFT |
ISPCCDC_COLPTN_B_Mg  << ISPCCDC_COLPTN_CP2PLC3_SHIFT |
ISPCCDC_COLPTN_R_Ye  << ISPCCDC_COLPTN_CP3PLC0_SHIFT |
ISPCCDC_COLPTN_Gr_Cy << ISPCCDC_COLPTN_CP3PLC1_SHIFT |
ISPCCDC_COLPTN_R_Ye  << ISPCCDC_COLPTN_CP3PLC2_SHIFT |
ISPCCDC_COLPTN_Gr_Cy << ISPCCDC_COLPTN_CP3PLC3_SHIFT;
static void ccdc_configure(struct isp_ccdc_device *ccdc)
static void __ccdc_enable(struct isp_ccdc_device *ccdc, int enable)
static int ccdc_disable(struct isp_ccdc_device *ccdc)
static void ccdc_enable(struct isp_ccdc_device *ccdc)
static int ccdc_sbl_busy(struct isp_ccdc_device *ccdc)
static int ccdc_sbl_wait_idle(struct isp_ccdc_device *ccdc,
unsigned int max_wait)
static int __ccdc_handle_stopping(struct isp_ccdc_device *ccdc, u32 event)
static void ccdc_hs_vs_isr(struct isp_ccdc_device *ccdc)
static void ccdc_lsc_isr(struct isp_ccdc_device *ccdc, u32 events)
static int ccdc_isr_buffer(struct isp_ccdc_device *ccdc)
static void ccdc_vd0_isr(struct isp_ccdc_device *ccdc)
static void ccdc_vd1_isr(struct isp_ccdc_device *ccdc)
int omap3isp_ccdc_isr(struct isp_ccdc_device *ccdc, u32 events)
static int ccdc_video_queue(struct isp_video *video, struct isp_buffer *buffer)
static const struct isp_video_operations ccdc_video_ops = ;
static long ccdc_ioctl(struct v4l2_subdev *sd, unsigned int cmd, void *arg)
static int ccdc_subscribe_event(struct v4l2_subdev *sd, struct v4l2_fh *fh,
struct v4l2_event_subscription *sub)
static int ccdc_unsubscribe_event(struct v4l2_subdev *sd, struct v4l2_fh *fh,
struct v4l2_event_subscription *sub)
static int ccdc_set_stream(struct v4l2_subdev *sd, int enable)
static struct v4l2_mbus_framefmt *
__ccdc_get_format(struct isp_ccdc_device *ccdc, struct v4l2_subdev_fh *fh,
unsigned int pad, enum v4l2_subdev_format_whence which)
static void
ccdc_try_format(struct isp_ccdc_device *ccdc, struct v4l2_subdev_fh *fh,
unsigned int pad, struct v4l2_mbus_framefmt *fmt,
enum v4l2_subdev_format_whence which)
static int ccdc_enum_mbus_code(struct v4l2_subdev *sd,
struct v4l2_subdev_fh *fh,
struct v4l2_subdev_mbus_code_enum *code)
static int ccdc_enum_frame_size(struct v4l2_subdev *sd,
struct v4l2_subdev_fh *fh,
struct v4l2_subdev_frame_size_enum *fse)
static int ccdc_get_format(struct v4l2_subdev *sd, struct v4l2_subdev_fh *fh,
struct v4l2_subdev_format *fmt)
static int ccdc_set_format(struct v4l2_subdev *sd, struct v4l2_subdev_fh *fh,
struct v4l2_subdev_format *fmt)
static int ccdc_init_formats(struct v4l2_subdev *sd, struct v4l2_subdev_fh *fh)
static const struct v4l2_subdev_core_ops ccdc_v4l2_core_ops = ;
static const struct v4l2_subdev_video_ops ccdc_v4l2_video_ops = ;
static const struct v4l2_subdev_pad_ops ccdc_v4l2_pad_ops = ;
static const struct v4l2_subdev_ops ccdc_v4l2_ops = ;
static const struct v4l2_subdev_internal_ops ccdc_v4l2_internal_ops = ;
static int ccdc_link_setup(struct media_entity *entity,
const struct media_pad *local,
const struct media_pad *remote, u32 flags)
static const struct media_entity_operations ccdc_media_ops = ;
static int ccdc_init_entities(struct isp_ccdc_device *ccdc)
void omap3isp_ccdc_unregister_entities(struct isp_ccdc_device *ccdc)
int omap3isp_ccdc_register_entities(struct isp_ccdc_device *ccdc,
struct v4l2_device *vdev)
int omap3isp_ccdc_init(struct isp_device *isp)
void omap3isp_ccdc_cleanup(struct isp_device *isp)
