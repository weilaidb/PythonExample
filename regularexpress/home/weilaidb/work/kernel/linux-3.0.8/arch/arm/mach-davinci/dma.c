#define PARM_OPT		0x00
#define PARM_SRC		0x04
#define PARM_A_B_CNT		0x08
#define PARM_DST		0x0c
#define PARM_SRC_DST_BIDX	0x10
#define PARM_LINK_BCNTRLD	0x14
#define PARM_SRC_DST_CIDX	0x18
#define PARM_CCNT		0x1c
#define PARM_SIZE		0x20
#define SH_ER		0x00
#define SH_ECR		0x08
#define SH_ESR		0x10
#define SH_CER		0x18
#define SH_EER		0x20
#define SH_EECR		0x28
#define SH_EESR		0x30
#define SH_SER		0x38
#define SH_SECR		0x40
#define SH_IER		0x50
#define SH_IECR		0x58
#define SH_IESR		0x60
#define SH_IPR		0x68
#define SH_ICR		0x70
#define SH_IEVAL	0x78
#define SH_QER		0x80
#define SH_QEER		0x84
#define SH_QEECR	0x88
#define SH_QEESR	0x8c
#define SH_QSER		0x90
#define SH_QSECR	0x94
#define SH_SIZE		0x200
#define EDMA_REV	0x0000
#define EDMA_CCCFG	0x0004
#define EDMA_QCHMAP	0x0200
#define EDMA_DMAQNUM	0x0240
#define EDMA_QDMAQNUM	0x0260
#define EDMA_QUETCMAP	0x0280
#define EDMA_QUEPRI	0x0284
#define EDMA_EMR	0x0300
#define EDMA_EMCR	0x0308
#define EDMA_QEMR	0x0310
#define EDMA_QEMCR	0x0314
#define EDMA_CCERR	0x0318
#define EDMA_CCERRCLR	0x031c
#define EDMA_EEVAL	0x0320
#define EDMA_DRAE	0x0340
#define EDMA_QRAE	0x0380
#define EDMA_QUEEVTENTRY	0x0400
#define EDMA_QSTAT	0x0600
#define EDMA_QWMTHRA	0x0620
#define EDMA_QWMTHRB	0x0624
#define EDMA_CCSTAT	0x0640
#define EDMA_M		0x1000
#define EDMA_ECR	0x1008
#define EDMA_ECRH	0x100C
#define EDMA_SHADOW0	0x2000
#define EDMA_PARM	0x4000
#define PARM_OFFSET(param_no)	(EDMA_PARM + ((param_no) << 5))
#define EDMA_DCHMAP	0x0100
#define CHMAP_EXIST	BIT(24)
#define EDMA_MAX_DMACH           64
#define EDMA_MAX_PARAMENTRY     512
static void __iomem *edmacc_regs_base[EDMA_MAX_CC];
static inline unsigned int edma_read(unsigned ctlr, int offset)
static inline void edma_write(unsigned ctlr, int offset, int val)
static inline void edma_modify(unsigned ctlr, int offset, unsigned and,
unsigned or)
static inline void edma_and(unsigned ctlr, int offset, unsigned and)
static inline void edma_or(unsigned ctlr, int offset, unsigned or)
static inline unsigned int edma_read_array(unsigned ctlr, int offset, int i)
static inline void edma_write_array(unsigned ctlr, int offset, int i,
unsigned val)
static inline void edma_modify_array(unsigned ctlr, int offset, int i,
unsigned and, unsigned or)
static inline void edma_or_array(unsigned ctlr, int offset, int i, unsigned or)
static inline void edma_or_array2(unsigned ctlr, int offset, int i, int j,
unsigned or)
static inline void edma_write_array2(unsigned ctlr, int offset, int i, int j,
unsigned val)
static inline unsigned int edma_shadow0_read(unsigned ctlr, int offset)
static inline unsigned int edma_shadow0_read_array(unsigned ctlr, int offset,
int i)
static inline void edma_shadow0_write(unsigned ctlr, int offset, unsigned val)
static inline void edma_shadow0_write_array(unsigned ctlr, int offset, int i,
unsigned val)
static inline unsigned int edma_parm_read(unsigned ctlr, int offset,
int param_no)
static inline void edma_parm_write(unsigned ctlr, int offset, int param_no,
unsigned val)
static inline void edma_parm_modify(unsigned ctlr, int offset, int param_no,
unsigned and, unsigned or)
static inline void edma_parm_and(unsigned ctlr, int offset, int param_no,
unsigned and)
static inline void edma_parm_or(unsigned ctlr, int offset, int param_no,
unsigned or)
static inline void set_bits(int offset, int len, unsigned long *p)
static inline void clear_bits(int offset, int len, unsigned long *p)
struct edma ;
static struct edma *edma_cc[EDMA_MAX_CC];
static int arch_num_cc;
static const struct edmacc_param dummy_paramset = ;
static void map_dmach_queue(unsigned ctlr, unsigned ch_no,
enum dma_event_q queue_no)
static void __init map_queue_tc(unsigned ctlr, int queue_no, int tc_no)
static void __init assign_priority_to_queue(unsigned ctlr, int queue_no,
int priority)
static void __init map_dmach_param(unsigned ctlr)
static inline void
setup_dma_interrupt(unsigned lch,
void (*callback)(unsigned channel, u16 ch_status, void *data),
void *data)
static int irq2ctlr(int irq)
static irqreturn_t dma_irq_handler(int irq, void *data)
static irqreturn_t dma_ccerr_handler(int irq, void *data)
#define tc_errs_handled	false
static irqreturn_t dma_tc0err_handler(int irq, void *data)
static irqreturn_t dma_tc1err_handler(int irq, void *data)
static int reserve_contiguous_slots(int ctlr, unsigned int id,
unsigned int num_slots,
unsigned int start_slot)
static int prepare_unused_channel_list(struct device *dev, void *data)
static bool unused_chan_list_done;
int edma_alloc_channel(int channel,
void (*callback)(unsigned channel, u16 ch_status, void *data),
void *data,
enum dma_event_q eventq_no)
EXPORT_SYMBOL(edma_alloc_channel);
void edma_free_channel(unsigned channel)
EXPORT_SYMBOL(edma_free_channel);
int edma_alloc_slot(unsigned ctlr, int slot)
EXPORT_SYMBOL(edma_alloc_slot);
void edma_free_slot(unsigned slot)
EXPORT_SYMBOL(edma_free_slot);
int edma_alloc_cont_slots(unsigned ctlr, unsigned int id, int slot, int count)
EXPORT_SYMBOL(edma_alloc_cont_slots);
int edma_free_cont_slots(unsigned slot, int count)
EXPORT_SYMBOL(edma_free_cont_slots);
void edma_set_src(unsigned slot, dma_addr_t src_port,
enum address_mode mode, enum fifo_width width)
EXPORT_SYMBOL(edma_set_src);
void edma_set_dest(unsigned slot, dma_addr_t dest_port,
enum address_mode mode, enum fifo_width width)
EXPORT_SYMBOL(edma_set_dest);
void edma_get_position(unsigned slot, dma_addr_t *src, dma_addr_t *dst)
EXPORT_SYMBOL(edma_get_position);
void edma_set_src_index(unsigned slot, s16 src_bidx, s16 src_cidx)
EXPORT_SYMBOL(edma_set_src_index);
void edma_set_dest_index(unsigned slot, s16 dest_bidx, s16 dest_cidx)
EXPORT_SYMBOL(edma_set_dest_index);
void edma_set_transfer_params(unsigned slot,
u16 acnt, u16 bcnt, u16 ccnt,
u16 bcnt_rld, enum sync_dimension sync_mode)
EXPORT_SYMBOL(edma_set_transfer_params);
void edma_link(unsigned from, unsigned to)
EXPORT_SYMBOL(edma_link);
void edma_unlink(unsigned from)
EXPORT_SYMBOL(edma_unlink);
void edma_write_slot(unsigned slot, const struct edmacc_param *param)
EXPORT_SYMBOL(edma_write_slot);
void edma_read_slot(unsigned slot, struct edmacc_param *param)
EXPORT_SYMBOL(edma_read_slot);
void edma_pause(unsigned channel)
EXPORT_SYMBOL(edma_pause);
void edma_resume(unsigned channel)
EXPORT_SYMBOL(edma_resume);
int edma_start(unsigned channel)
EXPORT_SYMBOL(edma_start);
void edma_stop(unsigned channel)
EXPORT_SYMBOL(edma_stop);
void edma_clean_channel(unsigned channel)
EXPORT_SYMBOL(edma_clean_channel);
void edma_clear_event(unsigned channel)
EXPORT_SYMBOL(edma_clear_event);
static int __init edma_probe(struct platform_device *pdev)
static struct platform_driver edma_driver = ;
static int __init edma_init(void)
arch_initcall(edma_init);
