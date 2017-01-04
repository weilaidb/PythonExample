static unsigned char ras_log_buf[RTAS_ERROR_LOG_MAX];
static DEFINE_SPINLOCK(ras_log_buf_lock);
static char global_mce_data_buf[RTAS_ERROR_LOG_MAX];
static DEFINE_PER_CPU(__u64, mce_data_buf);
static int ras_get_sensor_state_token;
static int ras_check_exception_token;
#define EPOW_SENSOR_TOKEN	9
#define EPOW_SENSOR_INDEX	0
static irqreturn_t ras_epow_interrupt(int irq, void *dev_id);
static irqreturn_t ras_error_interrupt(int irq, void *dev_id);
static int __init init_ras_IRQ(void)
__initcall(init_ras_IRQ);
static irqreturn_t ras_epow_interrupt(int irq, void *dev_id)
static irqreturn_t ras_error_interrupt(int irq, void *dev_id)
#define VALID_FWNMI_BUFFER(A) \
((((A) >= 0x7000) && ((A) < 0x7ff0)) || \
(((A) >= rtas.base) && ((A) < (rtas.base + rtas.size - 16))))
static struct rtas_error_log *fwnmi_get_errinfo(struct pt_regs *regs)
static void fwnmi_release_errinfo(void)
int pSeries_system_reset_exception(struct pt_regs *regs)
static int recover_mce(struct pt_regs *regs, struct rtas_error_log *err)
int pSeries_machine_check_exception(struct pt_regs *regs)
