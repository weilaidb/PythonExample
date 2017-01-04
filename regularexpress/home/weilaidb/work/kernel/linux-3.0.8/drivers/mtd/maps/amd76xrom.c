#define xstr(s) str(s)
#define str(s) #s
#define MOD_NAME xstr(KBUILD_BASENAME)
#define ADDRESS_NAME_LEN 18
#define ROM_PROBE_STEP_SIZE (64*1024)
struct amd76xrom_window ;
struct amd76xrom_map_info ;
static uint win_size_bits;
module_param(win_size_bits, uint, 0);
MODULE_PARM_DESC(win_size_bits, "ROM window size bits override for 0x43 byte, normally set by BIOS.");
static struct amd76xrom_window amd76xrom_window = ;
static void amd76xrom_cleanup(struct amd76xrom_window *window)
static int __devinit amd76xrom_init_one (struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit amd76xrom_remove_one (struct pci_dev *pdev)
static struct pci_device_id amd76xrom_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, amd76xrom_pci_tbl);
static int __init init_amd76xrom(void)
static void __exit cleanup_amd76xrom(void)
module_init(init_amd76xrom);
module_exit(cleanup_amd76xrom);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Eric Biederman <ebiederman@lnxi.com>");
MODULE_DESCRIPTION("MTD map driver for BIOS chips on the AMD76X southbridge");
