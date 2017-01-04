#define _EHCI_FSL_H
#define FSL_SOC_USB_ULPIVP	0x170
#define FSL_SOC_USB_PORTSC1	0x184
#define PORT_PTS_MSK		(3<<30)
#define PORT_PTS_UTMI		(0<<30)
#define PORT_PTS_ULPI		(2<<30)
#define	PORT_PTS_SERIAL		(3<<30)
#define PORT_PTS_PTW		(1<<28)
#define FSL_SOC_USB_PORTSC2	0x188
#define FSL_SOC_USB_USBMODE	0x1a8
#define USBMODE_CM_MASK		(3 << 0)
#define USBMODE_CM_HOST		(3 << 0)
#define USBMODE_ES		(1 << 2)
#define FSL_SOC_USB_USBGENCTRL	0x200
#define USBGENCTRL_PPP		(1 << 3)
#define USBGENCTRL_PFP		(1 << 2)
#define FSL_SOC_USB_ISIPHYCTRL	0x204
#define ISIPHYCTRL_PXE		(1)
#define ISIPHYCTRL_PHYE		(1 << 4)
#define FSL_SOC_USB_SNOOP1	0x400
#define FSL_SOC_USB_SNOOP2	0x404
#define FSL_SOC_USB_AGECNTTHRSH	0x408
#define FSL_SOC_USB_PRICTRL	0x40c
#define FSL_SOC_USB_SICTRL	0x410
#define FSL_SOC_USB_CTRL	0x500
#define SNOOP_SIZE_2GB		0x1e