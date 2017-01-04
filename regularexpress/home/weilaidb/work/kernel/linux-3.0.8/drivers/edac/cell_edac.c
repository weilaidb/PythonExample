#undef DEBUG
struct cell_edac_priv
;
static void cell_edac_count_ce(struct mem_ctl_info *mci, int chan, u64 ar)
static void cell_edac_count_ue(struct mem_ctl_info *mci, int chan, u64 ar)
static void cell_edac_check(struct mem_ctl_info *mci)
static void __devinit cell_edac_init_csrows(struct mem_ctl_info *mci)
static int __devinit cell_edac_probe(struct platform_device *pdev)
static int __devexit cell_edac_remove(struct platform_device *pdev)
static struct platform_driver cell_edac_driver = ;
static int __init cell_edac_init(void)
static void __exit cell_edac_exit(void)
module_init(cell_edac_init);
module_exit(cell_edac_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Benjamin Herrenschmidt <benh@kernel.crashing.org>");
MODULE_DESCRIPTION("ECC counting for Cell MIC");
