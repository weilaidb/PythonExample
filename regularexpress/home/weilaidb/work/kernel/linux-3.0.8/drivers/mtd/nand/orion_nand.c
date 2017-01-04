static const char *part_probes[] = ;
static void orion_nand_cmd_ctrl(struct mtd_info *mtd, int cmd, unsigned int ctrl)
static void orion_nand_read_buf(struct mtd_info *mtd, uint8_t *buf, int len)
static int __init orion_nand_probe(struct platform_device *pdev)
static int __devexit orion_nand_remove(struct platform_device *pdev)
static struct platform_driver orion_nand_driver = ;
static int __init orion_nand_init(void)
static void __exit orion_nand_exit(void)
module_init(orion_nand_init);
module_exit(orion_nand_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Tzachi Perelstein");
MODULE_DESCRIPTION("NAND glue for Orion platforms");
MODULE_ALIAS("platform:orion_nand");
