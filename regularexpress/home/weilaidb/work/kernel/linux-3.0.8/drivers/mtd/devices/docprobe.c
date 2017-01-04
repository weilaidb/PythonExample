#define DOC_SINGLE_DRIVER
#define CONFIG_MTD_DOCPROBE_ADDRESS 0
static unsigned long doc_config_location = CONFIG_MTD_DOCPROBE_ADDRESS;
module_param(doc_config_location, ulong, 0);
MODULE_PARM_DESC(doc_config_location, "Physical memory address at which to probe for DiskOnChip");
static unsigned long __initdata doc_locations[] = ;
static inline int __init doccheck(void __iomem *potential, unsigned long physadr)
static int docfound;
extern void DoC2k_init(struct mtd_info *);
extern void DoCMil_init(struct mtd_info *);
extern void DoCMilPlus_init(struct mtd_info *);
static void __init DoC_Probe(unsigned long physadr)
static int __init init_doc(void)
module_init(init_doc);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org>");
MODULE_DESCRIPTION("Probe code for DiskOnChip 2000 and Millennium devices");
