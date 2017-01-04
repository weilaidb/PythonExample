#define MXC_OTG_OFFSET			0
#define MXC_H1_OFFSET			0x200
#define MXC_H2_OFFSET			0x400
#define MXC_OTG_UCTRL_OWIE_BIT		(1 << 27)
#define MXC_OTG_UCTRL_OPM_BIT		(1 << 24)
#define MXC_H1_UCTRL_H1UIE_BIT		(1 << 12)
#define MXC_H1_UCTRL_H1WIE_BIT		(1 << 11)
#define MXC_H1_UCTRL_H1PM_BIT		(1 <<  8)
#define MXC_OTG_PHYCTRL_OC_DIS_BIT	(1 << 8)
#define MXC_H1_OC_DIS_BIT		(1 << 5)
#define MXC_H2_UCTRL_H2UIE_BIT		(1 << 8)
#define MXC_H2_UCTRL_H2WIE_BIT		(1 << 7)
#define MXC_H2_UCTRL_H2PM_BIT		(1 << 4)
#define MXC_USBCMD_OFFSET		0x140
#define MXC_UCMD_ITC_NO_THRESHOLD_MASK	(~(0xff << 16))
int mx51_initialize_usb_hw(int port, unsigned int flags)
