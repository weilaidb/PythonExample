static struct mfp_addr_map pxa300_mfp_addr_map[] __initdata = ;
static struct mfp_addr_map pxa310_mfp_addr_map[] __initdata = ;
static DEFINE_PXA3_CKEN(common_nand, NAND, 156000000, 0);
static DEFINE_PXA3_CKEN(gcu, PXA300_GCU, 0, 0);
static struct clk_lookup common_clkregs[] = ;
static DEFINE_PXA3_CKEN(pxa310_mmc3, MMC3, 19500000, 0);
static struct clk_lookup pxa310_clkregs[] = ;
static int __init pxa300_init(void)
core_initcall(pxa300_init);
