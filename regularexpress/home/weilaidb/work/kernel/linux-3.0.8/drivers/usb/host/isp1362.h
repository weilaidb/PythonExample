#if defined(CONFIG_BLACKFIN)
#define USE_32BIT		0
#define MAX_ROOT_PORTS		2
#define USE_PLATFORM_DELAY	0
#define USE_NDELAY		1
#define DUMMY_DELAY_ACCESS \
do  while (0)
#undef insw
#undef outsw
#define insw  delayed_insw
#define outsw  delayed_outsw
static inline void delayed_outsw(unsigned int addr, void *buf, int len)
static inline void delayed_insw(unsigned int addr, void *buf, int len)
#define MAX_ROOT_PORTS		2
#define USE_32BIT		0
#define USE_PLATFORM_DELAY	0
#define USE_NDELAY		0
#define DUMMY_DELAY_ACCESS do  while (0)
#define USB_RESET_WIDTH			50
#define MAX_XFER_SIZE			1023
#define ISP1362_BUF_SIZE		4096
#define ISP1362_ISTL_BUFSIZE		512
#define ISP1362_INTL_BLKSIZE		64
#define ISP1362_INTL_BUFFERS		16
#define ISP1362_ATL_BLKSIZE		64
#define ISP1362_REG_WRITE_OFFSET	0x80
typedef const unsigned int isp1362_reg_t;
#define REG_WIDTH_16			0x000
#define REG_WIDTH_32			0x100
#define REG_WIDTH_MASK			0x100
#define REG_NO_MASK			0x0ff
#define REG_ACCESS_R			0x200
#define REG_ACCESS_W			0x400
#define REG_ACCESS_RW			0x600
#define REG_ACCESS_MASK			0x600
#define ISP1362_REG_NO(r)		((r) & REG_NO_MASK)
#define _BUG_ON(x)	BUG_ON(x)
#define _WARN_ON(x)	WARN_ON(x)
#define ISP1362_REG(name, addr, width, rw) \
static isp1362_reg_t ISP1362_REG_##name = ((addr) | (width) | (rw))
#define REG_ACCESS_TEST(r)   BUG_ON(((r) & ISP1362_REG_WRITE_OFFSET) && !((r) & REG_ACCESS_W))
#define REG_WIDTH_TEST(r, w) BUG_ON(((r) & REG_WIDTH_MASK) != (w))
typedef const unsigned char isp1362_reg_t;
#define ISP1362_REG_NO(r)		(r)
#define _BUG_ON(x)			do  while (0)
#define _WARN_ON(x)			do  while (0)
#define ISP1362_REG(name, addr, width, rw) \
static isp1362_reg_t ISP1362_REG_##name = addr
#define REG_ACCESS_TEST(r)		do  while (0)
#define REG_WIDTH_TEST(r, w)		do  while (0)
ISP1362_REG(HCREVISION,	0x00,	REG_WIDTH_32,	REG_ACCESS_R);
ISP1362_REG(HCCONTROL,	0x01,	REG_WIDTH_32,	REG_ACCESS_RW);
ISP1362_REG(HCCMDSTAT,	0x02,	REG_WIDTH_32,	REG_ACCESS_RW);
ISP1362_REG(HCINTSTAT,	0x03,	REG_WIDTH_32,	REG_ACCESS_RW);
ISP1362_REG(HCINTENB,	0x04,	REG_WIDTH_32,	REG_ACCESS_RW);
ISP1362_REG(HCINTDIS,	0x05,	REG_WIDTH_32,	REG_ACCESS_RW);
ISP1362_REG(HCFMINTVL,	0x0d,	REG_WIDTH_32,	REG_ACCESS_RW);
ISP1362_REG(HCFMREM,	0x0e,	REG_WIDTH_32,	REG_ACCESS_RW);
ISP1362_REG(HCFMNUM,	0x0f,	REG_WIDTH_32,	REG_ACCESS_RW);
ISP1362_REG(HCLSTHRESH,	0x11,	REG_WIDTH_32,	REG_ACCESS_RW);
ISP1362_REG(HCRHDESCA,	0x12,	REG_WIDTH_32,	REG_ACCESS_RW);
ISP1362_REG(HCRHDESCB,	0x13,	REG_WIDTH_32,	REG_ACCESS_RW);
ISP1362_REG(HCRHSTATUS,	0x14,	REG_WIDTH_32,	REG_ACCESS_RW);
ISP1362_REG(HCRHPORT1,	0x15,	REG_WIDTH_32,	REG_ACCESS_RW);
ISP1362_REG(HCRHPORT2,	0x16,	REG_WIDTH_32,	REG_ACCESS_RW);
ISP1362_REG(HCHWCFG,	0x20,	REG_WIDTH_16,	REG_ACCESS_RW);
#define HCHWCFG_DISABLE_SUSPEND	(1 << 15)
#define HCHWCFG_GLOBAL_PWRDOWN	(1 << 14)
#define HCHWCFG_PULLDOWN_DS2	(1 << 13)
#define HCHWCFG_PULLDOWN_DS1	(1 << 12)
#define HCHWCFG_CLKNOTSTOP	(1 << 11)
#define HCHWCFG_ANALOG_OC	(1 << 10)
#define HCHWCFG_ONEINT		(1 << 9)
#define HCHWCFG_DACK_MODE	(1 << 8)
#define HCHWCFG_ONEDMA		(1 << 7)
#define HCHWCFG_DACK_POL	(1 << 6)
#define HCHWCFG_DREQ_POL	(1 << 5)
#define HCHWCFG_DBWIDTH_MASK	(0x03 << 3)
#define HCHWCFG_DBWIDTH(n)	(((n) << 3) & HCHWCFG_DBWIDTH_MASK)
#define HCHWCFG_INT_POL		(1 << 2)
#define HCHWCFG_INT_TRIGGER	(1 << 1)
#define HCHWCFG_INT_ENABLE	(1 << 0)
ISP1362_REG(HCDMACFG,	0x21,	REG_WIDTH_16,	REG_ACCESS_RW);
#define HCDMACFG_CTR_ENABLE	(1 << 7)
#define HCDMACFG_BURST_LEN_MASK	(0x03 << 5)
#define HCDMACFG_BURST_LEN(n)	(((n) << 5) & HCDMACFG_BURST_LEN_MASK)
#define HCDMACFG_BURST_LEN_1	HCDMACFG_BURST_LEN(0)
#define HCDMACFG_BURST_LEN_4	HCDMACFG_BURST_LEN(1)
#define HCDMACFG_BURST_LEN_8	HCDMACFG_BURST_LEN(2)
#define HCDMACFG_DMA_ENABLE	(1 << 4)
#define HCDMACFG_BUF_TYPE_MASK	(0x07 << 1)
#define HCDMACFG_BUF_TYPE(n)	(((n) << 1) & HCDMACFG_BUF_TYPE_MASK)
#define HCDMACFG_BUF_ISTL0	HCDMACFG_BUF_TYPE(0)
#define HCDMACFG_BUF_ISTL1	HCDMACFG_BUF_TYPE(1)
#define HCDMACFG_BUF_INTL	HCDMACFG_BUF_TYPE(2)
#define HCDMACFG_BUF_ATL	HCDMACFG_BUF_TYPE(3)
#define HCDMACFG_BUF_DIRECT	HCDMACFG_BUF_TYPE(4)
#define HCDMACFG_DMA_RW_SELECT	(1 << 0)
ISP1362_REG(HCXFERCTR,	0x22,	REG_WIDTH_16,	REG_ACCESS_RW);
ISP1362_REG(HCuPINT,	0x24,	REG_WIDTH_16,	REG_ACCESS_RW);
#define HCuPINT_SOF		(1 << 0)
#define HCuPINT_ISTL0		(1 << 1)
#define HCuPINT_ISTL1		(1 << 2)
#define HCuPINT_EOT		(1 << 3)
#define HCuPINT_OPR		(1 << 4)
#define HCuPINT_SUSP		(1 << 5)
#define HCuPINT_CLKRDY		(1 << 6)
#define HCuPINT_INTL		(1 << 7)
#define HCuPINT_ATL		(1 << 8)
#define HCuPINT_OTG		(1 << 9)
ISP1362_REG(HCuPINTENB,	0x25,	REG_WIDTH_16,	REG_ACCESS_RW);
ISP1362_REG(HCCHIPID,	0x27,	REG_WIDTH_16,	REG_ACCESS_R);
#define HCCHIPID_MASK		0xff00
#define HCCHIPID_MAGIC		0x3600
ISP1362_REG(HCSCRATCH,	0x28,	REG_WIDTH_16,	REG_ACCESS_RW);
ISP1362_REG(HCSWRES,	0x29,	REG_WIDTH_16,	REG_ACCESS_W);
#define HCSWRES_MAGIC		0x00f6
ISP1362_REG(HCBUFSTAT,	0x2c,	REG_WIDTH_16,	REG_ACCESS_RW);
#define HCBUFSTAT_ISTL0_FULL	(1 << 0)
#define HCBUFSTAT_ISTL1_FULL	(1 << 1)
#define HCBUFSTAT_INTL_ACTIVE	(1 << 2)
#define HCBUFSTAT_ATL_ACTIVE	(1 << 3)
#define HCBUFSTAT_RESET_HWPP	(1 << 4)
#define HCBUFSTAT_ISTL0_ACTIVE	(1 << 5)
#define HCBUFSTAT_ISTL1_ACTIVE	(1 << 6)
#define HCBUFSTAT_ISTL0_DONE	(1 << 8)
#define HCBUFSTAT_ISTL1_DONE	(1 << 9)
#define HCBUFSTAT_PAIRED_PTDPP	(1 << 10)
ISP1362_REG(HCDIRADDR,	0x32,	REG_WIDTH_32,	REG_ACCESS_RW);
#define HCDIRADDR_ADDR_MASK	0x0000ffff
#define HCDIRADDR_ADDR(n)	(((n) << 0) & HCDIRADDR_ADDR_MASK)
#define HCDIRADDR_COUNT_MASK	0xffff0000
#define HCDIRADDR_COUNT(n)	(((n) << 16) & HCDIRADDR_COUNT_MASK)
ISP1362_REG(HCDIRDATA,	0x45,	REG_WIDTH_16,	REG_ACCESS_RW);
ISP1362_REG(HCISTLBUFSZ, 0x30,	REG_WIDTH_16,	REG_ACCESS_RW);
ISP1362_REG(HCISTL0PORT, 0x40,	REG_WIDTH_16,	REG_ACCESS_RW);
ISP1362_REG(HCISTL1PORT, 0x42,	REG_WIDTH_16,	REG_ACCESS_RW);
ISP1362_REG(HCISTLRATE,	0x47,	REG_WIDTH_16,	REG_ACCESS_RW);
ISP1362_REG(HCINTLBUFSZ, 0x33,	REG_WIDTH_16,	REG_ACCESS_RW);
ISP1362_REG(HCINTLPORT,	0x43,	REG_WIDTH_16,	REG_ACCESS_RW);
ISP1362_REG(HCINTLBLKSZ, 0x53,	REG_WIDTH_16,	REG_ACCESS_RW);
ISP1362_REG(HCINTLDONE,	0x17,	REG_WIDTH_32,	REG_ACCESS_R);
ISP1362_REG(HCINTLSKIP,	0x18,	REG_WIDTH_32,	REG_ACCESS_RW);
ISP1362_REG(HCINTLLAST,	0x19,	REG_WIDTH_32,	REG_ACCESS_RW);
ISP1362_REG(HCINTLCURR,	0x1a,	REG_WIDTH_16,	REG_ACCESS_R);
ISP1362_REG(HCATLBUFSZ, 0x34,	REG_WIDTH_16,	REG_ACCESS_RW);
ISP1362_REG(HCATLPORT,	0x44,	REG_WIDTH_16,	REG_ACCESS_RW);
ISP1362_REG(HCATLBLKSZ, 0x54,	REG_WIDTH_16,	REG_ACCESS_RW);
ISP1362_REG(HCATLDONE,	0x1b,	REG_WIDTH_32,	REG_ACCESS_R);
ISP1362_REG(HCATLSKIP,	0x1c,	REG_WIDTH_32,	REG_ACCESS_RW);
ISP1362_REG(HCATLLAST,	0x1d,	REG_WIDTH_32,	REG_ACCESS_RW);
ISP1362_REG(HCATLCURR,	0x1e,	REG_WIDTH_16,	REG_ACCESS_R);
ISP1362_REG(HCATLDTC,	0x51,	REG_WIDTH_16,	REG_ACCESS_RW);
ISP1362_REG(HCATLDTCTO,	0x52,	REG_WIDTH_16,	REG_ACCESS_RW);
ISP1362_REG(OTGCONTROL,	0x62,	REG_WIDTH_16,	REG_ACCESS_RW);
ISP1362_REG(OTGSTATUS,	0x67,	REG_WIDTH_16,	REG_ACCESS_R);
ISP1362_REG(OTGINT,	0x68,	REG_WIDTH_16,	REG_ACCESS_RW);
ISP1362_REG(OTGINTENB,	0x69,	REG_WIDTH_16,	REG_ACCESS_RW);
ISP1362_REG(OTGTIMER,	0x6A,	REG_WIDTH_16,	REG_ACCESS_RW);
ISP1362_REG(OTGALTTMR,	0x6C,	REG_WIDTH_16,	REG_ACCESS_RW);
struct ptd  __attribute__ ((packed, aligned(2)));
#define PTD_HEADER_SIZE sizeof(struct ptd)
#define PTD_CC_NOERROR      0x00
#define PTD_CC_CRC          0x01
#define PTD_CC_BITSTUFFING  0x02
#define PTD_CC_DATATOGGLEM  0x03
#define PTD_CC_STALL        0x04
#define PTD_DEVNOTRESP      0x05
#define PTD_PIDCHECKFAIL    0x06
#define PTD_UNEXPECTEDPID   0x07
#define PTD_DATAOVERRUN     0x08
#define PTD_DATAUNDERRUN    0x09
#define PTD_BUFFEROVERRUN   0x0C
#define PTD_BUFFERUNDERRUN  0x0D
#define PTD_NOTACCESSED     0x0F
static const int cc_to_error[16] = ;
#define OHCI_CTRL_HCFS	(3 << 6)
#define OHCI_CTRL_RWC	(1 << 9)
#define OHCI_CTRL_RWE	(1 << 10)
#	define OHCI_USB_RESET	(0 << 6)
#	define OHCI_USB_RESUME	(1 << 6)
#	define OHCI_USB_OPER	(2 << 6)
#	define OHCI_USB_SUSPEND	(3 << 6)
#define OHCI_HCR	(1 << 0)
#define OHCI_SOC  	(3 << 16)
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
#define	FI			0x2edf
#define	FSMP(fi) 		(0x7fff & ((6 * ((fi) - 210)) / 7))
#define LSTHRESH		0x628
#define PTD_GET_COUNT(p)	(((p)->count & PTD_COUNT_MSK) >> 0)
#define PTD_COUNT(v)		(((v) << 0) & PTD_COUNT_MSK)
#define PTD_GET_TOGGLE(p)	(((p)->count & PTD_TOGGLE_MSK) >> 10)
#define PTD_TOGGLE(v)		(((v) << 10) & PTD_TOGGLE_MSK)
#define PTD_GET_ACTIVE(p)	(((p)->count & PTD_ACTIVE_MSK) >> 11)
#define PTD_ACTIVE(v)		(((v) << 11) & PTD_ACTIVE_MSK)
#define PTD_GET_CC(p)		(((p)->count & PTD_CC_MSK) >> 12)
#define PTD_CC(v)		(((v) << 12) & PTD_CC_MSK)
#define PTD_GET_MPS(p)		(((p)->mps & PTD_MPS_MSK) >> 0)
#define PTD_MPS(v)		(((v) << 0) & PTD_MPS_MSK)
#define PTD_GET_SPD(p)		(((p)->mps & PTD_SPD_MSK) >> 10)
#define PTD_SPD(v)		(((v) << 10) & PTD_SPD_MSK)
#define PTD_GET_LAST(p)		(((p)->mps & PTD_LAST_MSK) >> 11)
#define PTD_LAST(v)		(((v) << 11) & PTD_LAST_MSK)
#define PTD_GET_EP(p)		(((p)->mps & PTD_EP_MSK) >> 12)
#define PTD_EP(v)		(((v) << 12) & PTD_EP_MSK)
#define PTD_GET_LEN(p)		(((p)->len & PTD_LEN_MSK) >> 0)
#define PTD_LEN(v)		(((v) << 0) & PTD_LEN_MSK)
#define PTD_GET_DIR(p)		(((p)->len & PTD_DIR_MSK) >> 10)
#define PTD_DIR(v)		(((v) << 10) & PTD_DIR_MSK)
#define PTD_GET_FA(p)		(((p)->faddr & PTD_FA_MSK) >> 0)
#define PTD_FA(v)		(((v) << 0) & PTD_FA_MSK)
#define PTD_GET_SF_INT(p)	(((p)->faddr & PTD_SF_INT_MSK) >> 8)
#define PTD_SF_INT(v)		(((v) << 8) & PTD_SF_INT_MSK)
#define PTD_GET_SF_ISO(p)	(((p)->faddr & PTD_SF_ISO_MSK) >> 8)
#define PTD_SF_ISO(v)		(((v) << 8) & PTD_SF_ISO_MSK)
#define PTD_GET_PR(p)		(((p)->faddr & PTD_PR_MSK) >> 13)
#define PTD_PR(v)		(((v) << 13) & PTD_PR_MSK)
#define	LOG2_PERIODIC_SIZE	5
#define	PERIODIC_SIZE		(1 << LOG2_PERIODIC_SIZE)
struct isp1362_ep ;
struct isp1362_ep_queue ;
struct isp1362_hcd ;
static inline const char *ISP1362_INT_NAME(int n)
static inline void ALIGNSTAT(struct isp1362_hcd *isp1362_hcd, void *ptr)
static inline struct isp1362_hcd *hcd_to_isp1362_hcd(struct usb_hcd *hcd)
static inline struct usb_hcd *isp1362_hcd_to_hcd(struct isp1362_hcd *isp1362_hcd)
#define frame_before(f1, f2)	((s16)((u16)f1 - (u16)f2) < 0)
#define DBG(level, fmt...) \
do  while (0)
#define _DBG(level, fmt...)	\
do  while (0)
#define DBG(fmt...)		do  while (0)
#define _DBG DBG
#    define VDBG(fmt...)	DBG(3, fmt)
#    define VDBG(fmt...)	do  while (0)
#    define RDBG(fmt...)	DBG(1, fmt)
#    define RDBG(fmt...)	do  while (0)
#define URB_DBG(fmt...)		DBG(0, fmt)
#define URB_DBG(fmt...)		do  while (0)
#if USE_PLATFORM_DELAY
#if USE_NDELAY
#error USE_PLATFORM_DELAY and USE_NDELAY defined simultaneously.
#define	isp1362_delay(h, d)	(h)->board->delay(isp1362_hcd_to_hcd(h)->self.controller, d)
#elif USE_NDELAY
#define	isp1362_delay(h, d)	ndelay(d)
#define	isp1362_delay(h, d)	do  while (0)
#define get_urb(ep) ()
static void isp1362_write_addr(struct isp1362_hcd *isp1362_hcd, isp1362_reg_t reg)
static void isp1362_write_data16(struct isp1362_hcd *isp1362_hcd, u16 val)
static u16 isp1362_read_data16(struct isp1362_hcd *isp1362_hcd)
static void isp1362_write_data32(struct isp1362_hcd *isp1362_hcd, u32 val)
static u32 isp1362_read_data32(struct isp1362_hcd *isp1362_hcd)
static void isp1362_read_fifo(struct isp1362_hcd *isp1362_hcd, void *buf, u16 len)
static void isp1362_write_fifo(struct isp1362_hcd *isp1362_hcd, void *buf, u16 len)
#define isp1362_read_reg16(d, r)		()
#define isp1362_read_reg32(d, r)		()
#define isp1362_write_reg16(d, r, v)
#define isp1362_write_reg32(d, r, v)
#define isp1362_set_mask16(d, r, m)
#define isp1362_clr_mask16(d, r, m)
#define isp1362_set_mask32(d, r, m)
#define isp1362_clr_mask32(d, r, m)
#define isp1362_show_reg(d, r)
#define isp1362_show_reg(d, r)	do  while (0)
static void __attribute__((__unused__)) isp1362_show_regs(struct isp1362_hcd *isp1362_hcd)
static void isp1362_write_diraddr(struct isp1362_hcd *isp1362_hcd, u16 offset, u16 len)
static void isp1362_read_buffer(struct isp1362_hcd *isp1362_hcd, void *buf, u16 offset, int len)
static void isp1362_write_buffer(struct isp1362_hcd *isp1362_hcd, void *buf, u16 offset, int len)
static void __attribute__((unused)) dump_data(char *buf, int len)
#if defined(ISP1362_DEBUG) && defined(PTD_TRACE)
static void dump_ptd(struct ptd *ptd)
static void dump_ptd_out_data(struct ptd *ptd, u8 *buf)
static void dump_ptd_in_data(struct ptd *ptd, u8 *buf)
static void dump_ptd_queue(struct isp1362_ep_queue *epq)
#define dump_ptd(ptd)			do  while (0)
#define dump_ptd_in_data(ptd, buf)	do  while (0)
#define dump_ptd_out_data(ptd, buf)	do  while (0)
#define dump_ptd_data(ptd, buf)		do  while (0)
#define dump_ptd_queue(epq)		do  while (0)
