#define	__SENTELIC_H
#define	FSP_REG_DEVICE_ID	0x00
#define	FSP_REG_VERSION		0x01
#define	FSP_REG_REVISION	0x04
#define	FSP_REG_TMOD_STATUS1	0x0B
#define	FSP_BIT_NO_ROTATION	BIT(3)
#define	FSP_REG_PAGE_CTRL	0x0F
#define	FSP_REG_SYSCTL1		0x10
#define	FSP_BIT_EN_REG_CLK	BIT(5)
#define	FSP_REG_OPC_QDOWN	0x31
#define	FSP_BIT_EN_OPC_TAG	BIT(7)
#define	FSP_REG_OPTZ_XLO	0x34
#define	FSP_REG_OPTZ_XHI	0x35
#define	FSP_REG_OPTZ_YLO	0x36
#define	FSP_REG_OPTZ_YHI	0x37
#define	FSP_REG_SYSCTL5		0x40
#define	FSP_BIT_90_DEGREE	BIT(0)
#define	FSP_BIT_EN_MSID6	BIT(1)
#define	FSP_BIT_EN_MSID7	BIT(2)
#define	FSP_BIT_EN_MSID8	BIT(3)
#define	FSP_BIT_EN_AUTO_MSID8	BIT(5)
#define	FSP_BIT_EN_PKT_G0	BIT(6)
#define	FSP_REG_ONPAD_CTL	0x43
#define	FSP_BIT_ONPAD_ENABLE	BIT(0)
#define	FSP_BIT_ONPAD_FBBB	BIT(1)
#define	FSP_BIT_FIX_VSCR	BIT(3)
#define	FSP_BIT_FIX_HSCR	BIT(5)
#define	FSP_BIT_DRAG_LOCK	BIT(6)
#define	FSP_PKT_TYPE_NORMAL	(0x00)
#define	FSP_PKT_TYPE_ABS	(0x01)
#define	FSP_PKT_TYPE_NOTIFY	(0x02)
#define	FSP_PKT_TYPE_NORMAL_OPC	(0x03)
#define	FSP_PKT_TYPE_SHIFT	(6)
struct fsp_data ;
extern int fsp_detect(struct psmouse *psmouse, bool set_properties);
extern int fsp_init(struct psmouse *psmouse);
inline int fsp_detect(struct psmouse *psmouse, bool set_properties)
inline int fsp_init(struct psmouse *psmouse)
