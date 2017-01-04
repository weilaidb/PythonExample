#define TS78XX_FPGA_REGS_PHYS_BASE	0xe8000000
#define TS78XX_FPGA_REGS_VIRT_BASE	0xff900000
#define TS78XX_FPGA_REGS_SIZE		SZ_1M
static struct ts78xx_fpga_data ts78xx_fpga = ;
static struct map_desc ts78xx_io_desc[] __initdata = ;
void __init ts78xx_map_io(void)
static struct mv643xx_eth_platform_data ts78xx_eth_data = ;
static struct mv_sata_platform_data ts78xx_sata_data = ;
#define TS_RTC_CTRL	(TS78XX_FPGA_REGS_VIRT_BASE | 0x808)
#define TS_RTC_DATA	(TS78XX_FPGA_REGS_VIRT_BASE | 0x80c)
static unsigned char ts78xx_ts_rtc_readbyte(unsigned long addr)
static void ts78xx_ts_rtc_writebyte(unsigned char value, unsigned long addr)
static struct m48t86_ops ts78xx_ts_rtc_ops = ;
static struct platform_device ts78xx_ts_rtc_device = ;
static int ts78xx_ts_rtc_load(void)
;
static void ts78xx_ts_rtc_unload(void)
#define TS_NAND_CTRL	(TS78XX_FPGA_REGS_VIRT_BASE | 0x800)
#define TS_NAND_DATA	(TS78XX_FPGA_REGS_PHYS_BASE | 0x804)
static void ts78xx_ts_nand_cmd_ctrl(struct mtd_info *mtd, int cmd,
unsigned int ctrl)
static int ts78xx_ts_nand_dev_ready(struct mtd_info *mtd)
static void ts78xx_ts_nand_write_buf(struct mtd_info *mtd,
const uint8_t *buf, int len)
static void ts78xx_ts_nand_read_buf(struct mtd_info *mtd,
uint8_t *buf, int len)
const char *ts_nand_part_probes[] = ;
static struct mtd_partition ts78xx_ts_nand_parts[] = ;
static struct platform_nand_data ts78xx_ts_nand_data = ;
static struct resource ts78xx_ts_nand_resources = ;
static struct platform_device ts78xx_ts_nand_device = ;
static int ts78xx_ts_nand_load(void)
;
static void ts78xx_ts_nand_unload(void)
#define TS_RNG_DATA	(TS78XX_FPGA_REGS_PHYS_BASE | 0x044)
static struct resource ts78xx_ts_rng_resource = ;
static struct timeriomem_rng_data ts78xx_ts_rng_data = ;
static struct platform_device ts78xx_ts_rng_device = ;
static int ts78xx_ts_rng_load(void)
;
static void ts78xx_ts_rng_unload(void)
static void ts78xx_fpga_devices_zero_init(void)
static void ts78xx_fpga_supports(void)
static int ts78xx_fpga_load_devices(void)
static int ts78xx_fpga_unload_devices(void)
static int ts78xx_fpga_load(void)
;
static int ts78xx_fpga_unload(void)
;
static ssize_t ts78xx_fpga_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t ts78xx_fpga_store(struct kobject *kobj,
struct kobj_attribute *attr, const char *buf, size_t n)
static struct kobj_attribute ts78xx_fpga_attr =
__ATTR(ts78xx_fpga, 0644, ts78xx_fpga_show, ts78xx_fpga_store);
static unsigned int ts78xx_mpp_modes[] __initdata = ;
static void __init ts78xx_init(void)
MACHINE_START(TS78XX, "Technologic Systems TS-78xx SBC")
.boot_params	= 0x00000100,
.init_machine	= ts78xx_init,
.map_io		= ts78xx_map_io,
.init_early	= orion5x_init_early,
.init_irq	= orion5x_init_irq,
.timer		= &orion5x_timer,
MACHINE_END
