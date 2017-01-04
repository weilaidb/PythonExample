struct gru_blade_state *gru_base[GRU_MAX_BLADES] __read_mostly;
unsigned long gru_start_paddr __read_mostly;
void *gru_start_vaddr __read_mostly;
unsigned long gru_end_paddr __read_mostly;
unsigned int gru_max_gids __read_mostly;
struct gru_stats_s gru_stats;
static int max_user_cbrs, max_user_dsr_bytes;
static struct miscdevice gru_miscdev;
static void gru_vma_close(struct vm_area_struct *vma)
static int gru_file_mmap(struct file *file, struct vm_area_struct *vma)
static int gru_create_new_context(unsigned long arg)
static long gru_get_config_info(unsigned long arg)
static long gru_file_unlocked_ioctl(struct file *file, unsigned int req,
unsigned long arg)
static void gru_init_chiplet(struct gru_state *gru, unsigned long paddr,
void *vaddr, int blade_id, int chiplet_id)
static int gru_init_tables(unsigned long gru_base_paddr, void *gru_base_vaddr)
static void gru_free_tables(void)
static unsigned long gru_chiplet_cpu_to_mmr(int chiplet, int cpu, int *corep)
static int gru_irq_count[GRU_CHIPLETS_PER_BLADE];
static void gru_noop(struct irq_data *d)
static struct irq_chip gru_chip[GRU_CHIPLETS_PER_BLADE] = ;
static int gru_chiplet_setup_tlb_irq(int chiplet, char *irq_name,
irq_handler_t irq_handler, int cpu, int blade)
static void gru_chiplet_teardown_tlb_irq(int chiplet, int cpu, int blade)
#elif defined CONFIG_X86_64
static int gru_chiplet_setup_tlb_irq(int chiplet, char *irq_name,
irq_handler_t irq_handler, int cpu, int blade)
static void gru_chiplet_teardown_tlb_irq(int chiplet, int cpu, int blade)
static void gru_teardown_tlb_irqs(void)
static int gru_setup_tlb_irqs(void)
static int __init gru_init(void)
static void __exit gru_exit(void)
static const struct file_operations gru_fops = ;
static struct miscdevice gru_miscdev = ;
const struct vm_operations_struct gru_vm_ops = ;
fs_initcall(gru_init);
module_init(gru_init);
module_exit(gru_exit);
module_param(gru_options, ulong, 0644);
MODULE_PARM_DESC(gru_options, "Various debug options");
MODULE_AUTHOR("Silicon Graphics, Inc.");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION(GRU_DRIVER_ID_STR GRU_DRIVER_VERSION_STR);
MODULE_VERSION(GRU_DRIVER_VERSION_STR);
