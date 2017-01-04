#if BITS_PER_LONG == 32
#define CT_XFI_DMA_MASK		DMA_BIT_MASK(32)
#define CT_XFI_DMA_MASK		DMA_BIT_MASK(64)
struct hw20k1 ;
static u32 hw_read_20kx(struct hw *hw, u32 reg);
static void hw_write_20kx(struct hw *hw, u32 reg, u32 data);
static u32 hw_read_pci(struct hw *hw, u32 reg);
static void hw_write_pci(struct hw *hw, u32 reg, u32 data);
#define SRCCTL_STATE	0x00000007
#define SRCCTL_BM	0x00000008
#define SRCCTL_RSR	0x00000030
#define SRCCTL_SF	0x000001C0
#define SRCCTL_WR	0x00000200
#define SRCCTL_PM	0x00000400
#define SRCCTL_ROM	0x00001800
#define SRCCTL_VO	0x00002000
#define SRCCTL_ST	0x00004000
#define SRCCTL_IE	0x00008000
#define SRCCTL_ILSZ	0x000F0000
#define SRCCTL_BP	0x00100000
#define SRCCCR_CISZ	0x000007FF
#define SRCCCR_CWA	0x001FF800
#define SRCCCR_D	0x00200000
#define SRCCCR_RS	0x01C00000
#define SRCCCR_NAL	0x3E000000
#define SRCCCR_RA	0xC0000000
#define SRCCA_CA	0x03FFFFFF
#define SRCCA_RS	0x1C000000
#define SRCCA_NAL	0xE0000000
#define SRCSA_SA	0x03FFFFFF
#define SRCLA_LA	0x03FFFFFF
#define MPRLH_PITCH	0xFFFFFFFF
union src_dirty ;
struct src_rsc_ctrl_blk ;
union src_mgr_dirty ;
struct src_mgr_ctrl_blk ;
#define SRCAIM_ARC	0x00000FFF
#define SRCAIM_NXT	0x00FF0000
#define SRCAIM_SRC	0xFF000000
struct srcimap ;
union srcimp_mgr_dirty ;
struct srcimp_mgr_ctrl_blk ;
static int src_get_rsc_ctrl_blk(void **rblk)
static int src_put_rsc_ctrl_blk(void *blk)
static int src_set_state(void *blk, unsigned int state)
static int src_set_bm(void *blk, unsigned int bm)
static int src_set_rsr(void *blk, unsigned int rsr)
static int src_set_sf(void *blk, unsigned int sf)
static int src_set_wr(void *blk, unsigned int wr)
static int src_set_pm(void *blk, unsigned int pm)
static int src_set_rom(void *blk, unsigned int rom)
static int src_set_vo(void *blk, unsigned int vo)
static int src_set_st(void *blk, unsigned int st)
static int src_set_ie(void *blk, unsigned int ie)
static int src_set_ilsz(void *blk, unsigned int ilsz)
static int src_set_bp(void *blk, unsigned int bp)
static int src_set_cisz(void *blk, unsigned int cisz)
static int src_set_ca(void *blk, unsigned int ca)
static int src_set_sa(void *blk, unsigned int sa)
static int src_set_la(void *blk, unsigned int la)
static int src_set_pitch(void *blk, unsigned int pitch)
static int src_set_clear_zbufs(void *blk, unsigned int clear)
static int src_set_dirty(void *blk, unsigned int flags)
static int src_set_dirty_all(void *blk)
#define AR_SLOT_SIZE		4096
#define AR_SLOT_BLOCK_SIZE	16
#define AR_PTS_PITCH		6
#define AR_PARAM_SRC_OFFSET	0x60
static unsigned int src_param_pitch_mixer(unsigned int src_idx)
static int src_commit_write(struct hw *hw, unsigned int idx, void *blk)
static int src_get_ca(struct hw *hw, unsigned int idx, void *blk)
static unsigned int src_get_dirty(void *blk)
static unsigned int src_dirty_conj_mask(void)
static int src_mgr_enbs_src(void *blk, unsigned int idx)
static int src_mgr_enb_src(void *blk, unsigned int idx)
static int src_mgr_dsb_src(void *blk, unsigned int idx)
static int src_mgr_commit_write(struct hw *hw, void *blk)
static int src_mgr_get_ctrl_blk(void **rblk)
static int src_mgr_put_ctrl_blk(void *blk)
static int srcimp_mgr_get_ctrl_blk(void **rblk)
static int srcimp_mgr_put_ctrl_blk(void *blk)
static int srcimp_mgr_set_imaparc(void *blk, unsigned int slot)
static int srcimp_mgr_set_imapuser(void *blk, unsigned int user)
static int srcimp_mgr_set_imapnxt(void *blk, unsigned int next)
static int srcimp_mgr_set_imapaddr(void *blk, unsigned int addr)
static int srcimp_mgr_commit_write(struct hw *hw, void *blk)
#define AMOPLO_M	0x00000003
#define AMOPLO_X	0x0003FFF0
#define AMOPLO_Y	0xFFFC0000
#define AMOPHI_SADR	0x000000FF
#define AMOPHI_SE	0x80000000
union amixer_dirty ;
struct amixer_rsc_ctrl_blk ;
static int amixer_set_mode(void *blk, unsigned int mode)
static int amixer_set_iv(void *blk, unsigned int iv)
static int amixer_set_x(void *blk, unsigned int x)
static int amixer_set_y(void *blk, unsigned int y)
static int amixer_set_sadr(void *blk, unsigned int sadr)
static int amixer_set_se(void *blk, unsigned int se)
static int amixer_set_dirty(void *blk, unsigned int flags)
static int amixer_set_dirty_all(void *blk)
static int amixer_commit_write(struct hw *hw, unsigned int idx, void *blk)
static int amixer_get_y(void *blk)
static unsigned int amixer_get_dirty(void *blk)
static int amixer_rsc_get_ctrl_blk(void **rblk)
static int amixer_rsc_put_ctrl_blk(void *blk)
static int amixer_mgr_get_ctrl_blk(void **rblk)
static int amixer_mgr_put_ctrl_blk(void *blk)
#define SRTCTL_SRCR	0x000000FF
#define SRTCTL_SRCL	0x0000FF00
#define SRTCTL_RSR	0x00030000
#define SRTCTL_DRAT	0x000C0000
#define SRTCTL_RLE	0x10000000
#define SRTCTL_RLP	0x20000000
#define SRTCTL_EC	0x40000000
#define SRTCTL_ET	0x80000000
union dai_dirty ;
struct dai_ctrl_blk ;
union dao_dirty ;
struct dao_ctrl_blk ;
#define AIM_ARC		0x00000FFF
#define AIM_NXT		0x007F0000
struct daoimap ;
#define I2SCTL_EA	0x00000004
#define I2SCTL_EI	0x00000010
#define SPOCTL_OE	0x00000001
#define SPOCTL_OS	0x0000000E
#define SPOCTL_RIV	0x00000010
#define SPOCTL_LIV	0x00000020
#define SPOCTL_SR	0x000000C0
#define SPICTL_EN	0x00000001
#define SPICTL_I24	0x00000002
#define SPICTL_IB	0x00000004
#define SPICTL_SM	0x00000008
#define SPICTL_VM	0x00000010
union daio_mgr_dirty ;
struct daio_mgr_ctrl_blk ;
static int dai_srt_set_srcr(void *blk, unsigned int src)
static int dai_srt_set_srcl(void *blk, unsigned int src)
static int dai_srt_set_rsr(void *blk, unsigned int rsr)
static int dai_srt_set_drat(void *blk, unsigned int drat)
static int dai_srt_set_ec(void *blk, unsigned int ec)
static int dai_srt_set_et(void *blk, unsigned int et)
static int dai_commit_write(struct hw *hw, unsigned int idx, void *blk)
static int dai_get_ctrl_blk(void **rblk)
static int dai_put_ctrl_blk(void *blk)
static int dao_set_spos(void *blk, unsigned int spos)
static int dao_commit_write(struct hw *hw, unsigned int idx, void *blk)
static int dao_get_spos(void *blk, unsigned int *spos)
static int dao_get_ctrl_blk(void **rblk)
static int dao_put_ctrl_blk(void *blk)
static int daio_mgr_enb_dai(void *blk, unsigned int idx)
static int daio_mgr_dsb_dai(void *blk, unsigned int idx)
static int daio_mgr_enb_dao(void *blk, unsigned int idx)
static int daio_mgr_dsb_dao(void *blk, unsigned int idx)
static int daio_mgr_dao_init(void *blk, unsigned int idx, unsigned int conf)
static int daio_mgr_set_imaparc(void *blk, unsigned int slot)
static int daio_mgr_set_imapnxt(void *blk, unsigned int next)
static int daio_mgr_set_imapaddr(void *blk, unsigned int addr)
static int daio_mgr_commit_write(struct hw *hw, void *blk)
static int daio_mgr_get_ctrl_blk(struct hw *hw, void **rblk)
static int daio_mgr_put_ctrl_blk(void *blk)
static int set_timer_irq(struct hw *hw, int enable)
static int set_timer_tick(struct hw *hw, unsigned int ticks)
static unsigned int get_wc(struct hw *hw)
struct dac_conf ;
struct adc_conf ;
struct daio_conf ;
struct trn_conf ;
static int hw_daio_init(struct hw *hw, const struct daio_conf *info)
static int hw_trn_init(struct hw *hw, const struct trn_conf *info)
#define GCTL_EAC	0x00000001
#define GCTL_EAI	0x00000002
#define GCTL_BEP	0x00000004
#define GCTL_BES	0x00000008
#define GCTL_DSP	0x00000010
#define GCTL_DBP	0x00000020
#define GCTL_ABP	0x00000040
#define GCTL_TBP	0x00000080
#define GCTL_SBP	0x00000100
#define GCTL_FBP	0x00000200
#define GCTL_XA		0x00000400
#define GCTL_ET		0x00000800
#define GCTL_PR		0x00001000
#define GCTL_MRL	0x00002000
#define GCTL_SDE	0x00004000
#define GCTL_SDI	0x00008000
#define GCTL_SM		0x00010000
#define GCTL_SR		0x00020000
#define GCTL_SD		0x00040000
#define GCTL_SE		0x00080000
#define GCTL_AID	0x00100000
static int hw_pll_init(struct hw *hw, unsigned int rsr)
static int hw_auto_init(struct hw *hw)
static int i2c_unlock(struct hw *hw)
static void i2c_lock(struct hw *hw)
static void i2c_write(struct hw *hw, u32 device, u32 addr, u32 data)
static int hw_reset_dac(struct hw *hw)
static int hw_dac_init(struct hw *hw, const struct dac_conf *info)
static int is_adc_input_selected_SB055x(struct hw *hw, enum ADCSRC type)
static int is_adc_input_selected_SBx(struct hw *hw, enum ADCSRC type)
static int is_adc_input_selected_hendrix(struct hw *hw, enum ADCSRC type)
static int hw_is_adc_input_selected(struct hw *hw, enum ADCSRC type)
static int
adc_input_select_SB055x(struct hw *hw, enum ADCSRC type, unsigned char boost)
static int
adc_input_select_SBx(struct hw *hw, enum ADCSRC type, unsigned char boost)
static int
adc_input_select_hendrix(struct hw *hw, enum ADCSRC type, unsigned char boost)
static int hw_adc_input_select(struct hw *hw, enum ADCSRC type)
static int adc_init_SB055x(struct hw *hw, int input, int mic20db)
static int adc_init_SBx(struct hw *hw, int input, int mic20db)
static int hw_adc_init(struct hw *hw, const struct adc_conf *info)
static int hw_have_digit_io_switch(struct hw *hw)
#define CTLBITS(a, b, c, d)	(((a) << 24) | ((b) << 16) | ((c) << 8) | (d))
#define UAA_CFG_PWRSTATUS	0x44
#define UAA_CFG_SPACE_FLAG	0xA0
#define UAA_CORE_CHANGE		0x3FFC
static int uaa_to_xfi(struct pci_dev *pci)
static irqreturn_t ct_20k1_interrupt(int irq, void *dev_id)
static int hw_card_start(struct hw *hw)
static int hw_card_stop(struct hw *hw)
static int hw_card_shutdown(struct hw *hw)
static int hw_card_init(struct hw *hw, struct card_conf *info)
static int hw_suspend(struct hw *hw, pm_message_t state)
static int hw_resume(struct hw *hw, struct card_conf *info)
static u32 hw_read_20kx(struct hw *hw, u32 reg)
static void hw_write_20kx(struct hw *hw, u32 reg, u32 data)
static u32 hw_read_pci(struct hw *hw, u32 reg)
static void hw_write_pci(struct hw *hw, u32 reg, u32 data)
static struct hw ct20k1_preset __devinitdata = ;
int __devinit create_20k1_hw_obj(struct hw **rhw)
int destroy_20k1_hw_obj(struct hw *hw)
