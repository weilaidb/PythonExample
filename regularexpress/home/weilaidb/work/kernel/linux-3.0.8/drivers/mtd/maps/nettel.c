#define INTEL_BUSWIDTH		1
#define AMD_WINDOW_MAXSIZE	0x00200000
#define AMD_BUSWIDTH	 	1
#define SC520_PAR_ADDR_MASK	0x00003fff
#define SC520_PAR_ADDR_SHIFT	16
#define SC520_PAR_TO_ADDR(par) \
(((par)&SC520_PAR_ADDR_MASK) << SC520_PAR_ADDR_SHIFT)
#define SC520_PAR_SIZE_MASK	0x01ffc000
#define SC520_PAR_SIZE_SHIFT	2
#define SC520_PAR_TO_SIZE(par) \
((((par)&SC520_PAR_SIZE_MASK) << SC520_PAR_SIZE_SHIFT) + (64*1024))
#define SC520_PAR(cs, addr, size) \
((cs) | \
((((size)-(64*1024)) >> SC520_PAR_SIZE_SHIFT) & SC520_PAR_SIZE_MASK) | \
(((addr) >> SC520_PAR_ADDR_SHIFT) & SC520_PAR_ADDR_MASK))
#define SC520_PAR_BOOTCS	0x8a000000
#define	SC520_PAR_ROMCS1	0xaa000000
#define SC520_PAR_ROMCS2	0xca000000
static void *nettel_mmcrp = NULL;
static struct mtd_info *intel_mtd;
static struct mtd_info *amd_mtd;
static struct map_info nettel_intel_map = ;
static struct mtd_partition nettel_intel_partitions[] = ;
static struct map_info nettel_amd_map = ;
static struct mtd_partition nettel_amd_partitions[] = ;
#define NUM_AMD_PARTITIONS ARRAY_SIZE(nettel_amd_partitions)
static int nettel_reboot_notifier(struct notifier_block *nb, unsigned long val, void *v)
static struct notifier_block nettel_notifier_block = ;
static int __init nettel_init(void)
static void __exit nettel_cleanup(void)
module_init(nettel_init);
module_exit(nettel_cleanup);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Greg Ungerer <gerg@snapgear.com>");
MODULE_DESCRIPTION("SnapGear/SecureEdge FLASH support");
