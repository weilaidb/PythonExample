static struct mfp_addr_map pxa320_mfp_addr_map[] __initdata = ;
static DEFINE_PXA3_CKEN(pxa320_nand, NAND, 104000000, 0);
static DEFINE_PXA3_CKEN(gcu, PXA320_GCU, 0, 0);
static struct clk_lookup pxa320_clkregs[] = ;
static int __init pxa320_init(void)
core_initcall(pxa320_init);
