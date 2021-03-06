#define _SMU_H
#define SMU_CMD_PARTITION_COMMAND		0x3e
#define   SMU_CMD_PARTITION_LATEST		0x01
#define   SMU_CMD_PARTITION_BASE		0x02
#define   SMU_CMD_PARTITION_UPDATE		0x03
#define SMU_CMD_FAN_COMMAND			0x4a
#define SMU_CMD_BATTERY_COMMAND			0x6f
#define   SMU_CMD_GET_BATTERY_INFO		0x00
#define SMU_CMD_RTC_COMMAND			0x8e
#define   SMU_CMD_RTC_SET_PWRUP_TIMER		0x00
#define   SMU_CMD_RTC_GET_PWRUP_TIMER		0x01
#define   SMU_CMD_RTC_STOP_PWRUP_TIMER		0x02
#define   SMU_CMD_RTC_SET_PRAM_BYTE_ACC		0x20
#define   SMU_CMD_RTC_SET_PRAM_AUTOINC		0x21
#define   SMU_CMD_RTC_SET_PRAM_LO_BYTES 	0x22
#define   SMU_CMD_RTC_SET_PRAM_HI_BYTES 	0x23
#define   SMU_CMD_RTC_GET_PRAM_BYTE		0x28
#define   SMU_CMD_RTC_GET_PRAM_LO_BYTES 	0x29
#define   SMU_CMD_RTC_GET_PRAM_HI_BYTES 	0x2a
#define	  SMU_CMD_RTC_SET_DATETIME		0x80
#define   SMU_CMD_RTC_GET_DATETIME		0x81
#define SMU_CMD_I2C_COMMAND			0x9a
#define   SMU_I2C_TRANSFER_SIMPLE	0x00
#define   SMU_I2C_TRANSFER_STDSUB	0x01
#define   SMU_I2C_TRANSFER_COMBINED	0x02
#define SMU_CMD_POWER_COMMAND			0xaa
#define   SMU_CMD_POWER_RESTART		       	"RESTART"
#define   SMU_CMD_POWER_SHUTDOWN		"SHUTDOWN"
#define   SMU_CMD_POWER_VOLTAGE_SLEW		"VSLEW"
#define SMU_CMD_READ_ADC			0xd8
#define SMU_CMD_MISC_df_COMMAND			0xdf
#define   SMU_CMD_MISC_df_SET_DISPLAY_LIT	0x02
#define   SMU_CMD_MISC_df_NMI_OPTION		0x04
#define   SMU_CMD_MISC_df_DIMM_OFFSET		0x99
#define SMU_CMD_VERSION_COMMAND			0xea
#define   SMU_VERSION_RUNNING			0x00
#define   SMU_VERSION_BASE			0x01
#define   SMU_VERSION_UPDATE			0x02
#define SMU_CMD_SWITCHES			0xdc
#define SMU_SWITCH_CASE_CLOSED			0x01
#define SMU_SWITCH_AC_POWER			0x04
#define SMU_SWITCH_POWER_SWITCH			0x08
#define SMU_CMD_MISC_ee_COMMAND			0xee
#define   SMU_CMD_MISC_ee_GET_DATABLOCK_REC	0x02
#define   SMU_CMD_MISC_ee_GET_WATTS		0x03
#define   SMU_CMD_MISC_ee_LEDS_CTRL		0x04
#define   SMU_CMD_MISC_ee_GET_DATA		0x05
#define SMU_CMD_POWER_EVENTS_COMMAND		0x8f
enum ;
enum ;
struct smu_cmd;
struct smu_cmd
;
extern int smu_queue_cmd(struct smu_cmd *cmd);
struct smu_simple_cmd
;
extern int smu_queue_simple(struct smu_simple_cmd *scmd, u8 command,
unsigned int data_len,
void (*done)(struct smu_cmd *cmd, void *misc),
void *misc,
...);
extern void smu_done_complete(struct smu_cmd *cmd, void *misc);
extern void smu_spinwait_cmd(struct smu_cmd *cmd);
static inline void smu_spinwait_simple(struct smu_simple_cmd *scmd)
extern void smu_poll(void);
extern int smu_init(void);
extern int smu_present(void);
struct platform_device;
extern struct platform_device *smu_get_ofdev(void);
extern void smu_shutdown(void);
extern void smu_restart(void);
struct rtc_time;
extern int smu_get_rtc_time(struct rtc_time *time, int spinwait);
extern int smu_set_rtc_time(struct rtc_time *time, int spinwait);
extern unsigned long smu_cmdbuf_abs;
#define SMU_I2C_READ_MAX	0x1d
#define SMU_I2C_WRITE_MAX	0x15
struct smu_i2c_param
;
struct smu_i2c_cmd
;
extern int smu_queue_i2c(struct smu_i2c_cmd *cmd);
struct smu_sdbp_header ;
#define SMU_U16_MIX(x)	le16_to_cpu(x);
#define SMU_U32_MIX(x)  ((((x) & 0xff00ff00u) >> 8)|(((x) & 0x00ff00ffu) << 8))
#define SMU_SDB_FVT_ID			0x12
struct smu_sdbp_fvt ;
#define SMU_SDB_CPUVCP_ID		0x21
struct smu_sdbp_cpuvcp ;
#define SMU_SDB_CPUDIODE_ID		0x18
struct smu_sdbp_cpudiode ;
#define SMU_SDB_SLOTSPOW_ID		0x78
struct smu_sdbp_slotspow ;
#define SMU_SDB_SENSORTREE_ID		0x25
struct smu_sdbp_sensortree ;
#define SMU_SDB_CPUPIDDATA_ID		0x17
struct smu_sdbp_cpupiddata ;
#define SMU_SDB_DEBUG_SWITCHES_ID	0x05
extern const struct smu_sdbp_header *smu_get_sdb_partition(int id,
unsigned int *size);
extern struct smu_sdbp_header *smu_sat_get_sdb_partition(unsigned int sat_id,
int id, unsigned int *size);
struct smu_user_cmd_hdr
;
struct smu_user_reply_hdr
;
