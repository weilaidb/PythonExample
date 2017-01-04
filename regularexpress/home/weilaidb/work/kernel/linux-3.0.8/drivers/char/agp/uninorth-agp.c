static int uninorth_rev;
static int is_u3;
static u32 scratch_value;
#define DEFAULT_APERTURE_SIZE 256
#define DEFAULT_APERTURE_STRING "256"
static char *aperture = NULL;
static int uninorth_fetch_size(void)
static void uninorth_tlbflush(struct agp_memory *mem)
static void uninorth_cleanup(void)
static int uninorth_configure(void)
static int uninorth_insert_memory(struct agp_memory *mem, off_t pg_start, int type)
int uninorth_remove_memory(struct agp_memory *mem, off_t pg_start, int type)
static void uninorth_agp_enable(struct agp_bridge_data *bridge, u32 mode)
static int agp_uninorth_suspend(struct pci_dev *pdev)
static int agp_uninorth_resume(struct pci_dev *pdev)
static int uninorth_create_gatt_table(struct agp_bridge_data *bridge)
static int uninorth_free_gatt_table(struct agp_bridge_data *bridge)
void null_cache_flush(void)
static const struct aper_size_info_32 uninorth_sizes[] =
;
static const struct aper_size_info_32 u3_sizes[] =
;
const struct agp_bridge_driver uninorth_agp_driver = ;
const struct agp_bridge_driver u3_agp_driver = ;
static struct agp_device_ids uninorth_agp_device_ids[] __devinitdata = ;
static int __devinit agp_uninorth_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit agp_uninorth_remove(struct pci_dev *pdev)
static struct pci_device_id agp_uninorth_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, agp_uninorth_pci_table);
static struct pci_driver agp_uninorth_pci_driver = ;
static int __init agp_uninorth_init(void)
static void __exit agp_uninorth_cleanup(void)
module_init(agp_uninorth_init);
module_exit(agp_uninorth_cleanup);
module_param(aperture, charp, 0);
MODULE_PARM_DESC(aperture,
"Aperture size, must be power of two between 4MB and an\n"
"\t\tupper limit specific to the UniNorth revision.\n"
"\t\tDefault: " DEFAULT_APERTURE_STRING "M");
MODULE_AUTHOR("Ben Herrenschmidt & Paul Mackerras");
MODULE_LICENSE("GPL");
