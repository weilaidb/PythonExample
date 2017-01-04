typedef __u32 __bitwise __hc32;
typedef __u16 __bitwise __hc16;
struct ed  __attribute__ ((aligned(16)));
#define ED_MASK	((u32)~0x0f)
struct td  __attribute__ ((aligned(32)));
#define TD_MASK	((u32)~0x1f)
#define TD_CC_NOERROR      0x00
#define TD_CC_CRC          0x01
#define TD_CC_BITSTUFFING  0x02
#define TD_CC_DATATOGGLEM  0x03
#define TD_CC_STALL        0x04
#define TD_DEVNOTRESP      0x05
#define TD_PIDCHECKFAIL    0x06
#define TD_UNEXPECTEDPID   0x07
#define TD_DATAOVERRUN     0x08
#define TD_DATAUNDERRUN    0x09
#define TD_BUFFEROVERRUN   0x0C
#define TD_BUFFERUNDERRUN  0x0D
#define TD_NOTACCESSED     0x0F
static const int cc_to_error [16] = ;
struct ohci_hcca  __attribute__ ((aligned(256)));
struct ohci_regs  __attribute__ ((aligned(32)));
#define OHCI_CTRL_CBSR	(3 << 0)
#define OHCI_CTRL_PLE	(1 << 2)
#define OHCI_CTRL_IE	(1 << 3)
#define OHCI_CTRL_CLE	(1 << 4)
#define OHCI_CTRL_BLE	(1 << 5)
#define OHCI_CTRL_HCFS	(3 << 6)
#define OHCI_CTRL_IR	(1 << 8)
#define OHCI_CTRL_RWC	(1 << 9)
#define OHCI_CTRL_RWE	(1 << 10)
#	define OHCI_USB_RESET	(0 << 6)
#	define OHCI_USB_RESUME	(1 << 6)
#	define OHCI_USB_OPER	(2 << 6)
#	define OHCI_USB_SUSPEND	(3 << 6)
#define OHCI_HCR	(1 << 0)
#define OHCI_CLF	(1 << 1)
#define OHCI_BLF	(1 << 2)
#define OHCI_OCR	(1 << 3)
#define OHCI_SOC	(3 << 16)
#define OHCI_INTR_SO	(1 << 0)
#define OHCI_INTR_WDH	(1 << 1)
#define OHCI_INTR_SF	(1 << 2)
#define OHCI_INTR_RD	(1 << 3)
#define OHCI_INTR_UE	(1 << 4)
#define OHCI_INTR_FNO	(1 << 5)
#define OHCI_INTR_RHSC	(1 << 6)
#define OHCI_INTR_OC	(1 << 30)
#define OHCI_INTR_MIE	(1 << 31)
#define RH_PS_CCS            0x00000001
#define RH_PS_PES            0x00000002
#define RH_PS_PSS            0x00000004
#define RH_PS_POCI           0x00000008
#define RH_PS_PRS            0x00000010
#define RH_PS_PPS            0x00000100
#define RH_PS_LSDA           0x00000200
#define RH_PS_CSC            0x00010000
#define RH_PS_PESC           0x00020000
#define RH_PS_PSSC           0x00040000
#define RH_PS_OCIC           0x00080000
#define RH_PS_PRSC           0x00100000
#define RH_HS_LPS	     0x00000001
#define RH_HS_OCI	     0x00000002
#define RH_HS_DRWE	     0x00008000
#define RH_HS_LPSC	     0x00010000
#define RH_HS_OCIC	     0x00020000
#define RH_HS_CRWE	     0x80000000
#define RH_B_DR		0x0000ffff
#define RH_B_PPCM	0xffff0000
#define	RH_A_NDP	(0xff << 0)
#define	RH_A_PSM	(1 << 8)
#define	RH_A_NPS	(1 << 9)
#define	RH_A_DT		(1 << 10)
#define	RH_A_OCPM	(1 << 11)
#define	RH_A_NOCP	(1 << 12)
#define	RH_A_POTPGT	(0xff << 24)
typedef struct urb_priv  urb_priv_t;
#define TD_HASH_SIZE    64
#define TD_HASH_FUNC(td_dma) ((td_dma ^ (td_dma >> 6)) % TD_HASH_SIZE)
struct ohci_hcd ;
static inline int quirk_nec(struct ohci_hcd *ohci)
static inline int quirk_zfmicro(struct ohci_hcd *ohci)
static inline int quirk_amdiso(struct ohci_hcd *ohci)
static inline int quirk_amdprefetch(struct ohci_hcd *ohci)
static inline int quirk_nec(struct ohci_hcd *ohci)
static inline int quirk_zfmicro(struct ohci_hcd *ohci)
static inline int quirk_amdiso(struct ohci_hcd *ohci)
static inline int quirk_amdprefetch(struct ohci_hcd *ohci)
static inline struct ohci_hcd *hcd_to_ohci (struct usb_hcd *hcd)
static inline struct usb_hcd *ohci_to_hcd (const struct ohci_hcd *ohci)
#define STUB_DEBUG_FILES
#define ohci_dbg(ohci, fmt, args...) \
dev_dbg (ohci_to_hcd(ohci)->self.controller , fmt , ## args )
#define ohci_err(ohci, fmt, args...) \
dev_err (ohci_to_hcd(ohci)->self.controller , fmt , ## args )
#define ohci_info(ohci, fmt, args...) \
dev_info (ohci_to_hcd(ohci)->self.controller , fmt , ## args )
#define ohci_warn(ohci, fmt, args...) \
dev_warn (ohci_to_hcd(ohci)->self.controller , fmt , ## args )
#	define ohci_vdbg ohci_dbg
#	define ohci_vdbg(ohci, fmt, args...) do  while (0)
#define big_endian_desc(ohci)	(ohci->flags & OHCI_QUIRK_BE_DESC)
#define big_endian_desc(ohci)	1
#define big_endian_desc(ohci)	0
#define big_endian_mmio(ohci)	(ohci->flags & OHCI_QUIRK_BE_MMIO)
#define big_endian_mmio(ohci)	1
#define big_endian_mmio(ohci)	0
static inline unsigned int _ohci_readl (const struct ohci_hcd *ohci,
__hc32 __iomem * regs)
static inline void _ohci_writel (const struct ohci_hcd *ohci,
const unsigned int val, __hc32 __iomem *regs)
#define ohci_readl(o,r)		_ohci_readl(o,r)
#define ohci_writel(o,v,r)	_ohci_writel(o,v,r)
static inline __hc16 cpu_to_hc16 (const struct ohci_hcd *ohci, const u16 x)
static inline __hc16 cpu_to_hc16p (const struct ohci_hcd *ohci, const u16 *x)
static inline __hc32 cpu_to_hc32 (const struct ohci_hcd *ohci, const u32 x)
static inline __hc32 cpu_to_hc32p (const struct ohci_hcd *ohci, const u32 *x)
static inline u16 hc16_to_cpu (const struct ohci_hcd *ohci, const __hc16 x)
static inline u16 hc16_to_cpup (const struct ohci_hcd *ohci, const __hc16 *x)
static inline u32 hc32_to_cpu (const struct ohci_hcd *ohci, const __hc32 x)
static inline u32 hc32_to_cpup (const struct ohci_hcd *ohci, const __hc32 *x)
#define big_endian_frame_no_quirk(ohci)	(ohci->flags & OHCI_QUIRK_FRAME_NO)
#define big_endian_frame_no_quirk(ohci)	0
static inline u16 ohci_frame_no(const struct ohci_hcd *ohci)
static inline __hc16 *ohci_hwPSWp(const struct ohci_hcd *ohci,
const struct td *td, int index)
static inline u16 ohci_hwPSW(const struct ohci_hcd *ohci,
const struct td *td, int index)
static inline void disable (struct ohci_hcd *ohci)
#define	FI			0x2edf
#define	FSMP(fi)		(0x7fff & ((6 * ((fi) - 210)) / 7))
#define	FIT			(1 << 31)
#define LSTHRESH		0x628
static inline void periodic_reinit (struct ohci_hcd *ohci)
#define read_roothub(hc, register, mask) ()
static inline u32 roothub_a (struct ohci_hcd *hc)
static inline u32 roothub_b (struct ohci_hcd *hc)
static inline u32 roothub_status (struct ohci_hcd *hc)
static inline u32 roothub_portstatus (struct ohci_hcd *hc, int i)
