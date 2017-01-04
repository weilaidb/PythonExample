#define	_aiutils_h_
#define	_PADLINE(line)	pad ## line
#define	_XSTR(line)	_PADLINE(line)
#define	PAD		_XSTR(__LINE__)
#define SI_SDRAM_BASE		0x00000000
#define SI_PCI_MEM		0x08000000
#define SI_PCI_MEM_SZ		(64 * 1024 * 1024)
#define SI_PCI_CFG		0x0c000000
#define	SI_SDRAM_SWAPPED	0x10000000
#define SI_SDRAM_R2		0x80000000
#define SI_ENUM_BASE		(sii->pub.si_enum_base)
#define SI_ENUM_BASE		0x18000000
#define SI_WRAP_BASE		0x18100000
#define SI_CORE_SIZE		0x1000
#define	SI_MAXCORES		16
#define	SI_FASTRAM		0x19000000
#define	SI_FASTRAM_SWAPPED	0x19800000
#define	SI_FLASH2		0x1c000000
#define	SI_FLASH2_SZ		0x02000000
#define	SI_ARMCM3_ROM		0x1e000000
#define	SI_FLASH1		0x1fc00000
#define	SI_FLASH1_SZ		0x00400000
#define	SI_ARM7S_ROM		0x20000000
#define	SI_ARMCM3_SRAM2		0x60000000
#define	SI_ARM7S_SRAM2		0x80000000
#define	SI_ARM_FLASH1		0xffff0000
#define	SI_ARM_FLASH1_SZ	0x00010000
#define SI_PCI_DMA		0x40000000
#define SI_PCI_DMA2		0x80000000
#define SI_PCI_DMA_SZ		0x40000000
#define SI_PCIE_DMA_L32		0x00000000
#define SI_PCIE_DMA_H32		0x80000000
#define	NODEV_CORE_ID		0x700
#define	CC_CORE_ID		0x800
#define	ILINE20_CORE_ID		0x801
#define	SRAM_CORE_ID		0x802
#define	SDRAM_CORE_ID		0x803
#define	PCI_CORE_ID		0x804
#define	MIPS_CORE_ID		0x805
#define	ENET_CORE_ID		0x806
#define	CODEC_CORE_ID		0x807
#define	USB_CORE_ID		0x808
#define	ADSL_CORE_ID		0x809
#define	ILINE100_CORE_ID	0x80a
#define	IPSEC_CORE_ID		0x80b
#define	UTOPIA_CORE_ID		0x80c
#define	PCMCIA_CORE_ID		0x80d
#define	SOCRAM_CORE_ID		0x80e
#define	MEMC_CORE_ID		0x80f
#define	OFDM_CORE_ID		0x810
#define	EXTIF_CORE_ID		0x811
#define	D11_CORE_ID		0x812
#define	APHY_CORE_ID		0x813
#define	BPHY_CORE_ID		0x814
#define	GPHY_CORE_ID		0x815
#define	MIPS33_CORE_ID		0x816
#define	USB11H_CORE_ID		0x817
#define	USB11D_CORE_ID		0x818
#define	USB20H_CORE_ID		0x819
#define	USB20D_CORE_ID		0x81a
#define	SDIOH_CORE_ID		0x81b
#define	ROBO_CORE_ID		0x81c
#define	ATA100_CORE_ID		0x81d
#define	SATAXOR_CORE_ID		0x81e
#define	GIGETH_CORE_ID		0x81f
#define	PCIE_CORE_ID		0x820
#define	NPHY_CORE_ID		0x821
#define	SRAMC_CORE_ID		0x822
#define	MINIMAC_CORE_ID		0x823
#define	ARM11_CORE_ID		0x824
#define	ARM7S_CORE_ID		0x825
#define	LPPHY_CORE_ID		0x826
#define	PMU_CORE_ID		0x827
#define	SSNPHY_CORE_ID		0x828
#define	SDIOD_CORE_ID		0x829
#define	ARMCM3_CORE_ID		0x82a
#define	HTPHY_CORE_ID		0x82b
#define	MIPS74K_CORE_ID		0x82c
#define	GMAC_CORE_ID		0x82d
#define	DMEMC_CORE_ID		0x82e
#define	PCIERC_CORE_ID		0x82f
#define	OCP_CORE_ID		0x830
#define	SC_CORE_ID		0x831
#define	AHB_CORE_ID		0x832
#define	SPIH_CORE_ID		0x833
#define	I2S_CORE_ID		0x834
#define	DMEMS_CORE_ID		0x835
#define	DEF_SHIM_COMP		0x837
#define OOB_ROUTER_CORE_ID	0x367
#define	DEF_AI_COMP		0xfff
#define	SI_CC_IDX		0
#define	SOCI_AI			1
#define	SICF_BIST_EN		0x8000
#define	SICF_PME_EN		0x4000
#define	SICF_CORE_BITS		0x3ffc
#define	SICF_FGC		0x0002
#define	SICF_CLOCK_EN		0x0001
#define	SISF_BIST_DONE		0x8000
#define	SISF_BIST_ERROR		0x4000
#define	SISF_GATED_CLK		0x2000
#define	SISF_DMA64		0x1000
#define	SISF_CORE_BITS		0x0fff
#define SI_CLK_CTL_ST		0x1e0
#define	CCS_FORCEALP		0x00000001
#define	CCS_FORCEHT		0x00000002
#define	CCS_FORCEILP		0x00000004
#define	CCS_ALPAREQ		0x00000008
#define	CCS_HTAREQ		0x00000010
#define	CCS_FORCEHWREQOFF	0x00000020
#define CCS_ERSRC_REQ_MASK	0x00000700
#define CCS_ERSRC_REQ_SHIFT	8
#define	CCS_ALPAVAIL		0x00010000
#define	CCS_HTAVAIL		0x00020000
#define CCS_BP_ON_APL		0x00040000
#define CCS_BP_ON_HT		0x00080000
#define CCS_ERSRC_STS_MASK	0x07000000
#define CCS_ERSRC_STS_SHIFT	24
#define	CCS0_HTAVAIL		0x00010000
#define	CCS0_ALPAVAIL		0x00020000
#define FLASH_MIN		0x00020000
#define	BISZ_OFFSET		0x3e0
#define	BISZ_MAGIC		0x4249535a
#define	BISZ_MAGIC_IDX		0
#define	BISZ_TXTST_IDX		1
#define	BISZ_TXTEND_IDX		2
#define	BISZ_DATAST_IDX		3
#define	BISZ_DATAEND_IDX	4
#define	BISZ_BSSST_IDX		5
#define	BISZ_BSSEND_IDX		6
#define BISZ_SIZE		7
#define	SI_INFO(sih)	(si_info_t *)sih
#define	GOODCOREADDR(x, b) \
(((x) >= (b)) && ((x) < ((b) + SI_MAXCORES * SI_CORE_SIZE)) && \
IS_ALIGNED((x), SI_CORE_SIZE))
#define	GOODREGS(regs) \
((regs) != NULL && IS_ALIGNED((unsigned long)(regs), SI_CORE_SIZE))
#define BADCOREADDR	0
#define	GOODIDX(idx)	(((uint)idx) < SI_MAXCORES)
#define	NOREV		-1
#define SI_FAST(si) (((si)->pub.buscoretype == PCIE_CORE_ID) ||	\
(((si)->pub.buscoretype == PCI_CORE_ID) && \
(si)->pub.buscorerev >= 13))
#define PCIEREGS(si) (((char *)((si)->curmap) + PCI_16KB0_PCIREGS_OFFSET))
#define CCREGS_FAST(si) (((char *)((si)->curmap) + PCI_16KB0_CCREGS_OFFSET))
#define INTR_OFF(si, intr_val) \
if ((si)->intrsoff_fn && \
(si)->coreid[(si)->curidx] == (si)->dev_coreid) \
intr_val = (*(si)->intrsoff_fn)((si)->intr_arg)
#define INTR_RESTORE(si, intr_val) \
if ((si)->intrsrestore_fn && \
(si)->coreid[(si)->curidx] == (si)->dev_coreid) \
(*(si)->intrsrestore_fn)((si)->intr_arg, intr_val)
#define	LPOMINFREQ		25000
#define	LPOMAXFREQ		43000
#define	XTALMINFREQ		19800000
#define	XTALMAXFREQ		20200000
#define	PCIMINFREQ		25000000
#define	PCIMAXFREQ		34000000
#define	ILP_DIV_5MHZ		0
#define	ILP_DIV_1MHZ		4
#define PCI(si)		(((si)->pub.bustype == PCI_BUS) &&	\
((si)->pub.buscoretype == PCI_CORE_ID))
#define PCIE(si)	(((si)->pub.bustype == PCI_BUS) &&	\
((si)->pub.buscoretype == PCIE_CORE_ID))
#define PCI_FORCEHT(si)	\
(PCIE(si) && (si->pub.chip == BCM4716_CHIP_ID))
#define DEFAULT_GPIO_ONTIME	10
#define DEFAULT_GPIO_OFFTIME	90
#define DEFAULT_GPIOTIMERVAL \
((DEFAULT_GPIO_ONTIME << GPIO_ONTIME_SHIFT) | DEFAULT_GPIO_OFFTIME)
struct si_pub ;
typedef const struct si_pub si_t;
#define	BADIDX		(SI_MAXCORES + 1)
#define	XTAL			0x1
#define	PLL			0x2
#define	CLK_FAST		0
#define	CLK_DYNAMIC		2
#define GPIO_DRV_PRIORITY	0
#define GPIO_APP_PRIORITY	1
#define GPIO_HI_PRIORITY	2
#define GPIO_PULLUP		0
#define GPIO_PULLDN		1
#define GPIO_REGEVT		0
#define GPIO_REGEVT_INTMSK	1
#define GPIO_REGEVT_INTPOL	2
#define SI_DEVPATH_BUFSZ	16
#define	SI_DOATTACH	1
#define SI_PCIDOWN	2
#define SI_PCIUP	3
#define	ISSIM_ENAB(sih)	0
#if defined(BCMPMUCTL)
#define PMUCTL_ENAB(sih)	(BCMPMUCTL)
#define PMUCTL_ENAB(sih)	((sih)->cccaps & CC_CAP_PMU)
#if defined(BCMPMUCTL) && BCMPMUCTL
#define CCCTL_ENAB(sih)		(0)
#define CCPLL_ENAB(sih)		(0)
#define CCCTL_ENAB(sih)		((sih)->cccaps & CC_CAP_PWR_CTL)
#define CCPLL_ENAB(sih)		((sih)->cccaps & CC_CAP_PLL_MASK)
typedef void (*gpio_handler_t) (u32 stat, void *arg);
#define GPIO_CTRL_EPA_EN_MASK 0x40
#define	SI_ERROR(args)
#define	SI_MSG(args)	printk args
#define	SI_MSG(args)
#define	SI_VMSG(args)
#define	IS_SIM(chippkg)	\
((chippkg == HDLSIM_PKG_ID) || (chippkg == HWSIM_PKG_ID))
typedef u32(*si_intrsoff_t) (void *intr_arg);
typedef void (*si_intrsrestore_t) (void *intr_arg, u32 arg);
typedef bool(*si_intrsenabled_t) (void *intr_arg);
typedef struct gpioh_item  gpioh_item_t;
typedef struct si_info  si_info_t;
extern void ai_scan(si_t *sih, void *regs, uint devid);
extern uint ai_flag(si_t *sih);
extern void ai_setint(si_t *sih, int siflag);
extern uint ai_coreidx(si_t *sih);
extern uint ai_corevendor(si_t *sih);
extern uint ai_corerev(si_t *sih);
extern bool ai_iscoreup(si_t *sih);
extern void *ai_setcoreidx(si_t *sih, uint coreidx);
extern u32 ai_core_cflags(si_t *sih, u32 mask, u32 val);
extern void ai_core_cflags_wo(si_t *sih, u32 mask, u32 val);
extern u32 ai_core_sflags(si_t *sih, u32 mask, u32 val);
extern uint ai_corereg(si_t *sih, uint coreidx, uint regoff, uint mask,
uint val);
extern void ai_core_reset(si_t *sih, u32 bits, u32 resetbits);
extern void ai_core_disable(si_t *sih, u32 bits);
extern int ai_numaddrspaces(si_t *sih);
extern u32 ai_addrspace(si_t *sih, uint asidx);
extern u32 ai_addrspacesize(si_t *sih, uint asidx);
extern void ai_write_wrap_reg(si_t *sih, u32 offset, u32 val);
extern si_t *ai_attach(uint pcidev, void *regs, uint bustype,
void *sdh, char **vars, uint *varsz);
extern void ai_detach(si_t *sih);
extern bool ai_pci_war16165(si_t *sih);
extern uint ai_coreid(si_t *sih);
extern uint ai_corerev(si_t *sih);
extern uint ai_corereg(si_t *sih, uint coreidx, uint regoff, uint mask,
uint val);
extern void ai_write_wrapperreg(si_t *sih, u32 offset, u32 val);
extern u32 ai_core_cflags(si_t *sih, u32 mask, u32 val);
extern u32 ai_core_sflags(si_t *sih, u32 mask, u32 val);
extern bool ai_iscoreup(si_t *sih);
extern uint ai_findcoreidx(si_t *sih, uint coreid, uint coreunit);
extern void *ai_setcoreidx(si_t *sih, uint coreidx);
extern void *ai_setcore(si_t *sih, uint coreid, uint coreunit);
extern void *ai_switch_core(si_t *sih, uint coreid, uint *origidx,
uint *intr_val);
extern void ai_restore_core(si_t *sih, uint coreid, uint intr_val);
extern void ai_core_reset(si_t *sih, u32 bits, u32 resetbits);
extern void ai_core_disable(si_t *sih, u32 bits);
extern u32 ai_alp_clock(si_t *sih);
extern u32 ai_ilp_clock(si_t *sih);
extern void ai_pci_setup(si_t *sih, uint coremask);
extern void ai_setint(si_t *sih, int siflag);
extern bool ai_backplane64(si_t *sih);
extern void ai_register_intr_callback(si_t *sih, void *intrsoff_fn,
void *intrsrestore_fn,
void *intrsenabled_fn, void *intr_arg);
extern void ai_deregister_intr_callback(si_t *sih);
extern void ai_clkctl_init(si_t *sih);
extern u16 ai_clkctl_fast_pwrup_delay(si_t *sih);
extern bool ai_clkctl_cc(si_t *sih, uint mode);
extern int ai_clkctl_xtal(si_t *sih, uint what, bool on);
extern bool ai_deviceremoved(si_t *sih);
extern u32 ai_gpiocontrol(si_t *sih, u32 mask, u32 val,
u8 priority);
extern bool ai_is_otp_disabled(si_t *sih);
extern bool ai_is_otp_powered(si_t *sih);
extern void ai_otp_power(si_t *sih, bool on);
extern bool ai_is_sprom_available(si_t *sih);
extern int ai_devpath(si_t *sih, char *path, int size);
extern char *ai_getdevpathvar(si_t *sih, const char *name);
extern int ai_getdevpathintvar(si_t *sih, const char *name);
extern void ai_pci_sleep(si_t *sih);
extern void ai_pci_down(si_t *sih);
extern void ai_pci_up(si_t *sih);
extern int ai_pci_fixcfg(si_t *sih);
extern void ai_chipcontrl_epa4331(si_t *sih, bool on);
extern void ai_epa_4313war(si_t *sih);
char *ai_getnvramflvar(si_t *sih, const char *name);
