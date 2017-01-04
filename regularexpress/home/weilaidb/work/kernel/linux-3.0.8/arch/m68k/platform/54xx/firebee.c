#define	FLASH_PHYS_ADDR		0xe0000000
#define	FLASH_PHYS_SIZE		0x00800000
#define	PART_BOOT_START		0x00000000
#define	PART_BOOT_SIZE		0x00040000
#define	PART_IMAGE_START	0x00040000
#define	PART_IMAGE_SIZE		0x006c0000
#define	PART_FPGA_START		0x00700000
#define	PART_FPGA_SIZE		0x00100000
static struct mtd_partition firebee_flash_parts[] = ;
static struct physmap_flash_data firebee_flash_data = ;
static struct resource firebee_flash_resource = ;
static struct platform_device firebee_flash = ;
static int __init init_firebee(void)
arch_initcall(init_firebee);
