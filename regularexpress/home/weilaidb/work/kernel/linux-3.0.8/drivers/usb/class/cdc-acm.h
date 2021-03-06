#define CMSPAR			0
#define ACM_TTY_MAJOR		166
#define ACM_TTY_MINORS		32
#define USB_RT_ACM		(USB_TYPE_CLASS | USB_RECIP_INTERFACE)
#define ACM_CTRL_DTR		0x01
#define ACM_CTRL_RTS		0x02
#define ACM_CTRL_DCD		0x01
#define ACM_CTRL_DSR		0x02
#define ACM_CTRL_BRK		0x04
#define ACM_CTRL_RI		0x08
#define ACM_CTRL_FRAMING	0x10
#define ACM_CTRL_PARITY		0x20
#define ACM_CTRL_OVERRUN	0x40
#define ACM_NW  16
#define ACM_NR  16
struct acm_wb ;
struct acm_rb ;
struct acm ;
#define CDC_DATA_INTERFACE_TYPE	0x0a
#define NO_UNION_NORMAL			1
#define SINGLE_RX_URB			2
#define NO_CAP_LINE			4
#define NOT_A_MODEM			8
#define NO_DATA_INTERFACE		16
