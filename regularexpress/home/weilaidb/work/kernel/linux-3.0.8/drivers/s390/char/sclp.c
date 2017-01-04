#define SCLP_HEADER		"sclp: "
static DEFINE_SPINLOCK(sclp_lock);
static sccb_mask_t sclp_receive_mask;
static sccb_mask_t sclp_send_mask;
static struct list_head sclp_reg_list;
static struct list_head sclp_req_queue;
static struct sclp_req sclp_read_req;
static struct sclp_req sclp_init_req;
static char sclp_read_sccb[PAGE_SIZE] __attribute__((__aligned__(PAGE_SIZE)));
static char sclp_init_sccb[PAGE_SIZE] __attribute__((__aligned__(PAGE_SIZE)));
static DECLARE_COMPLETION(sclp_request_queue_flushed);
static void sclp_suspend_req_cb(struct sclp_req *req, void *data)
static struct sclp_req sclp_suspend_req;
static struct timer_list sclp_request_timer;
static volatile enum sclp_init_state_t  sclp_init_state = sclp_init_state_uninitialized;
static volatile enum sclp_running_state_t  sclp_running_state = sclp_running_state_idle;
static volatile enum sclp_reading_state_t  sclp_reading_state = sclp_reading_state_idle;
static volatile enum sclp_activation_state_t  sclp_activation_state = sclp_activation_state_active;
static volatile enum sclp_mask_state_t  sclp_mask_state = sclp_mask_state_idle;
static enum sclp_suspend_state_t  sclp_suspend_state = sclp_suspend_state_running;
#define SCLP_INIT_RETRY		3
#define SCLP_MASK_RETRY		3
#define SCLP_BUSY_INTERVAL	10
#define SCLP_RETRY_INTERVAL	30
static void sclp_process_queue(void);
static void __sclp_make_read_req(void);
static int sclp_init_mask(int calculate);
static int sclp_init(void);
int
sclp_service_call(sclp_cmdw_t command, void *sccb)
static void
__sclp_queue_read_req(void)
static inline void
__sclp_set_request_timer(unsigned long time, void (*function)(unsigned long),
unsigned long data)
static void
sclp_request_timeout(unsigned long data)
static int
__sclp_start_request(struct sclp_req *req)
static void
sclp_process_queue(void)
static int __sclp_can_add_request(struct sclp_req *req)
int
sclp_add_request(struct sclp_req *req)
EXPORT_SYMBOL(sclp_add_request);
static int
sclp_dispatch_evbufs(struct sccb_header *sccb)
static void
sclp_read_cb(struct sclp_req *req, void *data)
static void __sclp_make_read_req(void)
static inline struct sclp_req *
__sclp_find_req(u32 sccb)
static void sclp_interrupt_handler(unsigned int ext_int_code,
unsigned int param32, unsigned long param64)
static inline u64
sclp_tod_from_jiffies(unsigned long jiffies)
void
sclp_sync_wait(void)
EXPORT_SYMBOL(sclp_sync_wait);
static void
sclp_dispatch_state_change(void)
struct sclp_statechangebuf  __attribute__((packed));
static void
sclp_state_change_cb(struct evbuf_header *evbuf)
static struct sclp_register sclp_state_change_event = ;
static inline void
__sclp_get_mask(sccb_mask_t *receive_mask, sccb_mask_t *send_mask)
int
sclp_register(struct sclp_register *reg)
EXPORT_SYMBOL(sclp_register);
void
sclp_unregister(struct sclp_register *reg)
EXPORT_SYMBOL(sclp_unregister);
int
sclp_remove_processed(struct sccb_header *sccb)
EXPORT_SYMBOL(sclp_remove_processed);
struct init_sccb  __attribute__((packed));
static inline void
__sclp_make_init_req(u32 receive_mask, u32 send_mask)
static int
sclp_init_mask(int calculate)
int
sclp_deactivate(void)
EXPORT_SYMBOL(sclp_deactivate);
int
sclp_reactivate(void)
EXPORT_SYMBOL(sclp_reactivate);
static void sclp_check_handler(unsigned int ext_int_code,
unsigned int param32, unsigned long param64)
static void
sclp_check_timeout(unsigned long data)
static int
sclp_check_interface(void)
static int
sclp_reboot_event(struct notifier_block *this, unsigned long event, void *ptr)
static struct notifier_block sclp_reboot_notifier = ;
static void sclp_pm_event(enum sclp_pm_event sclp_pm_event, int rollback)
static int sclp_freeze(struct device *dev)
static int sclp_undo_suspend(enum sclp_pm_event event)
static int sclp_thaw(struct device *dev)
static int sclp_restore(struct device *dev)
static const struct dev_pm_ops sclp_pm_ops = ;
static struct platform_driver sclp_pdrv = ;
static struct platform_device *sclp_pdev;
static int
sclp_init(void)
static int sclp_panic_notify(struct notifier_block *self,
unsigned long event, void *data)
static struct notifier_block sclp_on_panic_nb = ;
static __init int sclp_initcall(void)
arch_initcall(sclp_initcall);
