#define MACEISA_SERIAL1_OFFS   offsetof(struct sgi_mace, isa.serial1)
#define MACEISA_SERIAL2_OFFS   offsetof(struct sgi_mace, isa.serial2)
#define MACE_PORT(offset,_irq)						\
static struct plat_serial8250_port uart8250_data[] = ;
static struct platform_device uart8250_device = ;
static int __init uart8250_init(void)
device_initcall(uart8250_init);
static __init int meth_devinit(void)
device_initcall(meth_devinit);
static __init int sgio2audio_devinit(void)
device_initcall(sgio2audio_devinit);
static __init int sgio2btns_devinit(void)
device_initcall(sgio2btns_devinit);
static struct resource sgio2_cmos_rsrc[] = ;
static __init int sgio2_cmos_devinit(void)
device_initcall(sgio2_cmos_devinit);
MODULE_AUTHOR("Ralf Baechle <ralf@linux-mips.org>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("8250 UART probe driver for SGI IP32 aka O2");
