static unsigned char which_scsi;
int MCA_bus;
EXPORT_SYMBOL(MCA_bus);
static DEFINE_SPINLOCK(mca_lock);
static void mca_configure_adapter_status(struct mca_device *mca_dev)
static struct resource mca_standard_resources[] = ;
#define MCA_STANDARD_RESOURCES	ARRAY_SIZE(mca_standard_resources)
static int mca_read_and_store_pos(unsigned char *pos)
static unsigned char mca_pc_read_pos(struct mca_device *mca_dev, int reg)
static void mca_pc_write_pos(struct mca_device *mca_dev, int reg,
unsigned char byte)
static int mca_dummy_transform_irq(struct mca_device *mca_dev, int irq)
static int mca_dummy_transform_ioport(struct mca_device *mca_dev, int port)
static void *mca_dummy_transform_memory(struct mca_device *mca_dev, void *mem)
static int __init mca_init(void)
subsys_initcall(mca_init);
static __kprobes void
mca_handle_nmi_device(struct mca_device *mca_dev, int check_flag)
static int __kprobes mca_handle_nmi_callback(struct device *dev, void *data)
void __kprobes mca_handle_nmi(void)
