struct rtas_t rtas = ;
EXPORT_SYMBOL(rtas);
DEFINE_SPINLOCK(rtas_data_buf_lock);
EXPORT_SYMBOL(rtas_data_buf_lock);
char rtas_data_buf[RTAS_DATA_BUF_SIZE] __cacheline_aligned;
EXPORT_SYMBOL(rtas_data_buf);
unsigned long rtas_rmo_buf;
void (*rtas_flash_term_hook)(int);
EXPORT_SYMBOL(rtas_flash_term_hook);
static unsigned long lock_rtas(void)
static void unlock_rtas(unsigned long flags)
static void call_rtas_display_status(char c)
static void call_rtas_display_status_delay(char c)
void __init udbg_init_rtas_panel(void)
static unsigned int rtas_putchar_token = RTAS_UNKNOWN_SERVICE;
static unsigned int rtas_getchar_token = RTAS_UNKNOWN_SERVICE;
static void udbg_rtascon_putc(char c)
static int udbg_rtascon_getc_poll(void)
static int udbg_rtascon_getc(void)
void __init udbg_init_rtas_console(void)
void rtas_progress(char *s, unsigned short hex)
EXPORT_SYMBOL(rtas_progress);
int rtas_token(const char *service)
EXPORT_SYMBOL(rtas_token);
int rtas_service_present(const char *service)
EXPORT_SYMBOL(rtas_service_present);
int rtas_get_error_log_max(void)
EXPORT_SYMBOL(rtas_get_error_log_max);
static char rtas_err_buf[RTAS_ERROR_LOG_MAX];
static int rtas_last_error_token;
static char *__fetch_rtas_last_error(char *altbuf)
#define get_errorlog_buffer()	kmalloc(RTAS_ERROR_LOG_MAX, GFP_KERNEL)
#define __fetch_rtas_last_error(x)	NULL
#define get_errorlog_buffer()		NULL
int rtas_call(int token, int nargs, int nret, int *outputs, ...)
EXPORT_SYMBOL(rtas_call);
unsigned int rtas_busy_delay_time(int status)
EXPORT_SYMBOL(rtas_busy_delay_time);
unsigned int rtas_busy_delay(int status)
EXPORT_SYMBOL(rtas_busy_delay);
static int rtas_error_rc(int rtas_rc)
int rtas_get_power_level(int powerdomain, int *level)
EXPORT_SYMBOL(rtas_get_power_level);
int rtas_set_power_level(int powerdomain, int level, int *setlevel)
EXPORT_SYMBOL(rtas_set_power_level);
int rtas_get_sensor(int sensor, int index, int *state)
EXPORT_SYMBOL(rtas_get_sensor);
bool rtas_indicator_present(int token, int *maxindex)
EXPORT_SYMBOL(rtas_indicator_present);
int rtas_set_indicator(int indicator, int index, int new_value)
EXPORT_SYMBOL(rtas_set_indicator);
int rtas_set_indicator_fast(int indicator, int index, int new_value)
void rtas_restart(char *cmd)
void rtas_power_off(void)
void rtas_halt(void)
static char rtas_os_term_buf[2048];
void rtas_os_term(char *str)
static int ibm_suspend_me_token = RTAS_UNKNOWN_SERVICE;
static int __rtas_suspend_last_cpu(struct rtas_suspend_me_data *data, int wake_when_done)
int rtas_suspend_last_cpu(struct rtas_suspend_me_data *data)
static int __rtas_suspend_cpu(struct rtas_suspend_me_data *data, int wake_when_done)
int rtas_suspend_cpu(struct rtas_suspend_me_data *data)
static void rtas_percpu_suspend_me(void *info)
int rtas_ibm_suspend_me(struct rtas_args *args)
int rtas_ibm_suspend_me(struct rtas_args *args)
asmlinkage int ppc_rtas(struct rtas_args __user *uargs)
void __init rtas_initialize(void)
int __init early_init_dt_scan_rtas(unsigned long node,
const char *uname, int depth, void *data)
static arch_spinlock_t timebase_lock;
static u64 timebase = 0;
void __cpuinit rtas_give_timebase(void)
void __cpuinit rtas_take_timebase(void)
