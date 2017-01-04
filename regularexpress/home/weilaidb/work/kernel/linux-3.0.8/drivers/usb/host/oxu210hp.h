#define OXU_DEVICEID			0x00
#define OXU_REV_MASK		0xffff0000
#define OXU_REV_SHIFT		16
#define OXU_REV_2100		0x2100
#define OXU_BO_SHIFT		8
#define OXU_BO_MASK		(0x3 << OXU_BO_SHIFT)
#define OXU_MAJ_REV_SHIFT	4
#define OXU_MAJ_REV_MASK	(0xf << OXU_MAJ_REV_SHIFT)
#define OXU_MIN_REV_SHIFT	0
#define OXU_MIN_REV_MASK	(0xf << OXU_MIN_REV_SHIFT)
#define OXU_HOSTIFCONFIG		0x04
#define OXU_SOFTRESET			0x08
#define OXU_SRESET		(1 << 0)
#define OXU_PIOBURSTREADCTRL		0x0C
#define OXU_CHIPIRQSTATUS		0x10
#define OXU_CHIPIRQEN_SET		0x14
#define OXU_CHIPIRQEN_CLR		0x18
#define OXU_USBSPHLPWUI		0x00000080
#define OXU_USBOTGLPWUI		0x00000040
#define OXU_USBSPHI		0x00000002
#define OXU_USBOTGI		0x00000001
#define OXU_CLKCTRL_SET			0x1C
#define OXU_SYSCLKEN		0x00000008
#define OXU_USBSPHCLKEN		0x00000002
#define OXU_USBOTGCLKEN		0x00000001
#define OXU_ASO				0x68
#define OXU_SPHPOEN		0x00000100
#define OXU_OVRCCURPUPDEN	0x00000800
#define OXU_ASO_OP		(1 << 10)
#define OXU_COMPARATOR		0x000004000
#define OXU_USBMODE			0x1A8
#define OXU_VBPS		0x00000020
#define OXU_ES_LITTLE		0x00000000
#define OXU_CM_HOST_ONLY	0x00000003
#define EHCI_TUNE_CERR		3
#define EHCI_TUNE_RL_HS		4
#define EHCI_TUNE_RL_TT		0
#define EHCI_TUNE_MULT_HS	1
#define EHCI_TUNE_MULT_TT	1
#define EHCI_TUNE_FLS		2
struct oxu_hcd;
struct ehci_caps  __attribute__ ((packed));
struct ehci_regs  __attribute__ ((packed));
struct ehci_dbg_port  __attribute__ ((packed));
#define	QTD_NEXT(dma)	cpu_to_le32((u32)dma)
struct ehci_qtd  __attribute__ ((aligned(32)));
#define QTD_MASK cpu_to_le32 (~0x1f)
#define IS_SHORT_READ(token) (QTD_LENGTH(token) != 0 && QTD_PID(token) == 1)
#define Q_NEXT_TYPE(dma) ((dma) & cpu_to_le32 (3 << 1))
#define Q_TYPE_QH	cpu_to_le32 (1 << 1)
#define	QH_NEXT(dma)	(cpu_to_le32(((u32)dma)&~0x01f)|Q_TYPE_QH)
#define	EHCI_LIST_END	cpu_to_le32(1)
union ehci_shadow ;
struct ehci_qh  __attribute__ ((aligned(32)));
#define OXU_OTG_CORE_OFFSET	0x00400
#define OXU_OTG_CAP_OFFSET	(OXU_OTG_CORE_OFFSET + 0x100)
#define OXU_SPH_CORE_OFFSET	0x00800
#define OXU_SPH_CAP_OFFSET	(OXU_SPH_CORE_OFFSET + 0x100)
#define OXU_OTG_MEM		0xE000
#define OXU_SPH_MEM		0x16000
#define	DEFAULT_I_TDPS		1024
#define QHEAD_NUM		16
#define QTD_NUM			32
#define SITD_NUM		8
#define MURB_NUM		8
#define BUFFER_NUM		8
#define BUFFER_SIZE		512
struct oxu_info ;
struct oxu_buf  __attribute__ ((aligned(BUFFER_SIZE)));
struct oxu_onchip_mem  __attribute__ ((aligned(4 << 10)));
#define	EHCI_MAX_ROOT_PORTS	15
struct oxu_murb ;
struct oxu_hcd ;
#define EHCI_IAA_JIFFIES	(HZ/100)
#define EHCI_IO_JIFFIES	 	(HZ/10)
#define EHCI_ASYNC_JIFFIES      (HZ/20)
#define EHCI_SHRINK_JIFFIES     (HZ/200)
enum ehci_timer_action ;
