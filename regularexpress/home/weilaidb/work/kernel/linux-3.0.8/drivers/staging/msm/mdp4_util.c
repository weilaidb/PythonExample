void mdp4_sw_reset(ulong bits)
void mdp4_overlay_cfg(int overlayer, int blt_mode, int refresh, int direct_out)
void mdp4_display_intf_sel(int output, ulong intf)
unsigned long mdp4_display_status(void)
void mdp4_ebi2_lcd_setup(int lcd, ulong base, int ystride)
void mdp4_mddi_setup(int mddi, unsigned long id)
int mdp_ppp_blit(struct fb_info *info, struct mdp_blit_req *req,
struct file **pp_src_file, struct file **pp_dst_file)
void mdp4_hw_init(void)
void mdp4_clear_lcdc(void)
static struct mdp_dma_data overlay1_data;
static int intr_dma_p;
static int intr_dma_s;
static int intr_dma_e;
static int intr_overlay0;
static int intr_overlay1;
irqreturn_t mdp4_isr(int irq, void *ptr)
static uint32 vg_qseed_table0[] = ;
static uint32 vg_qseed_table1[] = ;
static uint32 vg_qseed_table2[] = ;
#define MDP4_QSEED_TABLE0_OFF 0x8100
#define MDP4_QSEED_TABLE1_OFF 0x8200
#define MDP4_QSEED_TABLE2_OFF 0x9000
void mdp4_vg_qseed_init(int vp_num)
void mdp4_mixer_blend_init(mixer_num)
static uint32 csc_matrix_tab[9] = ;
static uint32 csc_pre_bv_tab[3] = ;
static uint32 csc_post_bv_tab[3] = ;
static  uint32 csc_pre_lv_tab[6] =  ;
static  uint32 csc_post_lv_tab[6] = ;
#define MDP4_CSC_MV_OFF 	0x4400
#define MDP4_CSC_PRE_BV_OFF 	0x4500
#define MDP4_CSC_POST_BV_OFF 	0x4580
#define MDP4_CSC_PRE_LV_OFF 	0x4600
#define MDP4_CSC_POST_LV_OFF 	0x4680
void mdp4_vg_csc_mv_setup(int vp_num)
void mdp4_vg_csc_pre_bv_setup(int vp_num)
void mdp4_vg_csc_post_bv_setup(int vp_num)
void mdp4_vg_csc_pre_lv_setup(int vp_num)
void mdp4_vg_csc_post_lv_setup(int vp_num)
char gc_lut[] = ;
void mdp4_mixer_gc_lut_setup(int mixer_num)
uint32 igc_video_lut[] = ;
void mdp4_vg_igc_lut_setup(int vp_num)
uint32 igc_rgb_lut[] = ;
void mdp4_rgb_igc_lut_setup(int num)
