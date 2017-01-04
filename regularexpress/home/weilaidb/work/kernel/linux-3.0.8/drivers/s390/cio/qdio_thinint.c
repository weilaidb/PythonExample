#define TIQDIO_NR_NONSHARED_IND		63
#define TIQDIO_NR_INDICATORS		(TIQDIO_NR_NONSHARED_IND + 1)
static LIST_HEAD(tiq_list);
DEFINE_MUTEX(tiq_list_lock);
static u8 *tiqdio_alsi;
struct indicator_t *q_indicators;
static u64 last_ai_time;
static u32 *get_indicator(void)
static void put_indicator(u32 *addr)
void tiqdio_add_input_queues(struct qdio_irq *irq_ptr)
void tiqdio_remove_input_queues(struct qdio_irq *irq_ptr)
static inline u32 clear_shared_ind(void)
static void tiqdio_thinint_handler(void *alsi, void *data)
static int set_subchannel_ind(struct qdio_irq *irq_ptr, int reset)
int __init tiqdio_allocate_memory(void)
void tiqdio_free_memory(void)
int __init tiqdio_register_thinints(void)
int qdio_establish_thinint(struct qdio_irq *irq_ptr)
void qdio_setup_thinint(struct qdio_irq *irq_ptr)
void qdio_shutdown_thinint(struct qdio_irq *irq_ptr)
void __exit tiqdio_unregister_thinints(void)
