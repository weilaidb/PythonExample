static struct via_port_cfg adap_configs[] = ;
static const struct via_port_cfg olpc_adap_configs[] = ;
static struct viafb_dev global_dev;
static inline void viafb_mmio_write(int reg, u32 v)
static inline int viafb_mmio_read(int reg)
static u32 viafb_enabled_ints;
static void __devinit viafb_int_init(void)
void viafb_irq_enable(u32 mask)
EXPORT_SYMBOL_GPL(viafb_irq_enable);
void viafb_irq_disable(u32 mask)
EXPORT_SYMBOL_GPL(viafb_irq_disable);
#if defined(CONFIG_VIDEO_VIA_CAMERA) || defined(CONFIG_VIDEO_VIA_CAMERA_MODULE)
static int viafb_dma_users;
static DECLARE_COMPLETION(viafb_dma_completion);
static DEFINE_MUTEX(viafb_dma_lock);
struct viafb_vx855_dma_descr ;
#define VIAFB_DMA_MAGIC		0x01
#define VIAFB_DMA_FINAL_SEGMENT 0x02
static irqreturn_t viafb_dma_irq(int irq, void *data)
int viafb_request_dma(void)
EXPORT_SYMBOL_GPL(viafb_request_dma);
void viafb_release_dma(void)
EXPORT_SYMBOL_GPL(viafb_release_dma);
int viafb_dma_copy_out_sg(unsigned int offset, struct scatterlist *sg, int nsg)
EXPORT_SYMBOL_GPL(viafb_dma_copy_out_sg);
static u16 via_function3[] = ;
static int viafb_get_fb_size_from_pci(int chip_type)
static int __devinit via_pci_setup_mmio(struct viafb_dev *vdev)
static void via_pci_teardown_mmio(struct viafb_dev *vdev)
static struct viafb_subdev_info  viafb_subdevs[] = ;
#define N_SUBDEVS ARRAY_SIZE(viafb_subdevs)
static int __devinit via_create_subdev(struct viafb_dev *vdev,
struct viafb_subdev_info *info)
static int __devinit via_setup_subdevs(struct viafb_dev *vdev)
static void via_teardown_subdevs(void)
static LIST_HEAD(viafb_pm_hooks);
static DEFINE_MUTEX(viafb_pm_hooks_lock);
void viafb_pm_register(struct viafb_pm_hooks *hooks)
EXPORT_SYMBOL_GPL(viafb_pm_register);
void viafb_pm_unregister(struct viafb_pm_hooks *hooks)
EXPORT_SYMBOL_GPL(viafb_pm_unregister);
static int via_suspend(struct pci_dev *pdev, pm_message_t state)
static int via_resume(struct pci_dev *pdev)
static int __devinit via_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit via_pci_remove(struct pci_dev *pdev)
static struct pci_device_id via_pci_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, via_pci_table);
static struct pci_driver via_driver = ;
static int __init via_core_init(void)
static void __exit via_core_exit(void)
module_init(via_core_init);
module_exit(via_core_exit);
