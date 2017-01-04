#define E55_ISA_IO_BASE		0x1400c000
#define E55_ISA_IO_SIZE		0x03ff4000
#define E55_ISA_IO_START	0
#define E55_ISA_IO_END		(E55_ISA_IO_SIZE - 1)
#define E55_IO_PORT_BASE	KSEG1ADDR(E55_ISA_IO_BASE)
static int __init casio_e55_setup(void)
arch_initcall(casio_e55_setup);
