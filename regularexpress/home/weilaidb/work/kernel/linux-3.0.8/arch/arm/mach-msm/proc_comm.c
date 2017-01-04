static inline void msm_a2m_int(uint32_t irq)
static inline void notify_other_proc_comm(void)
#define APP_COMMAND 0x00
#define APP_STATUS  0x04
#define APP_DATA1   0x08
#define APP_DATA2   0x0C
#define MDM_COMMAND 0x10
#define MDM_STATUS  0x14
#define MDM_DATA1   0x18
#define MDM_DATA2   0x1C
static DEFINE_SPINLOCK(proc_comm_lock);
int (*msm_check_for_modem_crash)(void);
static int proc_comm_wait_for(void __iomem *addr, unsigned value)
int msm_proc_comm(unsigned cmd, unsigned *data1, unsigned *data2)
void __init proc_comm_boot_wait(void)
