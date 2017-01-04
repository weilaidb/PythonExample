static struct mtd_info *sram_mtd;
struct map_info autcpu12_sram_map = ;
static int __init init_autcpu12_sram (void)
static void __exit cleanup_autcpu12_maps(void)
module_init(init_autcpu12_sram);
module_exit(cleanup_autcpu12_maps);
MODULE_AUTHOR("Thomas Gleixner");
MODULE_DESCRIPTION("autcpu12 NV-RAM map driver");
MODULE_LICENSE("GPL");
