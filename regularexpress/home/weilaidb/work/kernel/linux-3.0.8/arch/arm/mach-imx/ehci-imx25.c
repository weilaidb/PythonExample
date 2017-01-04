#define USBCTRL_OTGBASE_OFFSET	0x600
#define MX25_OTG_SIC_SHIFT	29
#define MX25_OTG_SIC_MASK	(0x3 << MX25_OTG_SIC_SHIFT)
#define MX25_OTG_PM_BIT		(1 << 24)
#define MX25_H1_SIC_SHIFT	21
#define MX25_H1_SIC_MASK	(0x3 << MX25_H1_SIC_SHIFT)
#define MX25_H1_PM_BIT		(1 << 8)
#define MX25_H1_IPPUE_UP_BIT	(1 << 7)
#define MX25_H1_IPPUE_DOWN_BIT	(1 << 6)
#define MX25_H1_TLL_BIT		(1 << 5)
#define MX25_H1_USBTE_BIT	(1 << 4)
int mx25_initialize_usb_hw(int port, unsigned int flags)
