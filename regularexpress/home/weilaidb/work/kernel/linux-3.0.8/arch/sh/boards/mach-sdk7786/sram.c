#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static int __init fpga_sram_init(void)
postcore_initcall(fpga_sram_init);
