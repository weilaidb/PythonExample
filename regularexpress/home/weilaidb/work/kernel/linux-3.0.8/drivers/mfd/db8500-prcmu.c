#define PRCMU_FW_VERSION_OFFSET 0xA4
#define PRCMU_PROJECT_ID_8500V1_0 1
#define PRCMU_PROJECT_ID_8500V2_0 2
#define PRCMU_PROJECT_ID_8400V2_0 3
#define PRCM_AVS_BASE		0x2FC
#define PRCM_AVS_VBB_RET	(PRCM_AVS_BASE + 0x0)
#define PRCM_AVS_VBB_MAX_OPP	(PRCM_AVS_BASE + 0x1)
#define PRCM_AVS_VBB_100_OPP	(PRCM_AVS_BASE + 0x2)
#define PRCM_AVS_VBB_50_OPP	(PRCM_AVS_BASE + 0x3)
#define PRCM_AVS_VARM_MAX_OPP	(PRCM_AVS_BASE + 0x4)
#define PRCM_AVS_VARM_100_OPP	(PRCM_AVS_BASE + 0x5)
#define PRCM_AVS_VARM_50_OPP	(PRCM_AVS_BASE + 0x6)
#define PRCM_AVS_VARM_RET	(PRCM_AVS_BASE + 0x7)
#define PRCM_AVS_VAPE_100_OPP	(PRCM_AVS_BASE + 0x8)
#define PRCM_AVS_VAPE_50_OPP	(PRCM_AVS_BASE + 0x9)
#define PRCM_AVS_VMOD_100_OPP	(PRCM_AVS_BASE + 0xA)
#define PRCM_AVS_VMOD_50_OPP	(PRCM_AVS_BASE + 0xB)
#define PRCM_AVS_VSAFE		(PRCM_AVS_BASE + 0xC)
#define PRCM_AVS_VOLTAGE		0
#define PRCM_AVS_VOLTAGE_MASK		0x3f
#define PRCM_AVS_ISSLOWSTARTUP		6
#define PRCM_AVS_ISSLOWSTARTUP_MASK	(1 << PRCM_AVS_ISSLOWSTARTUP)
#define PRCM_AVS_ISMODEENABLE		7
#define PRCM_AVS_ISMODEENABLE_MASK	(1 << PRCM_AVS_ISMODEENABLE)
#define PRCM_BOOT_STATUS	0xFFF
#define PRCM_ROMCODE_A2P	0xFFE
#define PRCM_ROMCODE_P2A	0xFFD
#define PRCM_XP70_CUR_PWR_STATE 0xFFC
#define PRCM_SW_RST_REASON 0xFF8
#define _PRCM_MBOX_HEADER		0xFE8
#define PRCM_MBOX_HEADER_REQ_MB0	(_PRCM_MBOX_HEADER + 0x0)
#define PRCM_MBOX_HEADER_REQ_MB1	(_PRCM_MBOX_HEADER + 0x1)
#define PRCM_MBOX_HEADER_REQ_MB2	(_PRCM_MBOX_HEADER + 0x2)
#define PRCM_MBOX_HEADER_REQ_MB3	(_PRCM_MBOX_HEADER + 0x3)
#define PRCM_MBOX_HEADER_REQ_MB4	(_PRCM_MBOX_HEADER + 0x4)
#define PRCM_MBOX_HEADER_REQ_MB5	(_PRCM_MBOX_HEADER + 0x5)
#define PRCM_MBOX_HEADER_ACK_MB0	(_PRCM_MBOX_HEADER + 0x8)
#define PRCM_REQ_MB0 0xFDC
#define PRCM_REQ_MB1 0xFD0
#define PRCM_REQ_MB2 0xFC0
#define PRCM_REQ_MB3 0xE4C
#define PRCM_REQ_MB4 0xE48
#define PRCM_REQ_MB5 0xE44
#define PRCM_ACK_MB0 0xE08
#define PRCM_ACK_MB1 0xE04
#define PRCM_ACK_MB2 0xE00
#define PRCM_ACK_MB3 0xDFC
#define PRCM_ACK_MB4 0xDF8
#define PRCM_ACK_MB5 0xDF4
#define MB0H_POWER_STATE_TRANS		0
#define MB0H_CONFIG_WAKEUPS_EXE		1
#define MB0H_READ_WAKEUP_ACK		3
#define MB0H_CONFIG_WAKEUPS_SLEEP	4
#define MB0H_WAKEUP_EXE 2
#define MB0H_WAKEUP_SLEEP 5
#define PRCM_REQ_MB0_AP_POWER_STATE	(PRCM_REQ_MB0 + 0x0)
#define PRCM_REQ_MB0_AP_PLL_STATE	(PRCM_REQ_MB0 + 0x1)
#define PRCM_REQ_MB0_ULP_CLOCK_STATE	(PRCM_REQ_MB0 + 0x2)
#define PRCM_REQ_MB0_DO_NOT_WFI		(PRCM_REQ_MB0 + 0x3)
#define PRCM_REQ_MB0_WAKEUP_8500	(PRCM_REQ_MB0 + 0x4)
#define PRCM_REQ_MB0_WAKEUP_4500	(PRCM_REQ_MB0 + 0x8)
#define PRCM_ACK_MB0_AP_PWRSTTR_STATUS	(PRCM_ACK_MB0 + 0x0)
#define PRCM_ACK_MB0_READ_POINTER	(PRCM_ACK_MB0 + 0x1)
#define PRCM_ACK_MB0_WAKEUP_0_8500	(PRCM_ACK_MB0 + 0x4)
#define PRCM_ACK_MB0_WAKEUP_0_4500	(PRCM_ACK_MB0 + 0x8)
#define PRCM_ACK_MB0_WAKEUP_1_8500	(PRCM_ACK_MB0 + 0x1C)
#define PRCM_ACK_MB0_WAKEUP_1_4500	(PRCM_ACK_MB0 + 0x20)
#define PRCM_ACK_MB0_EVENT_4500_NUMBERS	20
#define MB1H_ARM_APE_OPP 0x0
#define MB1H_RESET_MODEM 0x2
#define MB1H_REQUEST_APE_OPP_100_VOLT 0x3
#define MB1H_RELEASE_APE_OPP_100_VOLT 0x4
#define MB1H_RELEASE_USB_WAKEUP 0x5
#define PRCM_REQ_MB1_ARM_OPP			(PRCM_REQ_MB1 + 0x0)
#define PRCM_REQ_MB1_APE_OPP			(PRCM_REQ_MB1 + 0x1)
#define PRCM_REQ_MB1_APE_OPP_100_RESTORE	(PRCM_REQ_MB1 + 0x4)
#define PRCM_REQ_MB1_ARM_OPP_100_RESTORE	(PRCM_REQ_MB1 + 0x8)
#define PRCM_ACK_MB1_CURRENT_ARM_OPP	(PRCM_ACK_MB1 + 0x0)
#define PRCM_ACK_MB1_CURRENT_APE_OPP	(PRCM_ACK_MB1 + 0x1)
#define PRCM_ACK_MB1_APE_VOLTAGE_STATUS	(PRCM_ACK_MB1 + 0x2)
#define PRCM_ACK_MB1_DVFS_STATUS	(PRCM_ACK_MB1 + 0x3)
#define MB2H_DPS	0x0
#define MB2H_AUTO_PWR	0x1
#define PRCM_REQ_MB2_SVA_MMDSP		(PRCM_REQ_MB2 + 0x0)
#define PRCM_REQ_MB2_SVA_PIPE		(PRCM_REQ_MB2 + 0x1)
#define PRCM_REQ_MB2_SIA_MMDSP		(PRCM_REQ_MB2 + 0x2)
#define PRCM_REQ_MB2_SIA_PIPE		(PRCM_REQ_MB2 + 0x3)
#define PRCM_REQ_MB2_SGA		(PRCM_REQ_MB2 + 0x4)
#define PRCM_REQ_MB2_B2R2_MCDE		(PRCM_REQ_MB2 + 0x5)
#define PRCM_REQ_MB2_ESRAM12		(PRCM_REQ_MB2 + 0x6)
#define PRCM_REQ_MB2_ESRAM34		(PRCM_REQ_MB2 + 0x7)
#define PRCM_REQ_MB2_AUTO_PM_SLEEP	(PRCM_REQ_MB2 + 0x8)
#define PRCM_REQ_MB2_AUTO_PM_IDLE	(PRCM_REQ_MB2 + 0xC)
#define PRCM_ACK_MB2_DPS_STATUS (PRCM_ACK_MB2 + 0x0)
#define HWACC_PWR_ST_OK 0xFE
#define MB3H_ANC	0x0
#define MB3H_SIDETONE	0x1
#define MB3H_SYSCLK	0xE
#define PRCM_REQ_MB3_ANC_FIR_COEFF	(PRCM_REQ_MB3 + 0x0)
#define PRCM_REQ_MB3_ANC_IIR_COEFF	(PRCM_REQ_MB3 + 0x20)
#define PRCM_REQ_MB3_ANC_SHIFTER	(PRCM_REQ_MB3 + 0x60)
#define PRCM_REQ_MB3_ANC_WARP		(PRCM_REQ_MB3 + 0x64)
#define PRCM_REQ_MB3_SIDETONE_FIR_GAIN	(PRCM_REQ_MB3 + 0x68)
#define PRCM_REQ_MB3_SIDETONE_FIR_COEFF	(PRCM_REQ_MB3 + 0x6C)
#define PRCM_REQ_MB3_SYSCLK_MGT		(PRCM_REQ_MB3 + 0x16C)
#define MB4H_DDR_INIT	0x0
#define MB4H_MEM_ST	0x1
#define MB4H_HOTDOG	0x12
#define MB4H_HOTMON	0x13
#define MB4H_HOT_PERIOD	0x14
#define PRCM_REQ_MB4_DDR_ST_AP_SLEEP_IDLE	(PRCM_REQ_MB4 + 0x0)
#define PRCM_REQ_MB4_DDR_ST_AP_DEEP_IDLE	(PRCM_REQ_MB4 + 0x1)
#define PRCM_REQ_MB4_ESRAM0_ST			(PRCM_REQ_MB4 + 0x3)
#define PRCM_REQ_MB4_HOTDOG_THRESHOLD		(PRCM_REQ_MB4 + 0x0)
#define PRCM_REQ_MB4_HOTMON_LOW			(PRCM_REQ_MB4 + 0x0)
#define PRCM_REQ_MB4_HOTMON_HIGH		(PRCM_REQ_MB4 + 0x1)
#define PRCM_REQ_MB4_HOTMON_CONFIG		(PRCM_REQ_MB4 + 0x2)
#define PRCM_REQ_MB4_HOT_PERIOD			(PRCM_REQ_MB4 + 0x0)
#define HOTMON_CONFIG_LOW			BIT(0)
#define HOTMON_CONFIG_HIGH			BIT(1)
#define PRCM_REQ_MB5_I2C_SLAVE_OP	(PRCM_REQ_MB5 + 0x0)
#define PRCM_REQ_MB5_I2C_HW_BITS	(PRCM_REQ_MB5 + 0x1)
#define PRCM_REQ_MB5_I2C_REG		(PRCM_REQ_MB5 + 0x2)
#define PRCM_REQ_MB5_I2C_VAL		(PRCM_REQ_MB5 + 0x3)
#define PRCMU_I2C_WRITE(slave) \
(((slave) << 1) | (cpu_is_u8500v2() ? BIT(6) : 0))
#define PRCMU_I2C_READ(slave) \
(((slave) << 1) | BIT(0) | (cpu_is_u8500v2() ? BIT(6) : 0))
#define PRCMU_I2C_STOP_EN		BIT(3)
#define PRCM_ACK_MB5_I2C_STATUS	(PRCM_ACK_MB5 + 0x1)
#define PRCM_ACK_MB5_I2C_VAL	(PRCM_ACK_MB5 + 0x3)
#define I2C_WR_OK 0x1
#define I2C_RD_OK 0x2
#define NUM_MB 8
#define MBOX_BIT BIT
#define ALL_MBOX_BITS (MBOX_BIT(NUM_MB) - 1)
#define WAKEUP_BIT_RTC BIT(0)
#define WAKEUP_BIT_RTT0 BIT(1)
#define WAKEUP_BIT_RTT1 BIT(2)
#define WAKEUP_BIT_HSI0 BIT(3)
#define WAKEUP_BIT_HSI1 BIT(4)
#define WAKEUP_BIT_CA_WAKE BIT(5)
#define WAKEUP_BIT_USB BIT(6)
#define WAKEUP_BIT_ABB BIT(7)
#define WAKEUP_BIT_ABB_FIFO BIT(8)
#define WAKEUP_BIT_SYSCLK_OK BIT(9)
#define WAKEUP_BIT_CA_SLEEP BIT(10)
#define WAKEUP_BIT_AC_WAKE_ACK BIT(11)
#define WAKEUP_BIT_SIDE_TONE_OK BIT(12)
#define WAKEUP_BIT_ANC_OK BIT(13)
#define WAKEUP_BIT_SW_ERROR BIT(14)
#define WAKEUP_BIT_AC_SLEEP_ACK BIT(15)
#define WAKEUP_BIT_ARM BIT(17)
#define WAKEUP_BIT_HOTMON_LOW BIT(18)
#define WAKEUP_BIT_HOTMON_HIGH BIT(19)
#define WAKEUP_BIT_MODEM_SW_RESET_REQ BIT(20)
#define WAKEUP_BIT_GPIO0 BIT(23)
#define WAKEUP_BIT_GPIO1 BIT(24)
#define WAKEUP_BIT_GPIO2 BIT(25)
#define WAKEUP_BIT_GPIO3 BIT(26)
#define WAKEUP_BIT_GPIO4 BIT(27)
#define WAKEUP_BIT_GPIO5 BIT(28)
#define WAKEUP_BIT_GPIO6 BIT(29)
#define WAKEUP_BIT_GPIO7 BIT(30)
#define WAKEUP_BIT_GPIO8 BIT(31)
#define IRQ_INDEX(_name) ((IRQ_PRCMU_##_name) - IRQ_PRCMU_BASE)
#define IRQ_ENTRY(_name)[IRQ_INDEX(_name)] = (WAKEUP_BIT_##_name)
static u32 prcmu_irq_bit[NUM_PRCMU_WAKEUPS] = ;
#define VALID_WAKEUPS (BIT(NUM_PRCMU_WAKEUP_INDICES) - 1)
#define WAKEUP_ENTRY(_name)[PRCMU_WAKEUP_INDEX_##_name] = (WAKEUP_BIT_##_name)
static u32 prcmu_wakeup_bit[NUM_PRCMU_WAKEUP_INDICES] = ;
static struct  mb0_transfer;
static struct  mb1_transfer;
static struct  mb2_transfer;
static struct  mb3_transfer;
static struct  mb4_transfer;
static struct  mb5_transfer;
static atomic_t ac_wake_req_state = ATOMIC_INIT(0);
static DEFINE_SPINLOCK(clkout_lock);
static DEFINE_SPINLOCK(gpiocr_lock);
static __iomem void *tcdm_base;
struct clk_mgt ;
static DEFINE_SPINLOCK(clk_mgt_lock);
#define CLK_MGT_ENTRY(_name)[PRCMU_##_name] =
struct clk_mgt clk_mgt[PRCMU_NUM_REG_CLOCKS] = ;
#define PRCMU_RESET_DSIPLL		0x00004000
#define PRCMU_UNCLAMP_DSIPLL		0x00400800
#define PRCMU_CLK_PLL_DIV_SHIFT		0
#define PRCMU_CLK_PLL_SW_SHIFT		5
#define PRCMU_CLK_38			(1 << 9)
#define PRCMU_CLK_38_SRC		(1 << 10)
#define PRCMU_CLK_38_DIV		(1 << 11)
#define PRCMU_DSI_CLOCK_SETTING		0x0000008C
#define PRCMU_DSI_CLOCK_SETTING_U8400	0x00000088
#define PRCMU_DPI_CLOCK_SETTING		((1 << PRCMU_CLK_PLL_SW_SHIFT) | \
(16 << PRCMU_CLK_PLL_DIV_SHIFT))
#define PRCMU_DSI_LP_CLOCK_SETTING	0x00000E00
#define PRCMU_PLLDSI_FREQ_SETTING	0x00040165
#define PRCMU_PLLDSI_FREQ_SETTING_U8400	0x00030146
#define PRCMU_ENABLE_PLLDSI		0x00000001
#define PRCMU_DISABLE_PLLDSI		0x00000000
#define PRCMU_RELEASE_RESET_DSS		0x0000400C
#define PRCMU_DSI_PLLOUT_SEL_SETTING	0x00000202
#define PRCMU_ENABLE_ESCAPE_CLOCK_DIV	0x07030101
#define PRCMU_DISABLE_ESCAPE_CLOCK_DIV	0x00030101
#define PRCMU_DSI_RESET_SW		0x00000007
#define PRCMU_PLLDSI_LOCKP_LOCKED	0x3
static struct  prcmu_version;
int prcmu_enable_dsipll(void)
int prcmu_disable_dsipll(void)
int prcmu_set_display_clocks(void)
void prcmu_enable_spi2(void)
void prcmu_disable_spi2(void)
bool prcmu_has_arm_maxopp(void)
bool prcmu_is_u8400(void)
int prcmu_get_boot_status(void)
int prcmu_set_rc_a2p(enum romcode_write val)
enum romcode_read prcmu_get_rc_p2a(void)
enum ap_pwrst prcmu_get_xp70_current_state(void)
int prcmu_config_clkout(u8 clkout, u8 source, u8 div)
int prcmu_set_power_state(u8 state, bool keep_ulp_clk, bool keep_ap_pll)
static void config_wakeups(void)
void prcmu_enable_wakeups(u32 wakeups)
void prcmu_config_abb_event_readout(u32 abb_events)
void prcmu_get_abb_event_buffer(void __iomem **buf)
int prcmu_set_arm_opp(u8 opp)
int prcmu_get_arm_opp(void)
int prcmu_get_ddr_opp(void)
int prcmu_set_ddr_opp(u8 opp)
int prcmu_set_ape_opp(u8 opp)
int prcmu_get_ape_opp(void)
int prcmu_request_ape_opp_100_voltage(bool enable)
int prcmu_release_usb_wakeup_state(void)
int prcmu_set_epod(u16 epod_id, u8 epod_state)
void prcmu_configure_auto_pm(struct prcmu_auto_pm_config *sleep,
struct prcmu_auto_pm_config *idle)
EXPORT_SYMBOL(prcmu_configure_auto_pm);
bool prcmu_is_auto_pm_enabled(void)
static int request_sysclk(bool enable)
static int request_timclk(bool enable)
static int request_reg_clock(u8 clock, bool enable)
int prcmu_request_clock(u8 clock, bool enable)
int prcmu_config_esram0_deep_sleep(u8 state)
int prcmu_config_hotdog(u8 threshold)
int prcmu_config_hotmon(u8 low, u8 high)
static int config_hot_period(u16 val)
int prcmu_start_temp_sense(u16 cycles32k)
int prcmu_stop_temp_sense(void)
int prcmu_set_clock_divider(u8 clock, u8 divider)
int prcmu_abb_read(u8 slave, u8 reg, u8 *value, u8 size)
int prcmu_abb_write(u8 slave, u8 reg, u8 *value, u8 size)
void prcmu_ac_wake_req(void)
void prcmu_ac_sleep_req()
bool prcmu_is_ac_wake_requested(void)
void prcmu_system_reset(u16 reset_code)
void prcmu_modem_reset(void)
static void ack_dbb_wakeup(void)
static inline void print_unknown_header_warning(u8 n, u8 header)
static bool read_mailbox_0(void)
static bool read_mailbox_1(void)
static bool read_mailbox_2(void)
static bool read_mailbox_3(void)
static bool read_mailbox_4(void)
static bool read_mailbox_5(void)
static bool read_mailbox_6(void)
static bool read_mailbox_7(void)
static bool (* const read_mailbox[NUM_MB])(void) = ;
static irqreturn_t prcmu_irq_handler(int irq, void *data)
static irqreturn_t prcmu_irq_thread_fn(int irq, void *data)
static void prcmu_mask_work(struct work_struct *work)
static void prcmu_irq_mask(struct irq_data *d)
static void prcmu_irq_unmask(struct irq_data *d)
static void noop(struct irq_data *d)
static struct irq_chip prcmu_irq_chip = ;
void __init prcmu_early_init(void)
static struct regulator_consumer_supply db8500_vape_consumers[] = ;
static struct regulator_consumer_supply db8500_vsmps2_consumers[] = ;
static struct regulator_consumer_supply db8500_b2r2_mcde_consumers[] = ;
static struct regulator_init_data db8500_regulators[DB8500_NUM_REGULATORS] = ;
static struct mfd_cell db8500_prcmu_devs[] = ;
static int __init db8500_prcmu_probe(struct platform_device *pdev)
static struct platform_driver db8500_prcmu_driver = ;
static int __init db8500_prcmu_init(void)
arch_initcall(db8500_prcmu_init);
MODULE_AUTHOR("Mattias Nilsson <mattias.i.nilsson@stericsson.com>");
MODULE_DESCRIPTION("DB8500 PRCM Unit driver");
MODULE_LICENSE("GPL v2");
