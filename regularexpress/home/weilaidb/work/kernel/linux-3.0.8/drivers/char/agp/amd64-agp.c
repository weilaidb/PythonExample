#define NVIDIA_X86_64_0_APBASE		0x10
#define NVIDIA_X86_64_1_APBASE1		0x50
#define NVIDIA_X86_64_1_APLIMIT1	0x54
#define NVIDIA_X86_64_1_APSIZE		0xa8
#define NVIDIA_X86_64_1_APBASE2		0xd8
#define NVIDIA_X86_64_1_APLIMIT2	0xdc
#define ULI_X86_64_BASE_ADDR		0x10
#define ULI_X86_64_HTT_FEA_REG		0x50
#define ULI_X86_64_ENU_SCR_REG		0x54
static struct resource *aperture_resource;
static int __initdata agp_try_unsupported = 1;
static int agp_bridges_found;
static void amd64_tlbflush(struct agp_memory *temp)
static int amd64_insert_memory(struct agp_memory *mem, off_t pg_start, int type)
static struct aper_size_info_32 amd64_aperture_sizes[7] =
;
static int amd64_fetch_size(void)
static u64 amd64_configure(struct pci_dev *hammer, u64 gatt_table)
static const struct aper_size_info_32 amd_8151_sizes[7] =
;
static int amd_8151_configure(void)
static void amd64_cleanup(void)
static const struct agp_bridge_driver amd_8151_driver = ;
static int __devinit agp_aperture_valid(u64 aper, u32 size)
static __devinit int fix_northbridge(struct pci_dev *nb, struct pci_dev *agp,
u16 cap)
static __devinit int cache_nbs(struct pci_dev *pdev, u32 cap_ptr)
static void __devinit amd8151_init(struct pci_dev *pdev, struct agp_bridge_data *bridge)
static const struct aper_size_info_32 uli_sizes[7] =
;
static int __devinit uli_agp_init(struct pci_dev *pdev)
static const struct aper_size_info_32 nforce3_sizes[5] =
;
static int nforce3_agp_init(struct pci_dev *pdev)
static int __devinit agp_amd64_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit agp_amd64_remove(struct pci_dev *pdev)
static int agp_amd64_suspend(struct pci_dev *pdev, pm_message_t state)
static int agp_amd64_resume(struct pci_dev *pdev)
static struct pci_device_id agp_amd64_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, agp_amd64_pci_table);
static DEFINE_PCI_DEVICE_TABLE(agp_amd64_pci_promisc_table) = ;
static struct pci_driver agp_amd64_pci_driver = ;
int __init agp_amd64_init(void)
static int __init agp_amd64_mod_init(void)
static void __exit agp_amd64_cleanup(void)
module_init(agp_amd64_mod_init);
module_exit(agp_amd64_cleanup);
MODULE_AUTHOR("Dave Jones <davej@redhat.com>, Andi Kleen");
module_param(agp_try_unsupported, bool, 0);
MODULE_LICENSE("GPL");
