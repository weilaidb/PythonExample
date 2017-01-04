#define MSP_USB_H_
#define NUM_USB_DEVS   2
#define NUM_USB_DEVS   1
#define MSP_USB0_MAB_START	(MSP_USB0_BASE + 0x0)
#define MSP_USB0_MAB_END	(MSP_USB0_BASE + 0x17)
#define MSP_USB0_ID_START	(MSP_USB0_BASE + 0x40000)
#define MSP_USB0_ID_END		(MSP_USB0_BASE + 0x4008f)
#define MSP_USB0_HS_START	(MSP_USB0_BASE + 0x40100)
#define MSP_USB0_HS_END		(MSP_USB0_BASE + 0x401FF)
#define	MSP_USB1_MAB_START	(MSP_USB1_BASE + 0x0)
#define MSP_USB1_MAB_END	(MSP_USB1_BASE + 0x17)
#define MSP_USB1_ID_START	(MSP_USB1_BASE + 0x40000)
#define MSP_USB1_ID_END		(MSP_USB1_BASE + 0x4008f)
#define MSP_USB1_HS_START	(MSP_USB1_BASE + 0x40100)
#define MSP_USB1_HS_END		(MSP_USB1_BASE + 0x401ff)
struct msp_usbid_regs ;
struct msp_mab_regs ;
struct msp_usbhs_regs ;
struct mspusb_device ;
#define to_mspusb_device(x) container_of((x), struct mspusb_device, dev)
#define TO_HOST_ID(x) ((x) & 0x3)
