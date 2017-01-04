#define __MFD_DB8500_PRCMU_H
enum state ;
enum ret_state ;
enum clk_arm ;
enum clk_gen ;
enum romcode_write ;
enum romcode_read ;
enum ap_pwrst ;
enum ap_pwrst_trans ;
enum ddr_pwrst ;
enum arm_opp ;
enum ape_opp ;
enum hw_acc_state ;
enum ap_pwrsttr_status ;
enum dvfs_stat ;
enum sva_mmdsp_stat ;
enum sia_mmdsp_stat ;
enum mbox_to_arm_err ;
enum hw_acc ;
enum cs_pwrmgt ;
enum sia_sva_pwr_policy ;
enum auto_enable ;
enum prcmu_wakeup_index ;
#define PRCMU_WAKEUP(_name) (BIT(PRCMU_WAKEUP_INDEX_##_name))
#define PRCMU_QOS_APE_OPP 1
#define PRCMU_QOS_DDR_OPP 2
#define PRCMU_QOS_DEFAULT_VALUE -1
enum hw_acc_dev ;
#define EPOD_ID_SVAMMDSP	0
#define EPOD_ID_SVAPIPE		1
#define EPOD_ID_SIAMMDSP	2
#define EPOD_ID_SIAPIPE		3
#define EPOD_ID_SGA		4
#define EPOD_ID_B2R2_MCDE	5
#define EPOD_ID_ESRAM12		6
#define EPOD_ID_ESRAM34		7
#define NUM_EPOD_ID		8
#define EPOD_STATE_NO_CHANGE	0x00
#define EPOD_STATE_OFF		0x01
#define EPOD_STATE_RAMRET	0x02
#define EPOD_STATE_ON_CLK_OFF	0x03
#define EPOD_STATE_ON		0x04
#define PRCMU_CLKSRC_CLK38M		0x00
#define PRCMU_CLKSRC_ACLK		0x01
#define PRCMU_CLKSRC_SYSCLK		0x02
#define PRCMU_CLKSRC_LCDCLK		0x03
#define PRCMU_CLKSRC_SDMMCCLK		0x04
#define PRCMU_CLKSRC_TVCLK		0x05
#define PRCMU_CLKSRC_TIMCLK		0x06
#define PRCMU_CLKSRC_CLK009		0x07
#define PRCMU_CLKSRC_SIAMMDSPCLK	0x40
#define PRCMU_CLKSRC_I2CCLK		0x41
#define PRCMU_CLKSRC_MSP02CLK		0x42
#define PRCMU_CLKSRC_ARMPLL_OBSCLK	0x43
#define PRCMU_CLKSRC_HSIRXCLK		0x44
#define PRCMU_CLKSRC_HSITXCLK		0x45
#define PRCMU_CLKSRC_ARMCLKFIX		0x46
#define PRCMU_CLKSRC_HDMICLK		0x47
#define PRCMU_AUTO_PM_OFF 0
#define PRCMU_AUTO_PM_ON 1
#define PRCMU_AUTO_PM_POWER_ON_HSEM BIT(0)
#define PRCMU_AUTO_PM_POWER_ON_ABB_FIFO_IT BIT(1)
enum prcmu_auto_pm_policy ;
struct prcmu_auto_pm_config ;
enum ddr_opp ;
enum prcmu_clock ;
#define ESRAM0_DEEP_SLEEP_STATE_OFF 1
#define ESRAM0_DEEP_SLEEP_STATE_RET 2
void __init prcmu_early_init(void);
int prcmu_set_display_clocks(void);
int prcmu_disable_dsipll(void);
int prcmu_enable_dsipll(void);
static inline void __init prcmu_early_init(void)
int prcmu_set_rc_a2p(enum romcode_write);
enum romcode_read prcmu_get_rc_p2a(void);
enum ap_pwrst prcmu_get_xp70_current_state(void);
int prcmu_set_power_state(u8 state, bool keep_ulp_clk, bool keep_ap_pll);
void prcmu_enable_wakeups(u32 wakeups);
static inline void prcmu_disable_wakeups(void)
void prcmu_config_abb_event_readout(u32 abb_events);
void prcmu_get_abb_event_buffer(void __iomem **buf);
int prcmu_set_arm_opp(u8 opp);
int prcmu_get_arm_opp(void);
bool prcmu_has_arm_maxopp(void);
bool prcmu_is_u8400(void);
int prcmu_set_ape_opp(u8 opp);
int prcmu_get_ape_opp(void);
int prcmu_request_ape_opp_100_voltage(bool enable);
int prcmu_release_usb_wakeup_state(void);
int prcmu_set_ddr_opp(u8 opp);
int prcmu_get_ddr_opp(void);
unsigned long prcmu_qos_get_cpufreq_opp_delay(void);
void prcmu_qos_set_cpufreq_opp_delay(unsigned long);
int prcmu_set_hwacc(u16 hw_acc_dev, u8 state);
int prcmu_set_epod(u16 epod_id, u8 epod_state);
void prcmu_configure_auto_pm(struct prcmu_auto_pm_config *sleep,
struct prcmu_auto_pm_config *idle);
bool prcmu_is_auto_pm_enabled(void);
int prcmu_config_clkout(u8 clkout, u8 source, u8 div);
int prcmu_request_clock(u8 clock, bool enable);
int prcmu_set_clock_divider(u8 clock, u8 divider);
int prcmu_config_esram0_deep_sleep(u8 state);
int prcmu_config_hotdog(u8 threshold);
int prcmu_config_hotmon(u8 low, u8 high);
int prcmu_start_temp_sense(u16 cycles32k);
int prcmu_stop_temp_sense(void);
int prcmu_abb_read(u8 slave, u8 reg, u8 *value, u8 size);
int prcmu_abb_write(u8 slave, u8 reg, u8 *value, u8 size);
void prcmu_ac_wake_req(void);
void prcmu_ac_sleep_req(void);
void prcmu_system_reset(u16 reset_code);
void prcmu_modem_reset(void);
bool prcmu_is_ac_wake_requested(void);
void prcmu_enable_spi2(void);
void prcmu_disable_spi2(void);
static inline int prcmu_set_rc_a2p(enum romcode_write code)
static inline enum romcode_read prcmu_get_rc_p2a(void)
static inline enum ap_pwrst prcmu_get_xp70_current_state(void)
static inline int prcmu_set_power_state(u8 state, bool keep_ulp_clk,
bool keep_ap_pll)
static inline void prcmu_enable_wakeups(u32 wakeups)
static inline void prcmu_disable_wakeups(void)
static inline void prcmu_config_abb_event_readout(u32 abb_events)
static inline int prcmu_set_arm_opp(u8 opp)
static inline int prcmu_get_arm_opp(void)
static bool prcmu_has_arm_maxopp(void)
static bool prcmu_is_u8400(void)
static inline int prcmu_set_ape_opp(u8 opp)
static inline int prcmu_get_ape_opp(void)
static inline int prcmu_request_ape_opp_100_voltage(bool enable)
static inline int prcmu_release_usb_wakeup_state(void)
static inline int prcmu_set_ddr_opp(u8 opp)
static inline int prcmu_get_ddr_opp(void)
static inline unsigned long prcmu_qos_get_cpufreq_opp_delay(void)
static inline void prcmu_qos_set_cpufreq_opp_delay(unsigned long n)
static inline int prcmu_set_hwacc(u16 hw_acc_dev, u8 state)
static inline void prcmu_configure_auto_pm(struct prcmu_auto_pm_config *sleep,
struct prcmu_auto_pm_config *idle)
static inline bool prcmu_is_auto_pm_enabled(void)
static inline int prcmu_config_clkout(u8 clkout, u8 source, u8 div)
static inline int prcmu_request_clock(u8 clock, bool enable)
static inline int prcmu_set_clock_divider(u8 clock, u8 divider)
int prcmu_config_esram0_deep_sleep(u8 state)
static inline int prcmu_config_hotdog(u8 threshold)
static inline int prcmu_config_hotmon(u8 low, u8 high)
static inline int prcmu_start_temp_sense(u16 cycles32k)
static inline int prcmu_stop_temp_sense(void)
static inline int prcmu_abb_read(u8 slave, u8 reg, u8 *value, u8 size)
static inline int prcmu_abb_write(u8 slave, u8 reg, u8 *value, u8 size)
static inline void prcmu_ac_wake_req(void)
static inline void prcmu_ac_sleep_req(void)
static inline void prcmu_system_reset(u16 reset_code)
static inline void prcmu_modem_reset(void)
static inline bool prcmu_is_ac_wake_requested(void)
static inline int prcmu_set_display_clocks(void)
static inline int prcmu_disable_dsipll(void)
static inline int prcmu_enable_dsipll(void)
static inline int prcmu_enable_spi2(void)
static inline int prcmu_disable_spi2(void)
int prcmu_qos_requirement(int pm_qos_class);
int prcmu_qos_add_requirement(int pm_qos_class, char *name, s32 value);
int prcmu_qos_update_requirement(int pm_qos_class, char *name, s32 new_value);
void prcmu_qos_remove_requirement(int pm_qos_class, char *name);
int prcmu_qos_add_notifier(int prcmu_qos_class,
struct notifier_block *notifier);
int prcmu_qos_remove_notifier(int prcmu_qos_class,
struct notifier_block *notifier);
static inline int prcmu_qos_requirement(int prcmu_qos_class)
static inline int prcmu_qos_add_requirement(int prcmu_qos_class,
char *name, s32 value)
static inline int prcmu_qos_update_requirement(int prcmu_qos_class,
char *name, s32 new_value)
static inline void prcmu_qos_remove_requirement(int prcmu_qos_class, char *name)
static inline int prcmu_qos_add_notifier(int prcmu_qos_class,
struct notifier_block *notifier)
static inline int prcmu_qos_remove_notifier(int prcmu_qos_class,
struct notifier_block *notifier)
