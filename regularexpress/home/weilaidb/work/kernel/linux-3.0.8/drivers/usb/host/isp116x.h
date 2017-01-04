#define  MAX_LOAD_LIMIT		850
#define MAX_TRANSFER_SIZE_FULLSPEED	832
#define MAX_TRANSFER_SIZE_LOWSPEED	64
#define BYTE_TIME_FULLSPEED	1
#define BYTE_TIME_LOWSPEED	20
#define ISP116x_BUF_SIZE	4096
#define ISP116x_ITL_BUFSIZE	0
#define ISP116x_ATL_BUFSIZE	((ISP116x_BUF_SIZE) - 2*(ISP116x_ITL_BUFSIZE))
#define ISP116x_WRITE_OFFSET	0x80
#define	HCREVISION	0x00
#define	HCCONTROL	0x01
#define		HCCONTROL_HCFS	(3 << 6)
#define		HCCONTROL_USB_RESET	(0 << 6)
#define		HCCONTROL_USB_RESUME	(1 << 6)
#define		HCCONTROL_USB_OPER	(2 << 6)
#define		HCCONTROL_USB_SUSPEND	(3 << 6)
#define		HCCONTROL_RWC	(1 << 9)
#define		HCCONTROL_RWE	(1 << 10)
#define	HCCMDSTAT	0x02
#define		HCCMDSTAT_HCR	(1 << 0)
#define		HCCMDSTAT_SOC	(3 << 16)
#define	HCINTSTAT	0x03
#define		HCINT_SO	(1 << 0)
#define		HCINT_WDH	(1 << 1)
#define		HCINT_SF	(1 << 2)
#define		HCINT_RD	(1 << 3)
#define		HCINT_UE	(1 << 4)
#define		HCINT_FNO	(1 << 5)
#define		HCINT_RHSC	(1 << 6)
#define		HCINT_OC	(1 << 30)
#define		HCINT_MIE	(1 << 31)
#define	HCINTENB	0x04
#define	HCINTDIS	0x05
#define	HCFMINTVL	0x0d
#define	HCFMREM		0x0e
#define	HCFMNUM		0x0f
#define	HCLSTHRESH	0x11
#define	HCRHDESCA	0x12
#define		RH_A_NDP	(0x3 << 0)
#define		RH_A_PSM	(1 << 8)
#define		RH_A_NPS	(1 << 9)
#define		RH_A_DT		(1 << 10)
#define		RH_A_OCPM	(1 << 11)
#define		RH_A_NOCP	(1 << 12)
#define		RH_A_POTPGT	(0xff << 24)
#define	HCRHDESCB	0x13
#define		RH_B_DR		(0xffff << 0)
#define		RH_B_PPCM	(0xffff << 16)
#define	HCRHSTATUS	0x14
#define		RH_HS_LPS	(1 << 0)
#define		RH_HS_OCI	(1 << 1)
#define		RH_HS_DRWE	(1 << 15)
#define		RH_HS_LPSC	(1 << 16)
#define		RH_HS_OCIC	(1 << 17)
#define		RH_HS_CRWE	(1 << 31)
#define	HCRHPORT1	0x15
#define		RH_PS_CCS	(1 << 0)
#define		RH_PS_PES	(1 << 1)
#define		RH_PS_PSS	(1 << 2)
#define		RH_PS_POCI	(1 << 3)
#define		RH_PS_PRS	(1 << 4)
#define		RH_PS_PPS	(1 << 8)
#define		RH_PS_LSDA	(1 << 9)
#define		RH_PS_CSC	(1 << 16)
#define		RH_PS_PESC	(1 << 17)
#define		RH_PS_PSSC	(1 << 18)
#define		RH_PS_OCIC	(1 << 19)
#define		RH_PS_PRSC	(1 << 20)
#define		HCRHPORT_CLRMASK	(0x1f << 16)
#define	HCRHPORT2	0x16
#define	HCHWCFG		0x20
#define		HCHWCFG_15KRSEL		(1 << 12)
#define		HCHWCFG_CLKNOTSTOP	(1 << 11)
#define		HCHWCFG_ANALOG_OC	(1 << 10)
#define		HCHWCFG_DACK_MODE	(1 << 8)
#define		HCHWCFG_EOT_POL		(1 << 7)
#define		HCHWCFG_DACK_POL	(1 << 6)
#define		HCHWCFG_DREQ_POL	(1 << 5)
#define		HCHWCFG_DBWIDTH_MASK	(0x03 << 3)
#define		HCHWCFG_DBWIDTH(n)	(((n) << 3) & HCHWCFG_DBWIDTH_MASK)
#define		HCHWCFG_INT_POL		(1 << 2)
#define		HCHWCFG_INT_TRIGGER	(1 << 1)
#define		HCHWCFG_INT_ENABLE	(1 << 0)
#define	HCDMACFG	0x21
#define		HCDMACFG_BURST_LEN_MASK	(0x03 << 5)
#define		HCDMACFG_BURST_LEN(n)	(((n) << 5) & HCDMACFG_BURST_LEN_MASK)
#define		HCDMACFG_BURST_LEN_1	HCDMACFG_BURST_LEN(0)
#define		HCDMACFG_BURST_LEN_4	HCDMACFG_BURST_LEN(1)
#define		HCDMACFG_BURST_LEN_8	HCDMACFG_BURST_LEN(2)
#define		HCDMACFG_DMA_ENABLE	(1 << 4)
#define		HCDMACFG_BUF_TYPE_MASK	(0x07 << 1)
#define		HCDMACFG_CTR_SEL	(1 << 2)
#define		HCDMACFG_ITLATL_SEL	(1 << 1)
#define		HCDMACFG_DMA_RW_SELECT	(1 << 0)
#define	HCXFERCTR	0x22
#define	HCuPINT		0x24
#define		HCuPINT_SOF		(1 << 0)
#define		HCuPINT_ATL		(1 << 1)
#define		HCuPINT_AIIEOT		(1 << 2)
#define		HCuPINT_OPR		(1 << 4)
#define		HCuPINT_SUSP		(1 << 5)
#define		HCuPINT_CLKRDY		(1 << 6)
#define	HCuPINTENB	0x25
#define	HCCHIPID	0x27
#define		HCCHIPID_MASK		0xff00
#define		HCCHIPID_MAGIC		0x6100
#define	HCSCRATCH	0x28
#define	HCSWRES		0x29
#define		HCSWRES_MAGIC		0x00f6
#define	HCITLBUFLEN	0x2a
#define	HCATLBUFLEN	0x2b
#define	HCBUFSTAT	0x2c
#define		HCBUFSTAT_ITL0_FULL	(1 << 0)
#define		HCBUFSTAT_ITL1_FULL	(1 << 1)
#define		HCBUFSTAT_ATL_FULL	(1 << 2)
#define		HCBUFSTAT_ITL0_DONE	(1 << 3)
#define		HCBUFSTAT_ITL1_DONE	(1 << 4)
#define		HCBUFSTAT_ATL_DONE	(1 << 5)
#define	HCRDITL0LEN	0x2d
#define	HCRDITL1LEN	0x2e
#define	HCITLPORT	0x40
#define	HCATLPORT	0x41
struct ptd  __attribute__ ((packed, aligned(2)));
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
#define PTD_GET_B5_5(p)		(((p)->len & PTD_B5_5_MSK) >> 13)
#define PTD_B5_5(v)		(((v) << 13) & PTD_B5_5_MSK)
#define PTD_GET_FA(p)		(((p)->faddr & PTD_FA_MSK) >> 0)
#define PTD_FA(v)		(((v) << 0) & PTD_FA_MSK)
#define PTD_GET_FMT(p)		(((p)->faddr & PTD_FMT_MSK) >> 7)
#define PTD_FMT(v)		(((v) << 7) & PTD_FMT_MSK)
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
static const int cc_to_error[16] = ;
#define	LOG2_PERIODIC_SIZE	5
#define	PERIODIC_SIZE		(1 << LOG2_PERIODIC_SIZE)
struct isp116x ;
static inline struct isp116x *hcd_to_isp116x(struct usb_hcd *hcd)
static inline struct usb_hcd *isp116x_to_hcd(struct isp116x *isp116x)
struct isp116x_ep ;
#define DBG(stuff...)		printk(KERN_DEBUG "116x: " stuff)
#define DBG(stuff...)		dowhile(0)
#    define VDBG		DBG
#    define VDBG(stuff...)	dowhile(0)
#define ERR(stuff...)		printk(KERN_ERR "116x: " stuff)
#define WARNING(stuff...)	printk(KERN_WARNING "116x: " stuff)
#define INFO(stuff...)		printk(KERN_INFO "116x: " stuff)
#if defined(USE_PLATFORM_DELAY)
#if defined(USE_NDELAY)
#error USE_PLATFORM_DELAY and USE_NDELAY simultaneously defined.
#define	isp116x_delay(h,d)	(h)->board->delay(	\
isp116x_to_hcd(h)->self.controller,d)
#define isp116x_check_platform_delay(h)	((h)->board->delay == NULL)
#elif defined(USE_NDELAY)
#define	isp116x_delay(h,d)	ndelay(d)
#define isp116x_check_platform_delay(h)	0
#define	isp116x_delay(h,d)	dowhile(0)
#define isp116x_check_platform_delay(h)	0
#if defined(DEBUG)
#define	IRQ_TEST()	BUG_ON(!irqs_disabled())
#define	IRQ_TEST()	dowhile(0)
static inline void isp116x_write_addr(struct isp116x *isp116x, unsigned reg)
static inline void isp116x_write_data16(struct isp116x *isp116x, u16 val)
static inline void isp116x_raw_write_data16(struct isp116x *isp116x, u16 val)
static inline u16 isp116x_read_data16(struct isp116x *isp116x)
static inline u16 isp116x_raw_read_data16(struct isp116x *isp116x)
static inline void isp116x_write_data32(struct isp116x *isp116x, u32 val)
static inline u32 isp116x_read_data32(struct isp116x *isp116x)
static u16 isp116x_read_reg16(struct isp116x *isp116x, unsigned reg)
static u32 isp116x_read_reg32(struct isp116x *isp116x, unsigned reg)
static void isp116x_write_reg16(struct isp116x *isp116x, unsigned reg,
unsigned val)
static void isp116x_write_reg32(struct isp116x *isp116x, unsigned reg,
unsigned val)
#define isp116x_show_reg_log(d,r,s)
#define isp116x_show_reg_seq(d,r,s)
#define isp116x_show_regs(d,type,s)
static inline void isp116x_show_regs_seq(struct isp116x *isp116x,
struct seq_file *s)
static inline void isp116x_show_regs_log(struct isp116x *isp116x)
#if defined(URB_TRACE)
#define PIPETYPE(pipe)  ()
#define PIPEDIR(pipe)   ()
#define URB_NOTSHORT(urb) ()
static void urb_dbg(struct urb *urb, char *msg)
#define  urb_dbg(urb,msg)   dowhile(0)
#if defined(PTD_TRACE)
#define PTD_DIR_STR(ptd)  ()
static inline void dump_ptd(struct ptd *ptd)
static inline void dump_ptd_out_data(struct ptd *ptd, u8 * buf)
static inline void dump_ptd_in_data(struct ptd *ptd, u8 * buf)
#define dump_ptd(ptd)               dowhile(0)
#define dump_ptd_in_data(ptd,buf)   dowhile(0)
#define dump_ptd_out_data(ptd,buf)  dowhile(0)
