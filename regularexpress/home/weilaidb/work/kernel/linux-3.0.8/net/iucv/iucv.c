#define KMSG_COMPONENT "iucv"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define IUCV_IPSRCCLS	0x01
#define IUCV_IPTRGCLS	0x01
#define IUCV_IPFGPID	0x02
#define IUCV_IPFGMID	0x04
#define IUCV_IPNORPY	0x10
#define IUCV_IPALL	0x80
static int iucv_bus_match(struct device *dev, struct device_driver *drv)
enum iucv_pm_states ;
static enum iucv_pm_states iucv_pm_state;
static int iucv_pm_prepare(struct device *);
static void iucv_pm_complete(struct device *);
static int iucv_pm_freeze(struct device *);
static int iucv_pm_thaw(struct device *);
static int iucv_pm_restore(struct device *);
static const struct dev_pm_ops iucv_pm_ops = ;
struct bus_type iucv_bus = ;
EXPORT_SYMBOL(iucv_bus);
struct device *iucv_root;
EXPORT_SYMBOL(iucv_root);
static int iucv_available;
struct iucv_irq_data ;
struct iucv_irq_list ;
static struct iucv_irq_data *iucv_irq_data[NR_CPUS];
static cpumask_t iucv_buffer_cpumask = ;
static cpumask_t iucv_irq_cpumask = ;
static LIST_HEAD(iucv_task_queue);
static void iucv_tasklet_fn(unsigned long);
static DECLARE_TASKLET(iucv_tasklet, iucv_tasklet_fn,0);
static LIST_HEAD(iucv_work_queue);
static void iucv_work_fn(struct work_struct *work);
static DECLARE_WORK(iucv_work, iucv_work_fn);
static DEFINE_SPINLOCK(iucv_queue_lock);
enum iucv_command_codes ;
static char iucv_error_no_listener[16] = "NO LISTENER";
static char iucv_error_no_memory[16] = "NO MEMORY";
static char iucv_error_pathid[16] = "INVALID PATHID";
static LIST_HEAD(iucv_handler_list);
static struct iucv_path **iucv_path_table;
static unsigned long iucv_max_pathid;
static DEFINE_SPINLOCK(iucv_table_lock);
static int iucv_active_cpu = -1;
static DEFINE_MUTEX(iucv_register_mutex);
static int iucv_nonsmp_handler;
struct iucv_cmd_control  __attribute__ ((packed,aligned(8)));
struct iucv_cmd_dpl  __attribute__ ((packed,aligned(8)));
struct iucv_cmd_db  __attribute__ ((packed,aligned(8)));
struct iucv_cmd_purge  __attribute__ ((packed,aligned(8)));
struct iucv_cmd_set_mask  __attribute__ ((packed,aligned(8)));
union iucv_param ;
static union iucv_param *iucv_param[NR_CPUS];
static union iucv_param *iucv_param_irq[NR_CPUS];
static inline int iucv_call_b2f0(int command, union iucv_param *parm)
static int iucv_query_maxconn(void)
static void iucv_allow_cpu(void *data)
static void iucv_block_cpu(void *data)
static void iucv_block_cpu_almost(void *data)
static void iucv_declare_cpu(void *data)
static void iucv_retrieve_cpu(void *data)
static void iucv_setmask_mp(void)
static void iucv_setmask_up(void)
static int iucv_enable(void)
static void iucv_disable(void)
static int __cpuinit iucv_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
static struct notifier_block __refdata iucv_cpu_notifier = ;
static int iucv_sever_pathid(u16 pathid, u8 userdata[16])
static void __iucv_cleanup_queue(void *dummy)
static void iucv_cleanup_queue(void)
int iucv_register(struct iucv_handler *handler, int smp)
EXPORT_SYMBOL(iucv_register);
void iucv_unregister(struct iucv_handler *handler, int smp)
EXPORT_SYMBOL(iucv_unregister);
static int iucv_reboot_event(struct notifier_block *this,
unsigned long event, void *ptr)
static struct notifier_block iucv_reboot_notifier = ;
int iucv_path_accept(struct iucv_path *path, struct iucv_handler *handler,
u8 userdata[16], void *private)
EXPORT_SYMBOL(iucv_path_accept);
int iucv_path_connect(struct iucv_path *path, struct iucv_handler *handler,
u8 userid[8], u8 system[8], u8 userdata[16],
void *private)
EXPORT_SYMBOL(iucv_path_connect);
int iucv_path_quiesce(struct iucv_path *path, u8 userdata[16])
EXPORT_SYMBOL(iucv_path_quiesce);
int iucv_path_resume(struct iucv_path *path, u8 userdata[16])
int iucv_path_sever(struct iucv_path *path, u8 userdata[16])
EXPORT_SYMBOL(iucv_path_sever);
int iucv_message_purge(struct iucv_path *path, struct iucv_message *msg,
u32 srccls)
EXPORT_SYMBOL(iucv_message_purge);
static int iucv_message_receive_iprmdata(struct iucv_path *path,
struct iucv_message *msg,
u8 flags, void *buffer,
size_t size, size_t *residual)
int __iucv_message_receive(struct iucv_path *path, struct iucv_message *msg,
u8 flags, void *buffer, size_t size, size_t *residual)
EXPORT_SYMBOL(__iucv_message_receive);
int iucv_message_receive(struct iucv_path *path, struct iucv_message *msg,
u8 flags, void *buffer, size_t size, size_t *residual)
EXPORT_SYMBOL(iucv_message_receive);
int iucv_message_reject(struct iucv_path *path, struct iucv_message *msg)
EXPORT_SYMBOL(iucv_message_reject);
int iucv_message_reply(struct iucv_path *path, struct iucv_message *msg,
u8 flags, void *reply, size_t size)
EXPORT_SYMBOL(iucv_message_reply);
int __iucv_message_send(struct iucv_path *path, struct iucv_message *msg,
u8 flags, u32 srccls, void *buffer, size_t size)
EXPORT_SYMBOL(__iucv_message_send);
int iucv_message_send(struct iucv_path *path, struct iucv_message *msg,
u8 flags, u32 srccls, void *buffer, size_t size)
EXPORT_SYMBOL(iucv_message_send);
int iucv_message_send2way(struct iucv_path *path, struct iucv_message *msg,
u8 flags, u32 srccls, void *buffer, size_t size,
void *answer, size_t asize, size_t *residual)
EXPORT_SYMBOL(iucv_message_send2way);
struct iucv_path_pending  __packed;
static void iucv_path_pending(struct iucv_irq_data *data)
struct iucv_path_complete  __packed;
static void iucv_path_complete(struct iucv_irq_data *data)
struct iucv_path_severed  __packed;
static void iucv_path_severed(struct iucv_irq_data *data)
struct iucv_path_quiesced  __packed;
static void iucv_path_quiesced(struct iucv_irq_data *data)
struct iucv_path_resumed  __packed;
static void iucv_path_resumed(struct iucv_irq_data *data)
struct iucv_message_complete  __packed;
static void iucv_message_complete(struct iucv_irq_data *data)
struct iucv_message_pending  __packed;
static void iucv_message_pending(struct iucv_irq_data *data)
static void iucv_tasklet_fn(unsigned long ignored)
static void iucv_work_fn(struct work_struct *work)
static void iucv_external_interrupt(unsigned int ext_int_code,
unsigned int param32, unsigned long param64)
static int iucv_pm_prepare(struct device *dev)
static void iucv_pm_complete(struct device *dev)
int iucv_path_table_empty(void)
static int iucv_pm_freeze(struct device *dev)
static int iucv_pm_thaw(struct device *dev)
static int iucv_pm_restore(struct device *dev)
static int __init iucv_init(void)
static void __exit iucv_exit(void)
subsys_initcall(iucv_init);
module_exit(iucv_exit);
MODULE_AUTHOR("(C) 2001 IBM Corp. by Fritz Elfert (felfert@millenux.com)");
MODULE_DESCRIPTION("Linux for S/390 IUCV lowlevel driver");
MODULE_LICENSE("GPL");
