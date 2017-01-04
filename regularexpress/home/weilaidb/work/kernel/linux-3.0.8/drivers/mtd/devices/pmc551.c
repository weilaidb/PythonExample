static struct mtd_info *pmc551list;
static int pmc551_erase(struct mtd_info *mtd, struct erase_info *instr)
static int pmc551_point(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, void **virt, resource_size_t *phys)
static void pmc551_unpoint(struct mtd_info *mtd, loff_t from, size_t len)
static int pmc551_read(struct mtd_info *mtd, loff_t from, size_t len,
size_t * retlen, u_char * buf)
static int pmc551_write(struct mtd_info *mtd, loff_t to, size_t len,
size_t * retlen, const u_char * buf)
static u32 fixup_pmc551(struct pci_dev *dev)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mark Ferrell <mferrell@mvista.com>");
MODULE_DESCRIPTION(PMC551_VERSION);
static int msize = 0;
static int asize = 0;
module_param(msize, int, 0);
MODULE_PARM_DESC(msize, "memory size in MiB [1 - 1024]");
module_param(asize, int, 0);
MODULE_PARM_DESC(asize, "aperture size, must be <= memsize [1-1024]");
static int __init init_pmc551(void)
static void __exit cleanup_pmc551(void)
module_init(init_pmc551);
module_exit(cleanup_pmc551);
