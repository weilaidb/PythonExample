#define NVIDIA_0_APSIZE		0x80
#define NVIDIA_1_WBC		0xf0
#define NVIDIA_2_GARTCTRL	0xd0
#define NVIDIA_2_APBASE		0xd8
#define NVIDIA_2_APLIMIT	0xdc
#define NVIDIA_2_ATTBASE(i)	(0xe0 + (i) * 4)
#define NVIDIA_3_APBASE		0x50
#define NVIDIA_3_APLIMIT	0x54
static struct _nvidia_private  nvidia_private;
static int nvidia_fetch_size(void)
#define SYSCFG          0xC0010010
#define IORR_BASE0      0xC0010016
#define IORR_MASK0      0xC0010017
#define AMD_K7_NUM_IORR 2
static int nvidia_init_iorr(u32 base, u32 size)
static int nvidia_configure(void)
static void nvidia_cleanup(void)
extern int agp_memory_reserved;
static int nvidia_insert_memory(struct agp_memory *mem, off_t pg_start, int type)
static int nvidia_remove_memory(struct agp_memory *mem, off_t pg_start, int type)
static void nvidia_tlbflush(struct agp_memory *mem)
static const struct aper_size_info_8 nvidia_generic_sizes[5] =
;
static const struct gatt_mask nvidia_generic_masks[] =
;
static const struct agp_bridge_driver nvidia_driver = ;
static int __devinit agp_nvidia_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit agp_nvidia_remove(struct pci_dev *pdev)
static int agp_nvidia_suspend(struct pci_dev *pdev, pm_message_t state)
static int agp_nvidia_resume(struct pci_dev *pdev)
static struct pci_device_id agp_nvidia_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, agp_nvidia_pci_table);
static struct pci_driver agp_nvidia_pci_driver = ;
static int __init agp_nvidia_init(void)
static void __exit agp_nvidia_cleanup(void)
module_init(agp_nvidia_init);
module_exit(agp_nvidia_cleanup);
MODULE_LICENSE("GPL and additional rights");
MODULE_AUTHOR("NVIDIA Corporation");
