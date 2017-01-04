MODULE_AUTHOR("Utz Bacher <utz.bacher@de.ibm.com>,"\
"Jan Glauber <jang@linux.vnet.ibm.com>");
MODULE_DESCRIPTION("QDIO base support");
MODULE_LICENSE("GPL");
static inline int do_siga_sync(unsigned long schid,
unsigned int out_mask, unsigned int in_mask,
unsigned int fc)
static inline int do_siga_input(unsigned long schid, unsigned int mask,
unsigned int fc)
static inline int do_siga_output(unsigned long schid, unsigned long mask,
unsigned int *bb, unsigned int fc)
static inline int qdio_check_ccq(struct qdio_q *q, unsigned int ccq)
static int qdio_do_eqbs(struct qdio_q *q, unsigned char *state,
int start, int count, int auto_ack)
static int qdio_do_sqbs(struct qdio_q *q, unsigned char state, int start,
int count)
static inline int get_buf_states(struct qdio_q *q, unsigned int bufnr,
unsigned char *state, unsigned int count,
int auto_ack)
static inline int get_buf_state(struct qdio_q *q, unsigned int bufnr,
unsigned char *state, int auto_ack)
static inline int set_buf_states(struct qdio_q *q, int bufnr,
unsigned char state, int count)
static inline int set_buf_state(struct qdio_q *q, int bufnr,
unsigned char state)
void qdio_init_buf_states(struct qdio_irq *irq_ptr)
static inline int qdio_siga_sync(struct qdio_q *q, unsigned int output,
unsigned int input)
static inline int qdio_siga_sync_q(struct qdio_q *q)
static int qdio_siga_output(struct qdio_q *q, unsigned int *busy_bit)
static inline int qdio_siga_input(struct qdio_q *q)
#define qdio_siga_sync_out(q) qdio_siga_sync(q, ~0U, 0)
#define qdio_siga_sync_all(q) qdio_siga_sync(q, ~0U, ~0U)
static inline void qdio_sync_queues(struct qdio_q *q)
int debug_get_buf_state(struct qdio_q *q, unsigned int bufnr,
unsigned char *state)
static inline void qdio_stop_polling(struct qdio_q *q)
static inline void account_sbals(struct qdio_q *q, int count)
static void process_buffer_error(struct qdio_q *q, int count)
static inline void inbound_primed(struct qdio_q *q, int count)
static int get_inbound_buffer_frontier(struct qdio_q *q)
static int qdio_inbound_q_moved(struct qdio_q *q)
static inline int qdio_inbound_q_done(struct qdio_q *q)
static void qdio_kick_handler(struct qdio_q *q)
static void __qdio_inbound_processing(struct qdio_q *q)
void qdio_inbound_processing(unsigned long data)
static int get_outbound_buffer_frontier(struct qdio_q *q)
static inline int qdio_outbound_q_done(struct qdio_q *q)
static inline int qdio_outbound_q_moved(struct qdio_q *q)
static int qdio_kick_outbound_q(struct qdio_q *q)
static void __qdio_outbound_processing(struct qdio_q *q)
void qdio_outbound_processing(unsigned long data)
void qdio_outbound_timer(unsigned long data)
static inline void qdio_check_outbound_after_thinint(struct qdio_q *q)
static void __tiqdio_inbound_processing(struct qdio_q *q)
void tiqdio_inbound_processing(unsigned long data)
static inline void qdio_set_state(struct qdio_irq *irq_ptr,
enum qdio_irq_states state)
static void qdio_irq_check_sense(struct qdio_irq *irq_ptr, struct irb *irb)
static void qdio_int_handler_pci(struct qdio_irq *irq_ptr)
static void qdio_handle_activate_check(struct ccw_device *cdev,
unsigned long intparm, int cstat, int dstat)
static void qdio_establish_handle_irq(struct ccw_device *cdev, int cstat,
int dstat)
void qdio_int_handler(struct ccw_device *cdev, unsigned long intparm,
struct irb *irb)
int qdio_get_ssqd_desc(struct ccw_device *cdev,
struct qdio_ssqd_desc *data)
EXPORT_SYMBOL_GPL(qdio_get_ssqd_desc);
static void qdio_shutdown_queues(struct ccw_device *cdev)
int qdio_shutdown(struct ccw_device *cdev, int how)
EXPORT_SYMBOL_GPL(qdio_shutdown);
int qdio_free(struct ccw_device *cdev)
EXPORT_SYMBOL_GPL(qdio_free);
int qdio_allocate(struct qdio_initialize *init_data)
EXPORT_SYMBOL_GPL(qdio_allocate);
int qdio_establish(struct qdio_initialize *init_data)
EXPORT_SYMBOL_GPL(qdio_establish);
int qdio_activate(struct ccw_device *cdev)
EXPORT_SYMBOL_GPL(qdio_activate);
static inline int buf_in_between(int bufnr, int start, int count)
static int handle_inbound(struct qdio_q *q, unsigned int callflags,
int bufnr, int count)
static int handle_outbound(struct qdio_q *q, unsigned int callflags,
int bufnr, int count)
int do_QDIO(struct ccw_device *cdev, unsigned int callflags,
int q_nr, unsigned int bufnr, unsigned int count)
EXPORT_SYMBOL_GPL(do_QDIO);
int qdio_start_irq(struct ccw_device *cdev, int nr)
EXPORT_SYMBOL(qdio_start_irq);
int qdio_get_next_buffers(struct ccw_device *cdev, int nr, int *bufnr,
int *error)
EXPORT_SYMBOL(qdio_get_next_buffers);
int qdio_stop_irq(struct ccw_device *cdev, int nr)
EXPORT_SYMBOL(qdio_stop_irq);
static int __init init_QDIO(void)
static void __exit exit_QDIO(void)
module_init(init_QDIO);
module_exit(exit_QDIO);
