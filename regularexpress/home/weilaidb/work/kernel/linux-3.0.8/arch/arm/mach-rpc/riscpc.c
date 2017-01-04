extern void rpc_init_irq(void);
unsigned int vram_size;
unsigned int memc_ctrl_reg;
unsigned int number_mfm_drives;
static int __init parse_tag_acorn(const struct tag *tag)
__tagtable(ATAG_ACORN, parse_tag_acorn);
static struct map_desc rpc_io_desc[] __initdata = ;
static void __init rpc_map_io(void)
static struct resource acornfb_resources[] = ;
static struct platform_device acornfb_device = ;
static struct resource iomd_resources[] = ;
static struct platform_device iomd_device = ;
static struct platform_device kbd_device = ;
static struct plat_serial8250_port serial_platform_data[] = ;
static struct platform_device serial_device = ;
static struct pata_platform_info pata_platform_data = ;
static struct resource pata_resources[] = ;
static struct platform_device pata_device = ;
static struct platform_device *devs[] __initdata = ;
static struct i2c_board_info i2c_rtc = ;
static int __init rpc_init(void)
arch_initcall(rpc_init);
extern struct sys_timer ioc_timer;
MACHINE_START(RISCPC, "Acorn-RiscPC")
.boot_params	= 0x10000100,
.reserve_lp0	= 1,
.reserve_lp1	= 1,
.map_io		= rpc_map_io,
.init_irq	= rpc_init_irq,
.timer		= &ioc_timer,
MACHINE_END
