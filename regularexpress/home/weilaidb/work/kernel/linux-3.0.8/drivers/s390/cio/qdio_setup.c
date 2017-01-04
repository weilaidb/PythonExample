static struct kmem_cache *qdio_q_cache;
static inline int qebsm_possible(void)
static void set_impl_params(struct qdio_irq *irq_ptr,
unsigned int qib_param_field_format,
unsigned char *qib_param_field,
unsigned long *input_slib_elements,
unsigned long *output_slib_elements)
static int __qdio_allocate_qs(struct qdio_q **irq_ptr_qs, int nr_queues)
int qdio_allocate_qs(struct qdio_irq *irq_ptr, int nr_input_qs, int nr_output_qs)
static void setup_queues_misc(struct qdio_q *q, struct qdio_irq *irq_ptr,
qdio_handler_t *handler, int i)
static void setup_storage_lists(struct qdio_q *q, struct qdio_irq *irq_ptr,
void **sbals_array, int i)
static void setup_queues(struct qdio_irq *irq_ptr,
struct qdio_initialize *qdio_init)
static void process_ac_flags(struct qdio_irq *irq_ptr, unsigned char qdioac)
static void check_and_setup_qebsm(struct qdio_irq *irq_ptr,
unsigned char qdioac, unsigned long token)
int qdio_setup_get_ssqd(struct qdio_irq *irq_ptr,
struct subchannel_id *schid,
struct qdio_ssqd_desc *data)
void qdio_setup_ssqd_info(struct qdio_irq *irq_ptr)
void qdio_release_memory(struct qdio_irq *irq_ptr)
static void __qdio_allocate_fill_qdr(struct qdio_irq *irq_ptr,
struct qdio_q **irq_ptr_qs,
int i, int nr)
static void setup_qdr(struct qdio_irq *irq_ptr,
struct qdio_initialize *qdio_init)
static void setup_qib(struct qdio_irq *irq_ptr,
struct qdio_initialize *init_data)
int qdio_setup_irq(struct qdio_initialize *init_data)
void qdio_print_subchannel_info(struct qdio_irq *irq_ptr,
struct ccw_device *cdev)
int __init qdio_setup_init(void)
void qdio_setup_exit(void)
