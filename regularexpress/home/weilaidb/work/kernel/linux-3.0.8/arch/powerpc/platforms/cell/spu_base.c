#undef DEBUG
const struct spu_management_ops *spu_management_ops;
EXPORT_SYMBOL_GPL(spu_management_ops);
const struct spu_priv1_ops *spu_priv1_ops;
EXPORT_SYMBOL_GPL(spu_priv1_ops);
struct cbe_spu_info cbe_spu_info[MAX_NUMNODES];
EXPORT_SYMBOL_GPL(cbe_spu_info);
EXPORT_SYMBOL_GPL(force_sig_info);
static DEFINE_SPINLOCK(spu_lock);
static LIST_HEAD(spu_full_list);
static DEFINE_SPINLOCK(spu_full_list_lock);
static DEFINE_MUTEX(spu_full_list_mutex);
struct spu_slb ;
void spu_invalidate_slbs(struct spu *spu)
EXPORT_SYMBOL_GPL(spu_invalidate_slbs);
void spu_flush_all_slbs(struct mm_struct *mm)
static inline void mm_needs_global_tlbie(struct mm_struct *mm)
void spu_associate_mm(struct spu *spu, struct mm_struct *mm)
EXPORT_SYMBOL_GPL(spu_associate_mm);
int spu_64k_pages_available(void)
EXPORT_SYMBOL_GPL(spu_64k_pages_available);
static void spu_restart_dma(struct spu *spu)
static inline void spu_load_slb(struct spu *spu, int slbe, struct spu_slb *slb)
static int __spu_trap_data_seg(struct spu *spu, unsigned long ea)
extern int hash_page(unsigned long ea, unsigned long access, unsigned long trap);
static int __spu_trap_data_map(struct spu *spu, unsigned long ea, u64 dsisr)
static void __spu_kernel_slb(void *addr, struct spu_slb *slb)
static inline int __slb_present(struct spu_slb *slbs, int nr_slbs,
void *new_addr)
void spu_setup_kernel_slbs(struct spu *spu, struct spu_lscsa *lscsa,
void *code, int code_size)
EXPORT_SYMBOL_GPL(spu_setup_kernel_slbs);
static irqreturn_t
spu_irq_class_0(int irq, void *data)
static irqreturn_t
spu_irq_class_1(int irq, void *data)
static irqreturn_t
spu_irq_class_2(int irq, void *data)
static int spu_request_irqs(struct spu *spu)
static void spu_free_irqs(struct spu *spu)
void spu_init_channels(struct spu *spu)
EXPORT_SYMBOL_GPL(spu_init_channels);
static struct sysdev_class spu_sysdev_class = ;
int spu_add_sysdev_attr(struct sysdev_attribute *attr)
EXPORT_SYMBOL_GPL(spu_add_sysdev_attr);
int spu_add_sysdev_attr_group(struct attribute_group *attrs)
EXPORT_SYMBOL_GPL(spu_add_sysdev_attr_group);
void spu_remove_sysdev_attr(struct sysdev_attribute *attr)
EXPORT_SYMBOL_GPL(spu_remove_sysdev_attr);
void spu_remove_sysdev_attr_group(struct attribute_group *attrs)
EXPORT_SYMBOL_GPL(spu_remove_sysdev_attr_group);
static int spu_create_sysdev(struct spu *spu)
static int __init create_spu(void *data)
static const char *spu_state_names[] = ;
static unsigned long long spu_acct_time(struct spu *spu,
enum spu_utilization_state state)
static ssize_t spu_stat_show(struct sys_device *sysdev,
struct sysdev_attribute *attr, char *buf)
static SYSDEV_ATTR(stat, 0644, spu_stat_show, NULL);
struct crash_spu_info ;
#define CRASH_NUM_SPUS	16
static struct crash_spu_info crash_spu_info[CRASH_NUM_SPUS];
static void crash_kexec_stop_spus(void)
static void crash_register_spus(struct list_head *list)
static inline void crash_register_spus(struct list_head *list)
static void spu_shutdown(void)
static struct syscore_ops spu_syscore_ops = ;
static int __init init_spu_base(void)
module_init(init_spu_base);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Arnd Bergmann <arndb@de.ibm.com>");
