#undef DEBUG_PW
#define IRQ_RIO_BELL(m)		(((struct rio_priv *)(m->priv))->bellirq)
#define IRQ_RIO_TX(m)		(((struct rio_priv *)(m->priv))->txirq)
#define IRQ_RIO_RX(m)		(((struct rio_priv *)(m->priv))->rxirq)
#define IRQ_RIO_PW(m)		(((struct rio_priv *)(m->priv))->pwirq)
#define IPWSR_CLEAR		0x98
#define OMSR_CLEAR		0x1cb3
#define IMSR_CLEAR		0x491
#define IDSR_CLEAR		0x91
#define ODSR_CLEAR		0x1c00
#define LTLEECSR_ENABLE_ALL	0xFFC000FC
#define ESCSR_CLEAR		0x07120204
#define IECSR_CLEAR		0x80000000
#define RIO_PORT1_EDCSR		0x0640
#define RIO_PORT2_EDCSR		0x0680
#define RIO_PORT1_IECSR		0x10130
#define RIO_PORT2_IECSR		0x101B0
#define RIO_IM0SR		0x13064
#define RIO_IM1SR		0x13164
#define RIO_OM0SR		0x13004
#define RIO_OM1SR		0x13104
#define RIO_ATMU_REGS_OFFSET	0x10c00
#define RIO_P_MSG_REGS_OFFSET	0x11000
#define RIO_S_MSG_REGS_OFFSET	0x13000
#define RIO_GCCSR		0x13c
#define RIO_ESCSR		0x158
#define RIO_PORT2_ESCSR		0x178
#define RIO_CCSR		0x15c
#define RIO_LTLEDCSR		0x0608
#define RIO_LTLEDCSR_IER	0x80000000
#define RIO_LTLEDCSR_PRT	0x01000000
#define RIO_LTLEECSR		0x060c
#define RIO_EPWISR		0x10010
#define RIO_ISR_AACR		0x10120
#define RIO_ISR_AACR_AA		0x1
#define RIO_MAINT_WIN_SIZE	0x400000
#define RIO_DBELL_WIN_SIZE	0x1000
#define RIO_MSG_OMR_MUI		0x00000002
#define RIO_MSG_OSR_TE		0x00000080
#define RIO_MSG_OSR_QOI		0x00000020
#define RIO_MSG_OSR_QFI		0x00000010
#define RIO_MSG_OSR_MUB		0x00000004
#define RIO_MSG_OSR_EOMI	0x00000002
#define RIO_MSG_OSR_QEI		0x00000001
#define RIO_MSG_IMR_MI		0x00000002
#define RIO_MSG_ISR_TE		0x00000080
#define RIO_MSG_ISR_QFI		0x00000010
#define RIO_MSG_ISR_DIQI	0x00000001
#define RIO_IPWMR_SEN		0x00100000
#define RIO_IPWMR_QFIE		0x00000100
#define RIO_IPWMR_EIE		0x00000020
#define RIO_IPWMR_CQ		0x00000002
#define RIO_IPWMR_PWE		0x00000001
#define RIO_IPWSR_QF		0x00100000
#define RIO_IPWSR_TE		0x00000080
#define RIO_IPWSR_QFI		0x00000010
#define RIO_IPWSR_PWD		0x00000008
#define RIO_IPWSR_PWB		0x00000004
#define RIO_EPWISR_PINT1	0x80000000
#define RIO_EPWISR_PINT2	0x40000000
#define RIO_EPWISR_MU		0x00000002
#define RIO_EPWISR_PW		0x00000001
#define RIO_MSG_DESC_SIZE	32
#define RIO_MSG_BUFFER_SIZE	4096
#define RIO_MIN_TX_RING_SIZE	2
#define RIO_MAX_TX_RING_SIZE	2048
#define RIO_MIN_RX_RING_SIZE	2
#define RIO_MAX_RX_RING_SIZE	2048
#define DOORBELL_DMR_DI		0x00000002
#define DOORBELL_DSR_TE		0x00000080
#define DOORBELL_DSR_QFI	0x00000010
#define DOORBELL_DSR_DIQI	0x00000001
#define DOORBELL_TID_OFFSET	0x02
#define DOORBELL_SID_OFFSET	0x04
#define DOORBELL_INFO_OFFSET	0x06
#define DOORBELL_MESSAGE_SIZE	0x08
#define DBELL_SID(x)		(*(u16 *)(x + DOORBELL_SID_OFFSET))
#define DBELL_TID(x)		(*(u16 *)(x + DOORBELL_TID_OFFSET))
#define DBELL_INF(x)		(*(u16 *)(x + DOORBELL_INFO_OFFSET))
struct rio_atmu_regs ;
struct rio_msg_regs ;
struct rio_tx_desc ;
struct rio_dbell_ring ;
struct rio_msg_tx_ring ;
struct rio_msg_rx_ring ;
struct rio_port_write_msg ;
struct rio_priv ;
#define __fsl_read_rio_config(x, addr, err, op)		\
__asm__ __volatile__(				\
"1:	"op" %1,0(%2)\n"		\
"	eieio\n"			\
"2:\n"					\
".section .fixup,\"ax\"\n"		\
"3:	li %1,-1\n"			\
"	li %0,%3\n"			\
"	b 2b\n"				\
".section __ex_table,\"a\"\n"		\
"	.align 2\n"			\
"	.long 1b,3b\n"			\
".text"					\
: "=r" (err), "=r" (x)			\
: "b" (addr), "i" (-EFAULT), "0" (err))
static void __iomem *rio_regs_win;
int fsl_rio_mcheck_exception(struct pt_regs *regs)
EXPORT_SYMBOL_GPL(fsl_rio_mcheck_exception);
static int fsl_rio_doorbell_send(struct rio_mport *mport,
int index, u16 destid, u16 data)
static int fsl_local_config_read(struct rio_mport *mport,
int index, u32 offset, int len, u32 *data)
static int fsl_local_config_write(struct rio_mport *mport,
int index, u32 offset, int len, u32 data)
static int
fsl_rio_config_read(struct rio_mport *mport, int index, u16 destid,
u8 hopcount, u32 offset, int len, u32 *val)
static int
fsl_rio_config_write(struct rio_mport *mport, int index, u16 destid,
u8 hopcount, u32 offset, int len, u32 val)
static int
fsl_add_outb_message(struct rio_mport *mport, struct rio_dev *rdev, int mbox,
void *buffer, size_t len)
static irqreturn_t
fsl_rio_tx_handler(int irq, void *dev_instance)
static int
fsl_open_outb_mbox(struct rio_mport *mport, void *dev_id, int mbox, int entries)
static void fsl_close_outb_mbox(struct rio_mport *mport, int mbox)
static irqreturn_t
fsl_rio_rx_handler(int irq, void *dev_instance)
static int
fsl_open_inb_mbox(struct rio_mport *mport, void *dev_id, int mbox, int entries)
static void fsl_close_inb_mbox(struct rio_mport *mport, int mbox)
static int fsl_add_inb_buffer(struct rio_mport *mport, int mbox, void *buf)
static void *fsl_get_inb_message(struct rio_mport *mport, int mbox)
static irqreturn_t
fsl_rio_dbell_handler(int irq, void *dev_instance)
static int fsl_rio_doorbell_init(struct rio_mport *mport)
static void port_error_handler(struct rio_mport *port, int offset)
static void msg_unit_error_handler(struct rio_mport *port)
static irqreturn_t
fsl_rio_port_write_handler(int irq, void *dev_instance)
static void fsl_pw_dpc(struct work_struct *work)
static int fsl_rio_pw_enable(struct rio_mport *mport, int enable)
static int fsl_rio_port_write_init(struct rio_mport *mport)
static inline void fsl_rio_info(struct device *dev, u32 ccsr)
int fsl_rio_setup(struct platform_device *dev)
static int __devinit fsl_of_rio_rpn_probe(struct platform_device *dev)
;
static const struct of_device_id fsl_of_rio_rpn_ids[] = ;
static struct platform_driver fsl_of_rio_rpn_driver = ;
static __init int fsl_of_rio_rpn_init(void)
subsys_initcall(fsl_of_rio_rpn_init);
