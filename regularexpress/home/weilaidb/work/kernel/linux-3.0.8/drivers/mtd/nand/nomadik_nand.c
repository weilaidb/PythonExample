struct nomadik_nand_host ;
static struct nand_ecclayout nomadik_ecc_layout = ;
static void nomadik_ecc_control(struct mtd_info *mtd, int mode)
static void nomadik_cmd_ctrl(struct mtd_info *mtd, int cmd, unsigned int ctrl)
static int nomadik_nand_probe(struct platform_device *pdev)
static int nomadik_nand_remove(struct platform_device *pdev)
static int nomadik_nand_suspend(struct device *dev)
static int nomadik_nand_resume(struct device *dev)
static const struct dev_pm_ops nomadik_nand_pm_ops = ;
static struct platform_driver nomadik_nand_driver = ;
static int __init nand_nomadik_init(void)
static void __exit nand_nomadik_exit(void)
module_init(nand_nomadik_init);
module_exit(nand_nomadik_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("ST Microelectronics (sachin.verma@st.com)");
MODULE_DESCRIPTION("NAND driver for Nomadik Platform");
