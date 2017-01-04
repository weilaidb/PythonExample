#define MOD_NAME KBUILD_BASENAME
#define ADDRESS_NAME_LEN 18
#define ROM_PROBE_STEP_SIZE (64*1024)
#define DEV_CK804 1
#define DEV_MCP55 2
struct ck804xrom_window ;
struct ck804xrom_map_info ;
static uint win_size_bits = 0;
module_param(win_size_bits, uint, 0);
MODULE_PARM_DESC(win_size_bits, "ROM window size bits override, normally set by BIOS.");
static struct ck804xrom_window ck804xrom_window = ;
static void ck804xrom_cleanup(struct ck804xrom_window *window)
static int __devinit ck804xrom_init_one (struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit ck804xrom_remove_one (struct pci_dev *pdev)
static struct pci_device_id ck804xrom_pci_tbl[] = ;
static int __init init_ck804xrom(void)
static void __exit cleanup_ck804xrom(void)
module_init(init_ck804xrom);
module_exit(cleanup_ck804xrom);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Eric Biederman <ebiederman@lnxi.com>, Dave Olsen <dolsen@lnxi.com>");
MODULE_DESCRIPTION("MTD map driver for BIOS chips on the Nvidia ck804 southbridge");
