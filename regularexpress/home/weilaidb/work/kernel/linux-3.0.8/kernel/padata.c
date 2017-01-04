#define MAX_SEQ_NR (INT_MAX - NR_CPUS)
#define MAX_OBJ_NUM 1000
static int padata_index_to_cpu(struct parallel_data *pd, int cpu_index)
static int padata_cpu_hash(struct padata_priv *padata)
static void padata_parallel_worker(struct work_struct *parallel_work)
int padata_do_parallel(struct padata_instance *pinst,
struct padata_priv *padata, int cb_cpu)
EXPORT_SYMBOL(padata_do_parallel);
static struct padata_priv *padata_get_next(struct parallel_data *pd)
static void padata_reorder(struct parallel_data *pd)
static void padata_reorder_timer(unsigned long arg)
static void padata_serial_worker(struct work_struct *serial_work)
void padata_do_serial(struct padata_priv *padata)
EXPORT_SYMBOL(padata_do_serial);
static int padata_setup_cpumasks(struct parallel_data *pd,
const struct cpumask *pcpumask,
const struct cpumask *cbcpumask)
static void __padata_list_init(struct padata_list *pd_list)
static void padata_init_squeues(struct parallel_data *pd)
static void padata_init_pqueues(struct parallel_data *pd)
static struct parallel_data *padata_alloc_pd(struct padata_instance *pinst,
const struct cpumask *pcpumask,
const struct cpumask *cbcpumask)
static void padata_free_pd(struct parallel_data *pd)
static void padata_flush_queues(struct parallel_data *pd)
static void __padata_start(struct padata_instance *pinst)
static void __padata_stop(struct padata_instance *pinst)
static void padata_replace(struct padata_instance *pinst,
struct parallel_data *pd_new)
int padata_register_cpumask_notifier(struct padata_instance *pinst,
struct notifier_block *nblock)
EXPORT_SYMBOL(padata_register_cpumask_notifier);
int padata_unregister_cpumask_notifier(struct padata_instance *pinst,
struct notifier_block *nblock)
EXPORT_SYMBOL(padata_unregister_cpumask_notifier);
static bool padata_validate_cpumask(struct padata_instance *pinst,
const struct cpumask *cpumask)
static int __padata_set_cpumasks(struct padata_instance *pinst,
cpumask_var_t pcpumask,
cpumask_var_t cbcpumask)
int padata_set_cpumasks(struct padata_instance *pinst, cpumask_var_t pcpumask,
cpumask_var_t cbcpumask)
EXPORT_SYMBOL(padata_set_cpumasks);
int padata_set_cpumask(struct padata_instance *pinst, int cpumask_type,
cpumask_var_t cpumask)
EXPORT_SYMBOL(padata_set_cpumask);
static int __padata_add_cpu(struct padata_instance *pinst, int cpu)
int padata_add_cpu(struct padata_instance *pinst, int cpu, int mask)
EXPORT_SYMBOL(padata_add_cpu);
static int __padata_remove_cpu(struct padata_instance *pinst, int cpu)
int padata_remove_cpu(struct padata_instance *pinst, int cpu, int mask)
EXPORT_SYMBOL(padata_remove_cpu);
int padata_start(struct padata_instance *pinst)
EXPORT_SYMBOL(padata_start);
void padata_stop(struct padata_instance *pinst)
EXPORT_SYMBOL(padata_stop);
static inline int pinst_has_cpu(struct padata_instance *pinst, int cpu)
static int padata_cpu_callback(struct notifier_block *nfb,
unsigned long action, void *hcpu)
static void __padata_free(struct padata_instance *pinst)
#define kobj2pinst(_kobj)					\
container_of(_kobj, struct padata_instance, kobj)
#define attr2pentry(_attr)					\
container_of(_attr, struct padata_sysfs_entry, attr)
static void padata_sysfs_release(struct kobject *kobj)
struct padata_sysfs_entry ;
static ssize_t show_cpumask(struct padata_instance *pinst,
struct attribute *attr,  char *buf)
static ssize_t store_cpumask(struct padata_instance *pinst,
struct attribute *attr,
const char *buf, size_t count)
#define PADATA_ATTR_RW(_name, _show_name, _store_name)		\
static struct padata_sysfs_entry _name##_attr =		\
__ATTR(_name, 0644, _show_name, _store_name)
#define PADATA_ATTR_RO(_name, _show_name)		\
static struct padata_sysfs_entry _name##_attr = \
__ATTR(_name, 0400, _show_name, NULL)
PADATA_ATTR_RW(serial_cpumask, show_cpumask, store_cpumask);
PADATA_ATTR_RW(parallel_cpumask, show_cpumask, store_cpumask);
static struct attribute *padata_default_attrs[] = ;
static ssize_t padata_sysfs_show(struct kobject *kobj,
struct attribute *attr, char *buf)
static ssize_t padata_sysfs_store(struct kobject *kobj, struct attribute *attr,
const char *buf, size_t count)
static const struct sysfs_ops padata_sysfs_ops = ;
static struct kobj_type padata_attr_type = ;
struct padata_instance *padata_alloc_possible(struct workqueue_struct *wq)
EXPORT_SYMBOL(padata_alloc_possible);
struct padata_instance *padata_alloc(struct workqueue_struct *wq,
const struct cpumask *pcpumask,
const struct cpumask *cbcpumask)
EXPORT_SYMBOL(padata_alloc);
void padata_free(struct padata_instance *pinst)
EXPORT_SYMBOL(padata_free);
