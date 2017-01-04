#define WORKPAD_ISA_IO_BASE	0x15000000
#define WORKPAD_ISA_IO_SIZE	0x03000000
#define WORKPAD_ISA_IO_START	0
#define WORKPAD_ISA_IO_END	(WORKPAD_ISA_IO_SIZE - 1)
#define WORKPAD_IO_PORT_BASE	KSEG1ADDR(WORKPAD_ISA_IO_BASE)
static int __init ibm_workpad_setup(void)
arch_initcall(ibm_workpad_setup);
