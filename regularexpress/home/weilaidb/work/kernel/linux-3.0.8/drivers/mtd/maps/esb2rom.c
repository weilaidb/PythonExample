#define MOD_NAME KBUILD_BASENAME
#define ADDRESS_NAME_LEN 18
#define ROM_PROBE_STEP_SIZE (64*1024)
#define BIOS_CNTL		0xDC
#define BIOS_LOCK_ENABLE	0x02
#define BIOS_WRITE_ENABLE	0x01
#define FWH_DEC_EN1	0xD8
#define FWH_F8_EN	0x8000
#define FWH_F0_EN	0x4000
#define FWH_E8_EN	0x2000
#define FWH_E0_EN	0x1000
#define FWH_D8_EN	0x0800
#define FWH_D0_EN	0x0400
#define FWH_C8_EN	0x0200
#define FWH_C0_EN	0x0100
#define FWH_LEGACY_F_EN	0x0080
#define FWH_LEGACY_E_EN	0x0040
#define FWH_70_EN	0x0008
#define FWH_60_EN	0x0004
#define FWH_50_EN	0x0002
#define FWH_40_EN	0x0001
#define FWH_SEL1	0xD0
#define FWH_SEL2	0xD4
#define FWH_8MiB	(FWH_F8_EN | FWH_F0_EN | FWH_E8_EN | FWH_E0_EN | \
FWH_D8_EN | FWH_D0_EN | FWH_C8_EN | FWH_C0_EN | \
FWH_70_EN | FWH_60_EN | FWH_50_EN | FWH_40_EN)
#define FWH_7MiB	(FWH_F8_EN | FWH_F0_EN | FWH_E8_EN | FWH_E0_EN | \
FWH_D8_EN | FWH_D0_EN | FWH_C8_EN | FWH_C0_EN | \
FWH_70_EN | FWH_60_EN | FWH_50_EN)
#define FWH_6MiB	(FWH_F8_EN | FWH_F0_EN | FWH_E8_EN | FWH_E0_EN | \
FWH_D8_EN | FWH_D0_EN | FWH_C8_EN | FWH_C0_EN | \
FWH_70_EN | FWH_60_EN)
#define FWH_5MiB	(FWH_F8_EN | FWH_F0_EN | FWH_E8_EN | FWH_E0_EN | \
FWH_D8_EN | FWH_D0_EN | FWH_C8_EN | FWH_C0_EN | \
FWH_70_EN)
#define FWH_4MiB	(FWH_F8_EN | FWH_F0_EN | FWH_E8_EN | FWH_E0_EN | \
FWH_D8_EN | FWH_D0_EN | FWH_C8_EN | FWH_C0_EN)
#define FWH_3_5MiB	(FWH_F8_EN | FWH_F0_EN | FWH_E8_EN | FWH_E0_EN | \
FWH_D8_EN | FWH_D0_EN | FWH_C8_EN)
#define FWH_3MiB	(FWH_F8_EN | FWH_F0_EN | FWH_E8_EN | FWH_E0_EN | \
FWH_D8_EN | FWH_D0_EN)
#define FWH_2_5MiB	(FWH_F8_EN | FWH_F0_EN | FWH_E8_EN | FWH_E0_EN | \
FWH_D8_EN)
#define FWH_2MiB	(FWH_F8_EN | FWH_F0_EN | FWH_E8_EN | FWH_E0_EN)
#define FWH_1_5MiB	(FWH_F8_EN | FWH_F0_EN | FWH_E8_EN)
#define FWH_1MiB	(FWH_F8_EN | FWH_F0_EN)
#define FWH_0_5MiB	(FWH_F8_EN)
struct esb2rom_window ;
struct esb2rom_map_info ;
static struct esb2rom_window esb2rom_window = ;
static void esb2rom_cleanup(struct esb2rom_window *window)
static int __devinit esb2rom_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit esb2rom_remove_one (struct pci_dev *pdev)
static struct pci_device_id esb2rom_pci_tbl[] __devinitdata = ;
static int __init init_esb2rom(void)
static void __exit cleanup_esb2rom(void)
module_init(init_esb2rom);
module_exit(cleanup_esb2rom);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Lew Glendenning <lglendenning@lnxi.com>");
MODULE_DESCRIPTION("MTD map driver for BIOS chips on the ESB2 southbridge");
