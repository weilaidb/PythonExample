#define __LINUX_USB_EHCI_DEF_H
struct ehci_caps ;
struct ehci_regs ;
#define USBMODE		0x68
#define USBMODE_SDIS	(1<<3)
#define USBMODE_BE	(1<<2)
#define USBMODE_CM_HC	(3<<0)
#define USBMODE_CM_IDLE	(0<<0)
#define HOSTPC0		0x84
#define HOSTPC_PHCD	(1<<22)
#define HOSTPC_PSPD	(3<<25)
#define USBMODE_EX	0xc8
#define USBMODE_EX_VBPS	(1<<5)
#define USBMODE_EX_HC	(3<<0)
#define TXFILLTUNING	0x24
#define TXFIFO_DEFAULT	(8<<16)
struct ehci_dbg_port ;
extern int __init early_dbgp_init(char *s);
extern struct console early_dbgp_console;
extern int dbgp_external_startup(void);
extern int dbgp_reset_prep(void);
static inline int dbgp_reset_prep(void)
static inline int dbgp_external_startup(void)
