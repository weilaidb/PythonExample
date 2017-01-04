#define MDP4_H
extern struct mdp_dma_data dma2_data;
extern struct mdp_dma_data dma_s_data;
extern struct mdp_dma_data dma_e_data;
extern struct mdp_histogram mdp_hist;
extern struct completion mdp_hist_comp;
extern boolean mdp_is_in_isr;
extern uint32 mdp_intr_mask;
extern spinlock_t mdp_spin_lock;
#define MDP4_NONBLOCKING
#define MDP4_OVERLAYPROC0_BASE	0x10000
#define MDP4_OVERLAYPROC1_BASE	0x18000
#define MDP4_VIDEO_BASE 0x20000
#define MDP4_VIDEO_OFF 0x10000
#define MDP4_RGB_BASE 0x40000
#define MDP4_RGB_OFF 0x10000
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
#define INTR_OVERLAY0_DONE		BIT(0)
#define INTR_OVERLAY1_DONE		BIT(1)
#define INTR_DMA_S_DONE			BIT(2)
#define INTR_DMA_E_DONE			BIT(3)
#define INTR_DMA_P_DONE			BIT(4)
#define INTR_VG1_HISTOGRAM		BIT(5)
#define INTR_VG2_HISTOGRAM		BIT(6)
#define INTR_PRIMARY_VSYNC		BIT(7)
#define INTR_PRIMARY_INTF_UDERRUN	BIT(8)
#define INTR_EXTERNAL_VSYNC		BIT(9)
#define INTR_EXTERNAL_INTF_UDERRUN	BIT(10)
#define INTR_DMA_P_HISTOGRAM		BIT(17)
#define INTR_HIST_DONE			BIT(0)
#define INTR_HIST_RESET_SEQ_DONE	BIT(1)
#define MDP4_ANY_INTR_MASK	(INTR_OVERLAY0_DONE)
#define MDP4_ANY_INTR_MASK	(INTR_DMA_P_DONE)
enum ;
enum ;
enum ;
enum ;
#define MDP4_MAX_MIXER	2
enum ;
enum ;
#define MDP4_MAX_STAGE	4
enum ;
enum ;
#define MDP4_BLEND_BG_TRANSP_EN		BIT(9)
#define MDP4_BLEND_FG_TRANSP_EN		BIT(8)
#define MDP4_BLEND_BG_MOD_ALPHA		BIT(7)
#define MDP4_BLEND_BG_INV_ALPHA		BIT(6)
#define MDP4_BLEND_BG_ALPHA_FG_CONST	(0 << 4)
#define MDP4_BLEND_BG_ALPHA_BG_CONST	(1 << 4)
#define MDP4_BLEND_BG_ALPHA_FG_PIXEL	(2 << 4)
#define MDP4_BLEND_BG_ALPHA_BG_PIXEL	(3 << 4)
#define MDP4_BLEND_FG_MOD_ALPHA		BIT(3)
#define MDP4_BLEND_FG_INV_ALPHA		BIT(2)
#define MDP4_BLEND_FG_ALPHA_FG_CONST	(0 << 0)
#define MDP4_BLEND_FG_ALPHA_BG_CONST	(1 << 0)
#define MDP4_BLEND_FG_ALPHA_FG_PIXEL	(2 << 0)
#define MDP4_BLEND_FG_ALPHA_BG_PIXEL	(3 << 0)
#define MDP4_FORMAT_SOLID_FILL		BIT(22)
#define MDP4_FORMAT_UNPACK_ALIGN_MSB	BIT(18)
#define MDP4_FORMAT_UNPACK_TIGHT	BIT(17)
#define MDP4_FORMAT_90_ROTATED		BIT(12)
#define MDP4_FORMAT_ALPHA_ENABLE	BIT(8)
#define MDP4_OP_DEINT_ODD_REF  	BIT(19)
#define MDP4_OP_IGC_LUT_EN	BIT(16)
#define MDP4_OP_DITHER_EN     	BIT(15)
#define MDP4_OP_FLIP_UD		BIT(14)
#define MDP4_OP_FLIP_LR		BIT(13)
#define MDP4_OP_CSC_EN		BIT(11)
#define MDP4_OP_SRC_DATA_YCBCR	BIT(9)
#define MDP4_OP_SCALEY_FIR 		(0 << 4)
#define MDP4_OP_SCALEY_MN_PHASE 	(1 << 4)
#define MDP4_OP_SCALEY_PIXEL_RPT	(2 << 4)
#define MDP4_OP_SCALEX_FIR 		(0 << 2)
#define MDP4_OP_SCALEX_MN_PHASE 	(1 << 2)
#define MDP4_OP_SCALEX_PIXEL_RPT 	(2 << 2)
#define MDP4_OP_SCALEY_EN	BIT(1)
#define MDP4_OP_SCALEX_EN	BIT(0)
#define MDP4_PIPE_PER_MIXER	2
#define MDP4_MAX_PLANE		4
#define MDP4_MAX_VIDEO_PIPE 2
#define MDP4_MAX_RGB_PIPE 2
#define MDP4_MAX_OVERLAY_PIPE 	16
struct mdp4_overlay_pipe ;
void mdp4_sw_reset(unsigned long bits);
void mdp4_display_intf_sel(int output, unsigned long intf);
void mdp4_overlay_cfg(int layer, int blt_mode, int refresh, int direct_out);
void mdp4_ebi2_lcd_setup(int lcd, unsigned long base, int ystride);
void mdp4_mddi_setup(int which, unsigned long id);
unsigned long mdp4_display_status(void);
void mdp4_enable_clk_irq(void);
void mdp4_disable_clk_irq(void);
void mdp4_dma_p_update(struct msm_fb_data_type *mfd);
void mdp4_dma_s_update(struct msm_fb_data_type *mfd);
void mdp_pipe_ctrl(MDP_BLOCK_TYPE block, MDP_BLOCK_POWER_STATE state,
boolean isr);
void mdp4_pipe_kickoff(uint32 pipe, struct msm_fb_data_type *mfd);
int mdp4_lcdc_on(struct platform_device *pdev);
int mdp4_lcdc_off(struct platform_device *pdev);
void mdp4_lcdc_update(struct msm_fb_data_type *mfd);
void mdp4_intr_clear_set(ulong clear, ulong set);
void mdp4_dma_p_cfg(void);
void mdp4_hw_init(void);
void mdp4_isr_read(int);
void mdp4_clear_lcdc(void);
void mdp4_mixer_blend_init(int mixer_num);
void mdp4_vg_qseed_init(int vg_num);
void mdp4_vg_csc_mv_setup(int vp_num);
void mdp4_vg_csc_pre_bv_setup(int vp_num);
void mdp4_vg_csc_post_bv_setup(int vp_num);
void mdp4_vg_csc_pre_lv_setup(int vp_num);
void mdp4_vg_csc_post_lv_setup(int vp_num);
irqreturn_t mdp4_isr(int irq, void *ptr);
void mdp4_overlay_format_to_pipe(uint32 format, struct mdp4_overlay_pipe *pipe);
uint32 mdp4_overlay_format(struct mdp4_overlay_pipe *pipe);
uint32 mdp4_overlay_unpack_pattern(struct mdp4_overlay_pipe *pipe);
uint32 mdp4_overlay_op_mode(struct mdp4_overlay_pipe *pipe);
void mdp4_lcdc_overlay(struct msm_fb_data_type *mfd);
void mdp4_overlay_rgb_setup(struct mdp4_overlay_pipe *pipe);
void mdp4_overlay_reg_flush(struct mdp4_overlay_pipe *pipe, int all);
void mdp4_mixer_blend_setup(struct mdp4_overlay_pipe *pipe);
void mdp4_mixer_stage_up(struct mdp4_overlay_pipe *pipe);
void mdp4_mixer_stage_down(struct mdp4_overlay_pipe *pipe);
int mdp4_mixer_stage_can_run(struct mdp4_overlay_pipe *pipe);
void mdp4_overlayproc_cfg(struct mdp4_overlay_pipe *pipe);
void mdp4_mddi_overlay(struct msm_fb_data_type *mfd);
int mdp4_overlay_format2type(uint32 format);
int mdp4_overlay_format2pipe(struct mdp4_overlay_pipe *pipe);
int mdp4_overlay_get(struct fb_info *info, struct mdp_overlay *req);
int mdp4_overlay_set(struct fb_info *info, struct mdp_overlay *req);
int mdp4_overlay_unset(struct fb_info *info, int ndx);
int mdp4_overlay_play(struct fb_info *info, struct msmfb_overlay_data *req,
struct file **pp_src_file);
struct mdp4_overlay_pipe *mdp4_overlay_pipe_alloc(void);
void mdp4_overlay_pipe_free(struct mdp4_overlay_pipe *pipe);
void mdp4_overlay_dmap_cfg(struct msm_fb_data_type *mfd, int lcdc);
void mdp4_overlay_dmap_xy(struct mdp4_overlay_pipe *pipe);
int mdp4_overlay_active(int mixer);
void mdp4_overlay0_done_lcdc(void);
void mdp4_overlay0_done_mddi(void);
void mdp4_mddi_overlay_restore(void);
void mdp4_mddi_overlay_kickoff(struct msm_fb_data_type *mfd,
struct mdp4_overlay_pipe *pipe);
void mdp4_rgb_igc_lut_setup(int num);
void mdp4_vg_igc_lut_setup(int num);
void mdp4_mixer_gc_lut_setup(int mixer_num);
int mdp4_debugfs_init(void);
int mdp_ppp_blit(struct fb_info *info, struct mdp_blit_req *req,
struct file **pp_src_file, struct file **pp_dst_file);
