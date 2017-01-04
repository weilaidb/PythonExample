#define RENESAS_USB_DRIVER_H
struct usbhs_priv;
#define SYSCFG		0x0000
#define BUSWAIT		0x0002
#define DVSTCTR		0x0008
#define CFIFO		0x0014
#define CFIFOSEL	0x0020
#define CFIFOCTR	0x0022
#define INTENB0		0x0030
#define INTENB1		0x0032
#define BRDYENB		0x0036
#define NRDYENB		0x0038
#define BEMPENB		0x003A
#define INTSTS0		0x0040
#define INTSTS1		0x0042
#define BRDYSTS		0x0046
#define NRDYSTS		0x0048
#define BEMPSTS		0x004A
#define FRMNUM		0x004C
#define USBREQ		0x0054
#define USBVAL		0x0056
#define USBINDX		0x0058
#define USBLENG		0x005A
#define DCPCFG		0x005C
#define DCPMAXP		0x005E
#define DCPCTR		0x0060
#define PIPESEL		0x0064
#define PIPECFG		0x0068
#define PIPEBUF		0x006A
#define PIPEMAXP	0x006C
#define PIPEPERI	0x006E
#define PIPEnCTR	0x0070
#define SCKE	(1 << 10)
#define HSE	(1 << 7)
#define DCFM	(1 << 6)
#define DRPD	(1 << 5)
#define DPRPU	(1 << 4)
#define USBE	(1 << 0)
#define EXTLP	(1 << 10)
#define PWEN	(1 << 9)
#define RHST	(0x7)
#define  RHST_LOW_SPEED  1
#define  RHST_FULL_SPEED 2
#define  RHST_HIGH_SPEED 3
#define MBW_32	(0x2 << 10)
#define BVAL	(1 << 15)
#define BCLR	(1 << 14)
#define FRDY	(1 << 13)
#define DTLN_MASK (0x0FFF)
#define VBSE	(1 << 15)
#define RSME	(1 << 14)
#define SOFE	(1 << 13)
#define DVSE	(1 << 12)
#define CTRE	(1 << 11)
#define BEMPE	(1 << 10)
#define NRDYE	(1 << 9)
#define BRDYE	(1 << 8)
#define BCHGE	(1 << 14)
#define DTCHE	(1 << 12)
#define ATTCHE	(1 << 11)
#define EOFERRE	(1 << 6)
#define SIGNE	(1 << 5)
#define SACKE	(1 << 4)
#define VBINT	(1 << 15)
#define DVST	(1 << 12)
#define CTRT	(1 << 11)
#define BEMP	(1 << 10)
#define BRDY	(1 << 8)
#define VBSTS	(1 << 7)
#define VALID	(1 << 3)
#define DVSQ_MASK		(0x3 << 4)
#define  POWER_STATE		(0 << 4)
#define  DEFAULT_STATE		(1 << 4)
#define  ADDRESS_STATE		(2 << 4)
#define  CONFIGURATION_STATE	(3 << 4)
#define CTSQ_MASK		(0x7)
#define  IDLE_SETUP_STAGE	0
#define  READ_DATA_STAGE	1
#define  READ_STATUS_STAGE	2
#define  WRITE_DATA_STAGE	3
#define  WRITE_STATUS_STAGE	4
#define  NODATA_STATUS_STAGE	5
#define  SEQUENCE_ERROR		6
#define TYPE_NONE	(0 << 14)
#define TYPE_BULK	(1 << 14)
#define TYPE_INT	(2 << 14)
#define TYPE_ISO	(3 << 14)
#define DBLB		(1 << 9)
#define SHTNAK		(1 << 7)
#define DIR_OUT		(1 << 4)
#define DEVSEL_MASK	(0xF << 12)
#define DCP_MAXP_MASK	(0x7F)
#define PIPE_MAXP_MASK	(0x7FF)
#define BUFSIZE_SHIFT	10
#define BUFSIZE_MASK	(0x1F << BUFSIZE_SHIFT)
#define BUFNMB_MASK	(0xFF)
#define BSTS		(1 << 15)
#define CSSTS		(1 << 12)
#define SQCLR		(1 << 8)
#define	ACLRM		(1 << 9)
#define PBUSY		(1 << 5)
#define PID_MASK	(0x3)
#define  PID_NAK	0
#define  PID_BUF	1
#define  PID_STALL10	2
#define  PID_STALL11	3
#define CCPL		(1 << 2)
#define FRNM_MASK	(0x7FF)
struct usbhs_priv ;
u16 usbhs_read(struct usbhs_priv *priv, u32 reg);
void usbhs_write(struct usbhs_priv *priv, u32 reg, u16 data);
void usbhs_bset(struct usbhs_priv *priv, u32 reg, u16 mask, u16 data);
int usbhsc_drvcllbck_notify_hotplug(struct platform_device *pdev);
void usbhs_sys_clock_ctrl(struct usbhs_priv *priv, int enable);
void usbhs_sys_hispeed_ctrl(struct usbhs_priv *priv, int enable);
void usbhs_sys_usb_ctrl(struct usbhs_priv *priv, int enable);
void usbhs_sys_host_ctrl(struct usbhs_priv *priv, int enable);
void usbhs_sys_function_ctrl(struct usbhs_priv *priv, int enable);
int usbhs_frame_get_num(struct usbhs_priv *priv);
struct usbhs_priv *usbhs_pdev_to_priv(struct platform_device *pdev);
#define usbhs_get_dparam(priv, param)	(priv->dparam->param)
#define usbhs_priv_to_pdev(priv)	(priv->pdev)
#define usbhs_priv_to_dev(priv)		(&priv->pdev->dev)
#define usbhs_priv_to_lock(priv)	(&priv->lock)
