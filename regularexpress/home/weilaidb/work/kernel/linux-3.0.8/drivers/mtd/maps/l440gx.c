#define PIIXE_IOBASE_RESOURCE	11
#define WINDOW_ADDR 0xfff00000
#define WINDOW_SIZE 0x00100000
#define BUSWIDTH 1
static u32 iobase;
#define IOBASE iobase
#define TRIBUF_PORT (IOBASE+0x37)
#define VPP_PORT (IOBASE+0x28)
static struct mtd_info *mymtd;
static void l440gx_set_vpp(struct map_info *map, int vpp)
static struct map_info l440gx_map = ;
static int __init init_l440gx(void)
static void __exit cleanup_l440gx(void)
module_init(init_l440gx);
module_exit(cleanup_l440gx);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org>");
MODULE_DESCRIPTION("MTD map driver for BIOS chips on Intel L440GX motherboards");
