#define xstr(s) str(s)
#define str(s) #s
#define MOD_NAME xstr(KBUILD_BASENAME)
#define ADDRESS_NAME_LEN 18
#define ROM_PROBE_STEP_SIZE (64*1024)
#define BIOS_CNTL	0x4e
#define FWH_DEC_EN1	0xE3
#define FWH_DEC_EN2	0xF0
#define FWH_SEL1	0xE8
#define FWH_SEL2	0xEE
struct ichxrom_window ;
struct ichxrom_map_info ;
static struct ichxrom_window ichxrom_window = ;
static void ichxrom_cleanup(struct ichxrom_window *window)
static int __devinit ichxrom_init_one (struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit ichxrom_remove_one (struct pci_dev *pdev)
static struct pci_device_id ichxrom_pci_tbl[] __devinitdata = ;
static int __init init_ichxrom(void)
static void __exit cleanup_ichxrom(void)
module_init(init_ichxrom);
module_exit(cleanup_ichxrom);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Eric Biederman <ebiederman@lnxi.com>");
MODULE_DESCRIPTION("MTD map driver for BIOS chips on the ICHX southbridge");
