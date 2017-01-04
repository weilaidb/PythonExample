#define USBCTRL_OTGBASE_OFFSET	0x600
#define MX27_OTG_SIC_SHIFT	29
#define MX27_OTG_SIC_MASK	(0x3 << MX27_OTG_SIC_SHIFT)
#define MX27_OTG_PM_BIT		(1 << 24)
#define MX27_H2_SIC_SHIFT	21
#define MX27_H2_SIC_MASK	(0x3 << MX27_H2_SIC_SHIFT)
#define MX27_H2_PM_BIT		(1 << 16)
#define MX27_H2_DT_BIT		(1 << 5)
#define MX27_H1_SIC_SHIFT	13
#define MX27_H1_SIC_MASK	(0x3 << MX27_H1_SIC_SHIFT)
#define MX27_H1_PM_BIT		(1 << 8)
#define MX27_H1_DT_BIT		(1 << 4)
int mx27_initialize_usb_hw(int port, unsigned int flags)
