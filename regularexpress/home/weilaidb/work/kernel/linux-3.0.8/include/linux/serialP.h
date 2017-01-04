#define _LINUX_SERIALP_H
struct serial_state ;
struct async_struct ;
#define CONFIGURED_SERIAL_PORT(info) ((info)->port || ((info)->iomem_base))
#define SERIAL_MAGIC 0x5301
#define SSTATE_MAGIC 0x5302
#define RS_EVENT_WRITE_WAKEUP	0
struct rs_multiport_struct ;
#if defined(__alpha__) && !defined(CONFIG_PCI)
#define ALPHA_KLUDGE_MCR  (UART_MCR_OUT2 | UART_MCR_OUT1)
#elif defined(CONFIG_SBC8560)
#define ALPHA_KLUDGE_MCR (UART_MCR_OUT2)
#define ALPHA_KLUDGE_MCR 0
