#define _CIO_QDIO_H
#define QDIO_BUSY_BIT_PATIENCE		(100 << 12)
#define QDIO_INPUT_THRESHOLD		(500 << 12)
#define QDIO_IQDIO_POLL_LVL		65
enum qdio_irq_states ;
#define QDIO_DOING_ESTABLISH	1
#define QDIO_DOING_ACTIVATE	2
#define QDIO_DOING_CLEANUP	3
#define SLSB_STATE_NOT_INIT	0x0
#define SLSB_STATE_EMPTY	0x1
#define SLSB_STATE_PRIMED	0x2
#define SLSB_STATE_HALTED	0xe
#define SLSB_STATE_ERROR	0xf
#define SLSB_TYPE_INPUT		0x0
#define SLSB_TYPE_OUTPUT	0x20
#define SLSB_OWNER_PROG		0x80
#define SLSB_OWNER_CU		0x40
#define SLSB_P_INPUT_NOT_INIT	\
(SLSB_OWNER_PROG | SLSB_TYPE_INPUT | SLSB_STATE_NOT_INIT)
#define SLSB_P_INPUT_ACK	\
(SLSB_OWNER_PROG | SLSB_TYPE_INPUT | SLSB_STATE_EMPTY)
#define SLSB_CU_INPUT_EMPTY	\
(SLSB_OWNER_CU | SLSB_TYPE_INPUT | SLSB_STATE_EMPTY)
#define SLSB_P_INPUT_PRIMED	\
(SLSB_OWNER_PROG | SLSB_TYPE_INPUT | SLSB_STATE_PRIMED)
#define SLSB_P_INPUT_HALTED	\
(SLSB_OWNER_PROG | SLSB_TYPE_INPUT | SLSB_STATE_HALTED)
#define SLSB_P_INPUT_ERROR	\
(SLSB_OWNER_PROG | SLSB_TYPE_INPUT | SLSB_STATE_ERROR)
#define SLSB_P_OUTPUT_NOT_INIT	\
(SLSB_OWNER_PROG | SLSB_TYPE_OUTPUT | SLSB_STATE_NOT_INIT)
#define SLSB_P_OUTPUT_EMPTY	\
(SLSB_OWNER_PROG | SLSB_TYPE_OUTPUT | SLSB_STATE_EMPTY)
#define SLSB_CU_OUTPUT_PRIMED	\
(SLSB_OWNER_CU | SLSB_TYPE_OUTPUT | SLSB_STATE_PRIMED)
#define SLSB_P_OUTPUT_HALTED	\
(SLSB_OWNER_PROG | SLSB_TYPE_OUTPUT | SLSB_STATE_HALTED)
#define SLSB_P_OUTPUT_ERROR	\
(SLSB_OWNER_PROG | SLSB_TYPE_OUTPUT | SLSB_STATE_ERROR)
#define SLSB_ERROR_DURING_LOOKUP  0xff
#define CIW_TYPE_EQUEUE			0x3
#define CIW_TYPE_AQUEUE			0x4
#define CHSC_FLAG_QDIO_CAPABILITY	0x80
#define CHSC_FLAG_VALIDITY		0x40
#define AC1_SIGA_INPUT_NEEDED		0x40
#define AC1_SIGA_OUTPUT_NEEDED		0x20
#define AC1_SIGA_SYNC_NEEDED		0x10
#define AC1_AUTOMATIC_SYNC_ON_THININT	0x08
#define AC1_AUTOMATIC_SYNC_ON_OUT_PCI	0x04
#define AC1_SC_QEBSM_AVAILABLE		0x02
#define AC1_SC_QEBSM_ENABLED		0x01
#define QDIO_SIGA_WRITE		0x00
#define QDIO_SIGA_READ		0x01
#define QDIO_SIGA_SYNC		0x02
#define QDIO_SIGA_QEBSM_FLAG	0x80
static inline int do_sqbs(u64 token, unsigned char state, int queue,
int *start, int *count)
static inline int do_eqbs(u64 token, unsigned char *state, int queue,
int *start, int *count, int ack)
static inline int do_sqbs(u64 token, unsigned char state, int queue,
int *start, int *count)
static inline int do_eqbs(u64 token, unsigned char *state, int queue,
int *start, int *count, int ack)
struct qdio_irq;
struct siga_flag  __attribute__ ((packed));
struct chsc_ssqd_area  __attribute__ ((packed));
struct scssc_area  __attribute__ ((packed));
struct qdio_dev_perf_stat  ____cacheline_aligned;
struct qdio_queue_perf_stat ;
enum qdio_queue_irq_states ;
struct qdio_input_q ;
struct qdio_output_q ;
struct qdio_q  __attribute__ ((aligned(256)));
struct qdio_irq ;
#define queue_type(q)	q->irq_ptr->qib.qfmt
#define SCH_NO(q)	(q->irq_ptr->schid.sch_no)
#define is_thinint_irq(irq) \
(irq->qib.qfmt == QDIO_IQDIO_QFMT || \
css_general_characteristics.aif_osa)
#define qperf(__qdev, __attr)	((__qdev)->perf_stat.(__attr))
#define qperf_inc(__q, __attr)						\
()
static inline void account_sbals_error(struct qdio_q *q, int count)
static inline int multicast_outbound(struct qdio_q *q)
#define pci_out_supported(q) \
(q->irq_ptr->qib.ac & QIB_AC_OUTBOUND_PCI_SUPPORTED)
#define is_qebsm(q)			(q->irq_ptr->sch_token != 0)
#define need_siga_in(q)			(q->irq_ptr->siga_flag.input)
#define need_siga_out(q)		(q->irq_ptr->siga_flag.output)
#define need_siga_sync(q)		(unlikely(q->irq_ptr->siga_flag.sync))
#define need_siga_sync_after_ai(q)	\
(unlikely(q->irq_ptr->siga_flag.sync_after_ai))
#define need_siga_sync_out_after_pci(q)	\
(unlikely(q->irq_ptr->siga_flag.sync_out_after_pci))
#define for_each_input_queue(irq_ptr, q, i)	\
for (i = 0, q = irq_ptr->input_qs[0];	\
i < irq_ptr->nr_input_qs;	\
q = irq_ptr->input_qs[++i])
#define for_each_output_queue(irq_ptr, q, i)	\
for (i = 0, q = irq_ptr->output_qs[0];	\
i < irq_ptr->nr_output_qs;	\
q = irq_ptr->output_qs[++i])
#define prev_buf(bufnr)	\
((bufnr + QDIO_MAX_BUFFERS_MASK) & QDIO_MAX_BUFFERS_MASK)
#define next_buf(bufnr)	\
((bufnr + 1) & QDIO_MAX_BUFFERS_MASK)
#define add_buf(bufnr, inc) \
((bufnr + inc) & QDIO_MAX_BUFFERS_MASK)
#define sub_buf(bufnr, dec) \
((bufnr - dec) & QDIO_MAX_BUFFERS_MASK)
#define queue_irqs_enabled(q)			\
(test_bit(QDIO_QUEUE_IRQS_DISABLED, &q->u.in.queue_irq_state) == 0)
#define queue_irqs_disabled(q)			\
(test_bit(QDIO_QUEUE_IRQS_DISABLED, &q->u.in.queue_irq_state) != 0)
#define TIQDIO_SHARED_IND		63
struct indicator_t ;
extern struct indicator_t *q_indicators;
static inline int shared_ind(u32 *dsci)
void qdio_setup_thinint(struct qdio_irq *irq_ptr);
int qdio_establish_thinint(struct qdio_irq *irq_ptr);
void qdio_shutdown_thinint(struct qdio_irq *irq_ptr);
void tiqdio_add_input_queues(struct qdio_irq *irq_ptr);
void tiqdio_remove_input_queues(struct qdio_irq *irq_ptr);
void tiqdio_inbound_processing(unsigned long q);
int tiqdio_allocate_memory(void);
void tiqdio_free_memory(void);
int tiqdio_register_thinints(void);
void tiqdio_unregister_thinints(void);
void qdio_inbound_processing(unsigned long data);
void qdio_outbound_processing(unsigned long data);
void qdio_outbound_timer(unsigned long data);
void qdio_int_handler(struct ccw_device *cdev, unsigned long intparm,
struct irb *irb);
int qdio_allocate_qs(struct qdio_irq *irq_ptr, int nr_input_qs,
int nr_output_qs);
void qdio_setup_ssqd_info(struct qdio_irq *irq_ptr);
int qdio_setup_get_ssqd(struct qdio_irq *irq_ptr,
struct subchannel_id *schid,
struct qdio_ssqd_desc *data);
int qdio_setup_irq(struct qdio_initialize *init_data);
void qdio_print_subchannel_info(struct qdio_irq *irq_ptr,
struct ccw_device *cdev);
void qdio_release_memory(struct qdio_irq *irq_ptr);
int qdio_setup_create_sysfs(struct ccw_device *cdev);
void qdio_setup_destroy_sysfs(struct ccw_device *cdev);
int qdio_setup_init(void);
void qdio_setup_exit(void);
int debug_get_buf_state(struct qdio_q *q, unsigned int bufnr,
unsigned char *state);
