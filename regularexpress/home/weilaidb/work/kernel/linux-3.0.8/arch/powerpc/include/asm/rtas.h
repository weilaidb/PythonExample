#define _POWERPC_RTAS_H
#define RTAS_UNKNOWN_SERVICE (-1)
#define RTAS_INSTANTIATE_MAX (1ULL<<30)
#define RTAS_RMOBUF_MAX (64 * 1024)
#define RTAS_NOT_SUSPENDABLE	-9004
#define RTAS_BUSY		-2
#define RTAS_EXTENDED_DELAY_MIN	9900
#define RTAS_EXTENDED_DELAY_MAX	9905
typedef u32 rtas_arg_t;
struct rtas_args ;
struct rtas_t ;
struct rtas_suspend_me_data ;
#define RTAS_INTERNAL_ERROR		0x80000000
#define RTAS_EPOW_WARNING		0x40000000
#define RTAS_POWERMGM_EVENTS		0x20000000
#define RTAS_HOTPLUG_EVENTS		0x10000000
#define RTAS_IO_EVENTS			0x08000000
#define RTAS_EVENT_SCAN_ALL_EVENTS	0xffffffff
#define RTAS_SEVERITY_FATAL		0x5
#define RTAS_SEVERITY_ERROR		0x4
#define RTAS_SEVERITY_ERROR_SYNC	0x3
#define RTAS_SEVERITY_WARNING		0x2
#define RTAS_SEVERITY_EVENT		0x1
#define RTAS_SEVERITY_NO_ERROR		0x0
#define RTAS_DISP_FULLY_RECOVERED	0x0
#define RTAS_DISP_LIMITED_RECOVERY	0x1
#define RTAS_DISP_NOT_RECOVERED		0x2
#define RTAS_INITIATOR_UNKNOWN		0x0
#define RTAS_INITIATOR_CPU		0x1
#define RTAS_INITIATOR_PCI		0x2
#define RTAS_INITIATOR_ISA		0x3
#define RTAS_INITIATOR_MEMORY		0x4
#define RTAS_INITIATOR_POWERMGM		0x5
#define RTAS_TARGET_UNKNOWN		0x0
#define RTAS_TARGET_CPU			0x1
#define RTAS_TARGET_PCI			0x2
#define RTAS_TARGET_ISA			0x3
#define RTAS_TARGET_MEMORY		0x4
#define RTAS_TARGET_POWERMGM		0x5
#define RTAS_TYPE_RETRY			0x01
#define RTAS_TYPE_TCE_ERR		0x02
#define RTAS_TYPE_INTERN_DEV_FAIL	0x03
#define RTAS_TYPE_TIMEOUT		0x04
#define RTAS_TYPE_DATA_PARITY		0x05
#define RTAS_TYPE_ADDR_PARITY		0x06
#define RTAS_TYPE_CACHE_PARITY		0x07
#define RTAS_TYPE_ADDR_INVALID		0x08
#define RTAS_TYPE_ECC_UNCORR		0x09
#define RTAS_TYPE_ECC_CORR		0x0a
#define RTAS_TYPE_EPOW			0x40
#define RTAS_TYPE_PLATFORM		0xE0
#define RTAS_TYPE_IO			0xE1
#define RTAS_TYPE_INFO			0xE2
#define RTAS_TYPE_DEALLOC		0xE3
#define RTAS_TYPE_DUMP			0xE4
#define RTAS_TYPE_PMGM_POWER_SW_ON	0x60
#define RTAS_TYPE_PMGM_POWER_SW_OFF	0x61
#define RTAS_TYPE_PMGM_LID_OPEN		0x62
#define RTAS_TYPE_PMGM_LID_CLOSE	0x63
#define RTAS_TYPE_PMGM_SLEEP_BTN	0x64
#define RTAS_TYPE_PMGM_WAKE_BTN		0x65
#define RTAS_TYPE_PMGM_BATTERY_WARN	0x66
#define RTAS_TYPE_PMGM_BATTERY_CRIT	0x67
#define RTAS_TYPE_PMGM_SWITCH_TO_BAT	0x68
#define RTAS_TYPE_PMGM_SWITCH_TO_AC	0x69
#define RTAS_TYPE_PMGM_KBD_OR_MOUSE	0x6a
#define RTAS_TYPE_PMGM_ENCLOS_OPEN	0x6b
#define RTAS_TYPE_PMGM_ENCLOS_CLOSED	0x6c
#define RTAS_TYPE_PMGM_RING_INDICATE	0x6d
#define RTAS_TYPE_PMGM_LAN_ATTENTION	0x6e
#define RTAS_TYPE_PMGM_TIME_ALARM	0x6f
#define RTAS_TYPE_PMGM_CONFIG_CHANGE	0x70
#define RTAS_TYPE_PMGM_SERVICE_PROC	0x71
#define RTAS_VECTOR_EXTERNAL_INTERRUPT	0x500
struct rtas_error_log ;
#define RTAS_V6EXT_LOG_FORMAT_EVENT_LOG	14
#define RTAS_V6EXT_COMPANY_ID_IBM	(('I' << 24) | ('B' << 16) | ('M' << 8))
struct rtas_ext_event_log_v6 ;
extern void (*rtas_flash_term_hook)(int);
extern struct rtas_t rtas;
extern void enter_rtas(unsigned long);
extern int rtas_token(const char *service);
extern int rtas_service_present(const char *service);
extern int rtas_call(int token, int, int, int *, ...);
extern void rtas_restart(char *cmd);
extern void rtas_power_off(void);
extern void rtas_halt(void);
extern void rtas_os_term(char *str);
extern int rtas_get_sensor(int sensor, int index, int *state);
extern int rtas_get_power_level(int powerdomain, int *level);
extern int rtas_set_power_level(int powerdomain, int level, int *setlevel);
extern bool rtas_indicator_present(int token, int *maxindex);
extern int rtas_set_indicator(int indicator, int index, int new_value);
extern int rtas_set_indicator_fast(int indicator, int index, int new_value);
extern void rtas_progress(char *s, unsigned short hex);
extern void rtas_initialize(void);
extern int rtas_suspend_cpu(struct rtas_suspend_me_data *data);
extern int rtas_suspend_last_cpu(struct rtas_suspend_me_data *data);
extern int rtas_ibm_suspend_me(struct rtas_args *);
struct rtc_time;
extern unsigned long rtas_get_boot_time(void);
extern void rtas_get_rtc_time(struct rtc_time *rtc_time);
extern int rtas_set_rtc_time(struct rtc_time *rtc_time);
extern unsigned int rtas_busy_delay_time(int status);
extern unsigned int rtas_busy_delay(int status);
extern int early_init_dt_scan_rtas(unsigned long node,
const char *uname, int depth, void *data);
extern void pSeries_log_error(char *buf, unsigned int err_type, int fatal);
#define ERR_FLAG_ALREADY_LOGGED	0x0
#define ERR_FLAG_BOOT		0x1
#define ERR_TYPE_RTAS_LOG	0x2
#define ERR_TYPE_KERNEL_PANIC	0x4
#define ERR_TYPE_MASK	(ERR_TYPE_RTAS_LOG | ERR_TYPE_KERNEL_PANIC)
#define RTAS_DEBUG KERN_DEBUG "RTAS: "
#define RTAS_ERROR_LOG_MAX 2048
extern int rtas_get_error_log_max(void);
#define EVENT_SCAN_ALL_EVENTS	0xf0000000
#define SURVEILLANCE_TOKEN	9000
#define LOG_NUMBER		64
#define LOG_NUMBER_MASK		(LOG_NUMBER-1)
#define RTAS_DATA_BUF_SIZE 4096
extern spinlock_t rtas_data_buf_lock;
extern char rtas_data_buf[RTAS_DATA_BUF_SIZE];
extern unsigned long rtas_rmo_buf;
#define GLOBAL_INTERRUPT_QUEUE 9005
static inline u32 rtas_config_addr(int busno, int devfn, int reg)
extern void __cpuinit rtas_give_timebase(void);
extern void __cpuinit rtas_take_timebase(void);
