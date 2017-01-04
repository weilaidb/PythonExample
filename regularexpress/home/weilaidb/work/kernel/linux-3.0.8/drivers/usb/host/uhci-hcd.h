#define __LINUX_UHCI_HCD_H
#define usb_packetid(pipe)	(usb_pipein(pipe) ? USB_PID_IN : USB_PID_OUT)
#define PIPE_DEVEP_MASK		0x0007ff00
#define USBCMD		0
#define   USBCMD_RS		0x0001
#define   USBCMD_HCRESET	0x0002
#define   USBCMD_GRESET		0x0004
#define   USBCMD_EGSM		0x0008
#define   USBCMD_FGR		0x0010
#define   USBCMD_SWDBG		0x0020
#define   USBCMD_CF		0x0040
#define   USBCMD_MAXP		0x0080
#define USBSTS		2
#define   USBSTS_USBINT		0x0001
#define   USBSTS_ERROR		0x0002
#define   USBSTS_RD		0x0004
#define   USBSTS_HSE		0x0008
#define   USBSTS_HCPE		0x0010
#define   USBSTS_HCH		0x0020
#define USBINTR		4
#define   USBINTR_TIMEOUT	0x0001
#define   USBINTR_RESUME	0x0002
#define   USBINTR_IOC		0x0004
#define   USBINTR_SP		0x0008
#define USBFRNUM	6
#define USBFLBASEADD	8
#define USBSOF		12
#define   USBSOF_DEFAULT	64
#define USBPORTSC1	16
#define USBPORTSC2	18
#define   USBPORTSC_CCS		0x0001
#define   USBPORTSC_CSC		0x0002
#define   USBPORTSC_PE		0x0004
#define   USBPORTSC_PEC		0x0008
#define   USBPORTSC_DPLUS	0x0010
#define   USBPORTSC_DMINUS	0x0020
#define   USBPORTSC_RD		0x0040
#define   USBPORTSC_RES1	0x0080
#define   USBPORTSC_LSDA	0x0100
#define   USBPORTSC_PR		0x0200
#define   USBPORTSC_OC		0x0400
#define   USBPORTSC_OCC		0x0800
#define   USBPORTSC_SUSP	0x1000
#define   USBPORTSC_RES2	0x2000
#define   USBPORTSC_RES3	0x4000
#define   USBPORTSC_RES4	0x8000
#define USBLEGSUP		0xc0
#define   USBLEGSUP_DEFAULT	0x2000
#define   USBLEGSUP_RWC		0x8f00
#define   USBLEGSUP_RO		0x5040
#define USBRES_INTEL		0xc4
#define   USBPORT1EN		0x01
#define   USBPORT2EN		0x02
#define UHCI_PTR_BITS(uhci)	cpu_to_hc32((uhci), 0x000F)
#define UHCI_PTR_TERM(uhci)	cpu_to_hc32((uhci), 0x0001)
#define UHCI_PTR_QH(uhci)	cpu_to_hc32((uhci), 0x0002)
#define UHCI_PTR_DEPTH(uhci)	cpu_to_hc32((uhci), 0x0004)
#define UHCI_PTR_BREADTH(uhci)	cpu_to_hc32((uhci), 0x0000)
#define UHCI_NUMFRAMES		1024
#define UHCI_MAX_SOF_NUMBER	2047
#define CAN_SCHEDULE_FRAMES	1000
#define MAX_PHASE		32
#define FSBR_OFF_DELAY		msecs_to_jiffies(10)
#define QH_WAIT_TIMEOUT		msecs_to_jiffies(200)
typedef __u32 __bitwise __hc32;
typedef __u16 __bitwise __hc16;
#define __hc32	__le32
#define __hc16	__le16
#define QH_STATE_IDLE		1
#define QH_STATE_UNLINKING	2
#define QH_STATE_ACTIVE		3
struct uhci_qh  __attribute__((aligned(16)));
#define qh_element(qh)		ACCESS_ONCE((qh)->element)
#define LINK_TO_QH(uhci, qh)	(UHCI_PTR_QH((uhci)) | \
cpu_to_hc32((uhci), (qh)->dma_handle))
#define TD_CTRL_SPD		(1 << 29)
#define TD_CTRL_C_ERR_MASK	(3 << 27)
#define TD_CTRL_C_ERR_SHIFT	27
#define TD_CTRL_LS		(1 << 26)
#define TD_CTRL_IOS		(1 << 25)
#define TD_CTRL_IOC		(1 << 24)
#define TD_CTRL_ACTIVE		(1 << 23)
#define TD_CTRL_STALLED		(1 << 22)
#define TD_CTRL_DBUFERR		(1 << 21)
#define TD_CTRL_BABBLE		(1 << 20)
#define TD_CTRL_NAK		(1 << 19)
#define TD_CTRL_CRCTIMEO	(1 << 18)
#define TD_CTRL_BITSTUFF	(1 << 17)
#define TD_CTRL_ACTLEN_MASK	0x7FF
#define TD_CTRL_ANY_ERROR	(TD_CTRL_STALLED | TD_CTRL_DBUFERR | \
TD_CTRL_BABBLE | TD_CTRL_CRCTIME | \
TD_CTRL_BITSTUFF)
#define uhci_maxerr(err)		((err) << TD_CTRL_C_ERR_SHIFT)
#define uhci_status_bits(ctrl_sts)	((ctrl_sts) & 0xF60000)
#define uhci_actual_length(ctrl_sts)	(((ctrl_sts) + 1) & \
TD_CTRL_ACTLEN_MASK)
#define td_token(uhci, td)	hc32_to_cpu((uhci), (td)->token)
#define TD_TOKEN_DEVADDR_SHIFT	8
#define TD_TOKEN_TOGGLE_SHIFT	19
#define TD_TOKEN_TOGGLE		(1 << 19)
#define TD_TOKEN_EXPLEN_SHIFT	21
#define TD_TOKEN_EXPLEN_MASK	0x7FF
#define TD_TOKEN_PID_MASK	0xFF
#define uhci_explen(len)	((((len) - 1) & TD_TOKEN_EXPLEN_MASK) << \
TD_TOKEN_EXPLEN_SHIFT)
#define uhci_expected_length(token) ((((token) >> TD_TOKEN_EXPLEN_SHIFT) + \
1) & TD_TOKEN_EXPLEN_MASK)
#define uhci_toggle(token)	(((token) >> TD_TOKEN_TOGGLE_SHIFT) & 1)
#define uhci_endpoint(token)	(((token) >> 15) & 0xf)
#define uhci_devaddr(token)	(((token) >> TD_TOKEN_DEVADDR_SHIFT) & 0x7f)
#define uhci_devep(token)	(((token) >> TD_TOKEN_DEVADDR_SHIFT) & 0x7ff)
#define uhci_packetid(token)	((token) & TD_TOKEN_PID_MASK)
#define uhci_packetout(token)	(uhci_packetid(token) != USB_PID_IN)
#define uhci_packetin(token)	(uhci_packetid(token) == USB_PID_IN)
struct uhci_td  __attribute__((aligned(16)));
#define td_status(uhci, td)		hc32_to_cpu((uhci), \
ACCESS_ONCE((td)->status))
#define LINK_TO_TD(uhci, td)		(cpu_to_hc32((uhci), (td)->dma_handle))
#define UHCI_NUM_SKELQH		11
#define SKEL_UNLINK		0
#define skel_unlink_qh		skelqh[SKEL_UNLINK]
#define SKEL_ISO		1
#define skel_iso_qh		skelqh[SKEL_ISO]
#define SKEL_INDEX(exponent)	(9 - exponent)
#define SKEL_ASYNC		9
#define skel_async_qh		skelqh[SKEL_ASYNC]
#define SKEL_TERM		10
#define skel_term_qh		skelqh[SKEL_TERM]
#define SKEL_LS_CONTROL		20
#define SKEL_FS_CONTROL		21
#define SKEL_FSBR		SKEL_FS_CONTROL
#define SKEL_BULK		22
enum uhci_rh_state ;
struct uhci_hcd ;
static inline struct uhci_hcd *hcd_to_uhci(struct usb_hcd *hcd)
static inline struct usb_hcd *uhci_to_hcd(struct uhci_hcd *uhci)
#define uhci_dev(u)	(uhci_to_hcd(u)->self.controller)
#define uhci_frame_before_eq(f1, f2)	(0 <= (int) ((f2) - (f1)))
struct urb_priv ;
#define PCI_VENDOR_ID_GENESYS		0x17a0
#define PCI_DEVICE_ID_GL880S_UHCI	0x8083
static inline u32 uhci_readl(const struct uhci_hcd *uhci, int reg)
static inline void uhci_writel(const struct uhci_hcd *uhci, u32 val, int reg)
static inline u16 uhci_readw(const struct uhci_hcd *uhci, int reg)
static inline void uhci_writew(const struct uhci_hcd *uhci, u16 val, int reg)
static inline u8 uhci_readb(const struct uhci_hcd *uhci, int reg)
static inline void uhci_writeb(const struct uhci_hcd *uhci, u8 val, int reg)
#define uhci_has_pci_registers(u)	((u)->io_addr != 0)
#define uhci_has_pci_registers(u)	0
#define uhci_big_endian_mmio(u)		((u)->big_endian_mmio)
#define uhci_big_endian_mmio(u)		0
static inline u32 uhci_readl(const struct uhci_hcd *uhci, int reg)
static inline void uhci_writel(const struct uhci_hcd *uhci, u32 val, int reg)
static inline u16 uhci_readw(const struct uhci_hcd *uhci, int reg)
static inline void uhci_writew(const struct uhci_hcd *uhci, u16 val, int reg)
static inline u8 uhci_readb(const struct uhci_hcd *uhci, int reg)
static inline void uhci_writeb(const struct uhci_hcd *uhci, u8 val, int reg)
#define uhci_big_endian_desc(u)		((u)->big_endian_desc)
static inline __hc32 cpu_to_hc32(const struct uhci_hcd *uhci, const u32 x)
static inline u32 hc32_to_cpu(const struct uhci_hcd *uhci, const __hc32 x)
static inline __hc32 cpu_to_hc32(const struct uhci_hcd *uhci, const u32 x)
static inline u32 hc32_to_cpu(const struct uhci_hcd *uhci, const __hc32 x)
