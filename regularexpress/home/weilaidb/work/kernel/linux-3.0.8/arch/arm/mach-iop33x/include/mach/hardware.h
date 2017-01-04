#define __HARDWARE_H
#define pcibios_assign_all_busses()	1
#define PCIBIOS_MIN_IO		0x00000000
#define PCIBIOS_MIN_MEM		0x00000000
void iop33x_init_irq(void);
extern struct platform_device iop33x_uart0_device;
extern struct platform_device iop33x_uart1_device;
