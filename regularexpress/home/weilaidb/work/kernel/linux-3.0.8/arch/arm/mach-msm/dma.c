#define MSM_DMOV_CHANNEL_COUNT 16
enum ;
static DEFINE_SPINLOCK(msm_dmov_lock);
static struct clk *msm_dmov_clk;
static unsigned int channel_active;
static struct list_head ready_commands[MSM_DMOV_CHANNEL_COUNT];
static struct list_head active_commands[MSM_DMOV_CHANNEL_COUNT];
unsigned int msm_dmov_print_mask = MSM_DMOV_PRINT_ERRORS;
#define MSM_DMOV_DPRINTF(mask, format, args...) \
do  while (0)
#define PRINT_ERROR(format, args...) \
MSM_DMOV_DPRINTF(MSM_DMOV_PRINT_ERRORS, format, args);
#define PRINT_IO(format, args...) \
MSM_DMOV_DPRINTF(MSM_DMOV_PRINT_IO, format, args);
#define PRINT_FLOW(format, args...) \
MSM_DMOV_DPRINTF(MSM_DMOV_PRINT_FLOW, format, args);
void msm_dmov_stop_cmd(unsigned id, struct msm_dmov_cmd *cmd, int graceful)
void msm_dmov_enqueue_cmd(unsigned id, struct msm_dmov_cmd *cmd)
struct msm_dmov_exec_cmdptr_cmd ;
static void
dmov_exec_cmdptr_complete_func(struct msm_dmov_cmd *_cmd,
unsigned int result,
struct msm_dmov_errdata *err)
int msm_dmov_exec_cmd(unsigned id, unsigned int cmdptr)
static irqreturn_t msm_datamover_irq_handler(int irq, void *dev_id)
static int __init msm_init_datamover(void)
arch_initcall(msm_init_datamover);
