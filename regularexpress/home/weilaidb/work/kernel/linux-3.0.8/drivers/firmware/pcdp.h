#define PCDP_CONSOLE			0
#define PCDP_DEBUG			1
#define PCDP_CONSOLE_OUTPUT		2
#define PCDP_CONSOLE_INPUT		3
#define PCDP_UART			(0 << 3)
#define PCDP_VGA			(1 << 3)
#define PCDP_USB			(2 << 3)
#define PCDP_CONSOLE_UART		(PCDP_UART | PCDP_CONSOLE)
#define PCDP_DEBUG_UART			(PCDP_UART | PCDP_DEBUG)
#define PCDP_CONSOLE_VGA		(PCDP_VGA  | PCDP_CONSOLE_OUTPUT)
#define PCDP_CONSOLE_USB		(PCDP_USB  | PCDP_CONSOLE_INPUT)
#define PCDP_UART_EDGE_SENSITIVE	(1 << 0)
#define PCDP_UART_ACTIVE_LOW		(1 << 1)
#define PCDP_UART_PRIMARY_CONSOLE	(1 << 2)
#define PCDP_UART_IRQ			(1 << 6)
#define PCDP_UART_PCI			(1 << 7)
struct pcdp_uart  __attribute__((packed));
#define PCDP_IF_PCI	1
#define PCDP_PCI_TRANS_IOPORT	0x02
#define PCDP_PCI_TRANS_MMIO	0x01
struct pcdp_if_pci  __attribute__((packed));
struct pcdp_vga  __attribute__((packed));
#define PCDP_PRIMARY_CONSOLE	1
struct pcdp_device  __attribute__((packed));
struct pcdp  __attribute__((packed));
