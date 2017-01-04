static struct resource s3c_nand_resource[] = ;
struct platform_device s3c_device_nand = ;
EXPORT_SYMBOL(s3c_device_nand);
static int __init s3c_nand_copy_set(struct s3c2410_nand_set *set)
void __init s3c_nand_set_platdata(struct s3c2410_platform_nand *nand)
