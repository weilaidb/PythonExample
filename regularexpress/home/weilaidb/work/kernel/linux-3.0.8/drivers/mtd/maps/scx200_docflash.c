#define NAME "scx200_docflash"
MODULE_AUTHOR("Christer Weinigel <wingel@hack.org>");
MODULE_DESCRIPTION("NatSemi SCx200 DOCCS Flash Driver");
MODULE_LICENSE("GPL");
static int probe = 0;
static unsigned size = 0x1000000;
static unsigned width = 8;
static char *flashtype = "cfi_probe";
module_param(probe, int, 0);
MODULE_PARM_DESC(probe, "Probe for a BIOS mapping");
module_param(size, int, 0);
MODULE_PARM_DESC(size, "Size of the flash mapping");
module_param(width, int, 0);
MODULE_PARM_DESC(width, "Data width of the flash mapping (8/16)");
module_param(flashtype, charp, 0);
MODULE_PARM_DESC(flashtype, "Type of MTD probe to do");
static struct resource docmem = ;
static struct mtd_info *mymtd;
static struct mtd_partition partition_info[] = ;
#define NUM_PARTITIONS ARRAY_SIZE(partition_info)
static struct map_info scx200_docflash_map = ;
static int __init init_scx200_docflash(void)
static void __exit cleanup_scx200_docflash(void)
module_init(init_scx200_docflash);
module_exit(cleanup_scx200_docflash);
