#define FALCON_BOARD_TYPE(_rev) (_rev >> 8)
#define FALCON_BOARD_MAJOR(_rev) ((_rev >> 4) & 0xf)
#define FALCON_BOARD_MINOR(_rev) (_rev & 0xf)
#define FALCON_BOARD_SFE4001 0x01
#define FALCON_BOARD_SFE4002 0x02
#define FALCON_BOARD_SFE4003 0x03
#define FALCON_BOARD_SFN4112F 0x52
#define FALCON_BOARD_TEMP_BIAS	15
#define FALCON_BOARD_TEMP_CRIT	(80 + FALCON_BOARD_TEMP_BIAS)
#define FALCON_JUNC_TEMP_MIN	0
#define FALCON_JUNC_TEMP_MAX	90
#define FALCON_JUNC_TEMP_CRIT	125
#define LM87_REG_TEMP_HW_INT_LOCK	0x13
#define LM87_REG_TEMP_HW_EXT_LOCK	0x14
#define LM87_REG_TEMP_HW_INT		0x17
#define LM87_REG_TEMP_HW_EXT		0x18
#define LM87_REG_TEMP_EXT1		0x26
#define LM87_REG_TEMP_INT		0x27
#define LM87_REG_ALARMS1		0x41
#define LM87_REG_ALARMS2		0x42
#define LM87_IN_LIMITS(nr, _min, _max)			\
0x2B + (nr) * 2, _max, 0x2C + (nr) * 2, _min
#define LM87_AIN_LIMITS(nr, _min, _max)			\
0x3B + (nr), _max, 0x1A + (nr), _min
#define LM87_TEMP_INT_LIMITS(_min, _max)		\
0x39, _max, 0x3A, _min
#define LM87_TEMP_EXT1_LIMITS(_min, _max)		\
0x37, _max, 0x38, _min
#define LM87_ALARM_TEMP_INT		0x10
#define LM87_ALARM_TEMP_EXT1		0x20
#if defined(CONFIG_SENSORS_LM87) || defined(CONFIG_SENSORS_LM87_MODULE)
static int efx_poke_lm87(struct i2c_client *client, const u8 *reg_values)
static const u8 falcon_lm87_common_regs[] = ;
static int efx_init_lm87(struct efx_nic *efx, struct i2c_board_info *info,
const u8 *reg_values)
static void efx_fini_lm87(struct efx_nic *efx)
static int efx_check_lm87(struct efx_nic *efx, unsigned mask)
static inline int
efx_init_lm87(struct efx_nic *efx, struct i2c_board_info *info,
const u8 *reg_values)
static inline void efx_fini_lm87(struct efx_nic *efx)
static inline int efx_check_lm87(struct efx_nic *efx, unsigned mask)
#define	PCA9539 0x74
#define	P0_IN 0x00
#define	P0_OUT 0x02
#define	P0_INVERT 0x04
#define	P0_CONFIG 0x06
#define	P0_EN_1V0X_LBN 0
#define	P0_EN_1V0X_WIDTH 1
#define	P0_EN_1V2_LBN 1
#define	P0_EN_1V2_WIDTH 1
#define	P0_EN_2V5_LBN 2
#define	P0_EN_2V5_WIDTH 1
#define	P0_EN_3V3X_LBN 3
#define	P0_EN_3V3X_WIDTH 1
#define	P0_EN_5V_LBN 4
#define	P0_EN_5V_WIDTH 1
#define	P0_SHORTEN_JTAG_LBN 5
#define	P0_SHORTEN_JTAG_WIDTH 1
#define	P0_X_TRST_LBN 6
#define	P0_X_TRST_WIDTH 1
#define	P0_DSP_RESET_LBN 7
#define	P0_DSP_RESET_WIDTH 1
#define	P1_IN 0x01
#define	P1_OUT 0x03
#define	P1_INVERT 0x05
#define	P1_CONFIG 0x07
#define	P1_AFE_PWD_LBN 0
#define	P1_AFE_PWD_WIDTH 1
#define	P1_DSP_PWD25_LBN 1
#define	P1_DSP_PWD25_WIDTH 1
#define	P1_RESERVED_LBN 2
#define	P1_RESERVED_WIDTH 2
#define	P1_SPARE_LBN 4
#define	P1_SPARE_WIDTH 4
#define MAX664X_REG_RSL		0x02
#define MAX664X_REG_WLHO	0x0B
static void sfe4001_poweroff(struct efx_nic *efx)
static int sfe4001_poweron(struct efx_nic *efx)
static ssize_t show_phy_flash_cfg(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_phy_flash_cfg(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(phy_flash_cfg, 0644, show_phy_flash_cfg, set_phy_flash_cfg);
static void sfe4001_fini(struct efx_nic *efx)
static int sfe4001_check_hw(struct efx_nic *efx)
static struct i2c_board_info sfe4001_hwmon_info = ;
static int sfe4001_init(struct efx_nic *efx)
static u8 sfe4002_lm87_channel = 0x03;
static const u8 sfe4002_lm87_regs[] = ;
static struct i2c_board_info sfe4002_hwmon_info = ;
#define SFE4002_FAULT_LED (2)
#define SFE4002_RX_LED    (0)
#define SFE4002_TX_LED    (1)
static void sfe4002_init_phy(struct efx_nic *efx)
static void sfe4002_set_id_led(struct efx_nic *efx, enum efx_led_mode mode)
static int sfe4002_check_hw(struct efx_nic *efx)
static int sfe4002_init(struct efx_nic *efx)
static u8 sfn4112f_lm87_channel = 0x03;
static const u8 sfn4112f_lm87_regs[] = ;
static struct i2c_board_info sfn4112f_hwmon_info = ;
#define SFN4112F_ACT_LED	0
#define SFN4112F_LINK_LED	1
static void sfn4112f_init_phy(struct efx_nic *efx)
static void sfn4112f_set_id_led(struct efx_nic *efx, enum efx_led_mode mode)
static int sfn4112f_check_hw(struct efx_nic *efx)
static int sfn4112f_init(struct efx_nic *efx)
static u8 sfe4003_lm87_channel = 0x03;
static const u8 sfe4003_lm87_regs[] = ;
static struct i2c_board_info sfe4003_hwmon_info = ;
#define SFE4003_RED_LED_GPIO	11
#define SFE4003_LED_ON		1
#define SFE4003_LED_OFF		0
static void sfe4003_set_id_led(struct efx_nic *efx, enum efx_led_mode mode)
static void sfe4003_init_phy(struct efx_nic *efx)
static int sfe4003_check_hw(struct efx_nic *efx)
static int sfe4003_init(struct efx_nic *efx)
static const struct falcon_board_type board_types[] = ;
int falcon_probe_board(struct efx_nic *efx, u16 revision_info)
