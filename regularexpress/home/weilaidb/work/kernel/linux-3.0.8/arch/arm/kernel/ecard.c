#define ECARD_C
#define HAVE_EXPMASK
struct ecard_request ;
struct expcard_blacklist ;
static ecard_t *cards;
static ecard_t *slot_to_expcard[MAX_ECARDS];
static unsigned int ectcr;
static unsigned int have_expmask;
static struct expcard_blacklist __initdata blacklist[] = ;
asmlinkage extern int
ecard_loader_reset(unsigned long base, loader_t loader);
asmlinkage extern int
ecard_loader_read(int off, unsigned long base, loader_t loader);
static inline unsigned short ecard_getu16(unsigned char *v)
static inline signed long ecard_gets24(unsigned char *v)
static inline ecard_t *slot_to_ecard(unsigned int slot)
static void ecard_task_reset(struct ecard_request *req)
static void ecard_task_readbytes(struct ecard_request *req)
static DECLARE_WAIT_QUEUE_HEAD(ecard_wait);
static struct ecard_request *ecard_req;
static DEFINE_MUTEX(ecard_mutex);
static void ecard_init_pgtables(struct mm_struct *mm)
static int ecard_init_mm(void)
static int
ecard_task(void * unused)
static void ecard_call(struct ecard_request *req)
static void
ecard_readbytes(void *addr, ecard_t *ec, int off, int len, int useld)
int ecard_readchunk(struct in_chunk_dir *cd, ecard_t *ec, int id, int num)
static void ecard_def_irq_enable(ecard_t *ec, int irqnr)
static void ecard_def_irq_disable(ecard_t *ec, int irqnr)
static int ecard_def_irq_pending(ecard_t *ec)
static void ecard_def_fiq_enable(ecard_t *ec, int fiqnr)
static void ecard_def_fiq_disable(ecard_t *ec, int fiqnr)
static int ecard_def_fiq_pending(ecard_t *ec)
static expansioncard_ops_t ecard_default_ops = ;
static void ecard_irq_unmask(struct irq_data *d)
static void ecard_irq_mask(struct irq_data *d)
static struct irq_chip ecard_chip = ;
void ecard_enablefiq(unsigned int fiqnr)
void ecard_disablefiq(unsigned int fiqnr)
static void ecard_dump_irq_state(void)
static void ecard_check_lockup(struct irq_desc *desc)
static void
ecard_irq_handler(unsigned int irq, struct irq_desc *desc)
static unsigned char priority_masks[] =
;
static unsigned char first_set[] =
;
static void
ecard_irqexp_handler(unsigned int irq, struct irq_desc *desc)
static int __init ecard_probeirqhw(void)
#define ecard_irqexp_handler NULL
#define ecard_probeirqhw() (0)
#define IO_EC_MEMC8_BASE 0
static unsigned int __ecard_address(ecard_t *ec, card_type_t type, card_speed_t speed)
static int ecard_prints(struct seq_file *m, ecard_t *ec)
static int ecard_devices_proc_show(struct seq_file *m, void *v)
static int ecard_devices_proc_open(struct inode *inode, struct file *file)
static const struct file_operations bus_ecard_proc_fops = ;
static struct proc_dir_entry *proc_bus_ecard_dir = NULL;
static void ecard_proc_init(void)
#define ec_set_resource(ec,nr,st,sz)				\
do  while (0)
static void __init ecard_free_card(struct expansion_card *ec)
static struct expansion_card *__init ecard_alloc_card(int type, int slot)
static ssize_t ecard_show_irq(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t ecard_show_dma(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t ecard_show_resources(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t ecard_show_vendor(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t ecard_show_device(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t ecard_show_type(struct device *dev, struct device_attribute *attr, char *buf)
static struct device_attribute ecard_dev_attrs[] = ;
int ecard_request_resources(struct expansion_card *ec)
EXPORT_SYMBOL(ecard_request_resources);
void ecard_release_resources(struct expansion_card *ec)
EXPORT_SYMBOL(ecard_release_resources);
void ecard_setirq(struct expansion_card *ec, const struct expansion_card_ops *ops, void *irq_data)
EXPORT_SYMBOL(ecard_setirq);
void __iomem *ecardm_iomap(struct expansion_card *ec, unsigned int res,
unsigned long offset, unsigned long maxsize)
EXPORT_SYMBOL(ecardm_iomap);
static int __init
ecard_probe(int slot, card_type_t type)
static int __init ecard_init(void)
subsys_initcall(ecard_init);
static const struct ecard_id *
ecard_match_device(const struct ecard_id *ids, struct expansion_card *ec)
static int ecard_drv_probe(struct device *dev)
static int ecard_drv_remove(struct device *dev)
static void ecard_drv_shutdown(struct device *dev)
int ecard_register_driver(struct ecard_driver *drv)
void ecard_remove_driver(struct ecard_driver *drv)
static int ecard_match(struct device *_dev, struct device_driver *_drv)
struct bus_type ecard_bus_type = ;
static int ecard_bus_init(void)
postcore_initcall(ecard_bus_init);
EXPORT_SYMBOL(ecard_readchunk);
EXPORT_SYMBOL(ecard_register_driver);
EXPORT_SYMBOL(ecard_remove_driver);
EXPORT_SYMBOL(ecard_bus_type);
