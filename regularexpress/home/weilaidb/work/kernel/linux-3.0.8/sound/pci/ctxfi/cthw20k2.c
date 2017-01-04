#if BITS_PER_LONG == 32
#define CT_XFI_DMA_MASK		DMA_BIT_MASK(32)
#define CT_XFI_DMA_MASK		DMA_BIT_MASK(64)
struct hw20k2 ;
static u32 hw_read_20kx(struct hw *hw, u32 reg);
static void hw_write_20kx(struct hw *hw, u32 reg, u32 data);
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
#define SRCCA_CA	0x0FFFFFFF
#define SRCCA_RS	0xE0000000
#define SRCSA_SA	0x0FFFFFFF
#define SRCLA_LA	0x0FFFFFFF
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
#define AMOPLO_IV	0x00000004
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
#define SRTCTL_SRCO	0x000000FF
#define SRTCTL_SRCM	0x0000FF00
#define SRTCTL_RSR	0x00030000
#define SRTCTL_DRAT	0x00300000
#define SRTCTL_EC	0x01000000
#define SRTCTL_ET	0x10000000
union dai_dirty ;
struct dai_ctrl_blk ;
#define AIM_ARC		0x00000FFF
#define AIM_NXT		0x007F0000
struct daoimap ;
#define ATXCTL_EN	0x00000001
#define ATXCTL_MODE	0x00000010
#define ATXCTL_CD	0x00000020
#define ATXCTL_RAW	0x00000100
#define ATXCTL_MT	0x00000200
#define ATXCTL_NUC	0x00003000
#define ATXCTL_BEN	0x00010000
#define ATXCTL_BMUX	0x00700000
#define ATXCTL_B24	0x01000000
#define ATXCTL_CPF	0x02000000
#define ATXCTL_RIV	0x10000000
#define ATXCTL_LIV	0x20000000
#define ATXCTL_RSAT	0x40000000
#define ATXCTL_LSAT	0x80000000
union dao_dirty ;
struct dao_ctrl_blk ;
#define ARXCTL_EN	0x00000001
union daio_mgr_dirty ;
struct daio_mgr_ctrl_blk ;
static int dai_srt_set_srco(void *blk, unsigned int src)
static int dai_srt_set_srcm(void *blk, unsigned int src)
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
#define GCTL_AIE	0x00000001
#define GCTL_UAA	0x00000002
#define GCTL_DPC	0x00000004
#define GCTL_DBP	0x00000008
#define GCTL_ABP	0x00000010
#define GCTL_TBP	0x00000020
#define GCTL_SBP	0x00000040
#define GCTL_FBP	0x00000080
#define GCTL_ME		0x00000100
#define GCTL_AID	0x00001000
#define PLLCTL_SRC	0x00000007
#define PLLCTL_SPE	0x00000008
#define PLLCTL_RD	0x000000F0
#define PLLCTL_FD	0x0001FF00
#define PLLCTL_OD	0x00060000
#define PLLCTL_B	0x00080000
#define PLLCTL_AS	0x00100000
#define PLLCTL_LF	0x03E00000
#define PLLCTL_SPS	0x1C000000
#define PLLCTL_AD	0x60000000
#define PLLSTAT_CCS	0x00000007
#define PLLSTAT_SPL	0x00000008
#define PLLSTAT_CRD	0x000000F0
#define PLLSTAT_CFD	0x0001FF00
#define PLLSTAT_SL	0x00020000
#define PLLSTAT_FAS	0x00040000
#define PLLSTAT_B	0x00080000
#define PLLSTAT_PD	0x00100000
#define PLLSTAT_OCA	0x00200000
#define PLLSTAT_NCA	0x00400000
static int hw_pll_init(struct hw *hw, unsigned int rsr)
static int hw_auto_init(struct hw *hw)
#define CS4382_MC1 		0x1
#define CS4382_MC2 		0x2
#define CS4382_MC3		0x3
#define CS4382_FC		0x4
#define CS4382_IC		0x5
#define CS4382_XC1		0x6
#define CS4382_VCA1 		0x7
#define CS4382_VCB1 		0x8
#define CS4382_XC2		0x9
#define CS4382_VCA2 		0xA
#define CS4382_VCB2 		0xB
#define CS4382_XC3		0xC
#define CS4382_VCA3		0xD
#define CS4382_VCB3		0xE
#define CS4382_XC4 		0xF
#define CS4382_VCA4 		0x10
#define CS4382_VCB4 		0x11
#define CS4382_CREV 		0x12
#define STATE_LOCKED		0x00
#define STATE_UNLOCKED		0xAA
#define DATA_READY		0x800000
#define DATA_ABORT		0x10000
#define I2C_STATUS_DCM	0x00000001
#define I2C_STATUS_BC	0x00000006
#define I2C_STATUS_APD	0x00000008
#define I2C_STATUS_AB	0x00010000
#define I2C_STATUS_DR	0x00800000
#define I2C_ADDRESS_PTAD	0x0000FFFF
#define I2C_ADDRESS_SLAD	0x007F0000
struct regs_cs4382 ;
static int hw20k2_i2c_unlock_full_access(struct hw *hw)
static int hw20k2_i2c_lock_chip(struct hw *hw)
static int hw20k2_i2c_init(struct hw *hw, u8 dev_id, u8 addr_size, u8 data_size)
static int hw20k2_i2c_uninit(struct hw *hw)
static int hw20k2_i2c_wait_data_ready(struct hw *hw)
static int hw20k2_i2c_read(struct hw *hw, u16 addr, u32 *datap)
static int hw20k2_i2c_write(struct hw *hw, u16 addr, u32 data)
static int hw_dac_init(struct hw *hw, const struct dac_conf *info)
#define MAKE_WM8775_ADDR(addr, data)	(u32)(((addr<<1)&0xFE)|((data>>8)&0x1))
#define MAKE_WM8775_DATA(data)	(u32)(data&0xFF)
#define WM8775_IC       0x0B
#define WM8775_MMC      0x0C
#define WM8775_AADCL    0x0E
#define WM8775_AADCR    0x0F
#define WM8775_ADCMC    0x15
#define WM8775_RESET    0x17
static int hw_is_adc_input_selected(struct hw *hw, enum ADCSRC type)
#define MIC_BOOST_0DB 0xCF
#define MIC_BOOST_STEPS_PER_DB 2
#define MIC_BOOST_20DB (MIC_BOOST_0DB + 20 * MIC_BOOST_STEPS_PER_DB)
static int hw_adc_input_select(struct hw *hw, enum ADCSRC type)
static int hw_adc_init(struct hw *hw, const struct adc_conf *info)
static int hw_have_digit_io_switch(struct hw *hw)
static irqreturn_t ct_20k2_interrupt(int irq, void *dev_id)
static int hw_card_start(struct hw *hw)
static int hw_card_stop(struct hw *hw)
static int hw_card_shutdown(struct hw *hw)
static int hw_card_init(struct hw *hw, struct card_conf *info)
static int hw_suspend(struct hw *hw, pm_message_t state)
static int hw_resume(struct hw *hw, struct card_conf *info)
static u32 hw_read_20kx(struct hw *hw, u32 reg)
static void hw_write_20kx(struct hw *hw, u32 reg, u32 data)
static struct hw ct20k2_preset __devinitdata = ;
int __devinit create_20k2_hw_obj(struct hw **rhw)
int destroy_20k2_hw_obj(struct hw *hw)
