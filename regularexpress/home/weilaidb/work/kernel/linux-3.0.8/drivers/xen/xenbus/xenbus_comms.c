static int xenbus_irq;
static DECLARE_WORK(probe_work, xenbus_probe);
static DECLARE_WAIT_QUEUE_HEAD(xb_waitq);
static irqreturn_t wake_waiting(int irq, void *unused)
static int check_indexes(XENSTORE_RING_IDX cons, XENSTORE_RING_IDX prod)
static void *get_output_chunk(XENSTORE_RING_IDX cons,
XENSTORE_RING_IDX prod,
char *buf, uint32_t *len)
static const void *get_input_chunk(XENSTORE_RING_IDX cons,
XENSTORE_RING_IDX prod,
const char *buf, uint32_t *len)
int xb_write(const void *data, unsigned len)
int xb_data_to_read(void)
int xb_wait_for_data_to_read(void)
int xb_read(void *data, unsigned len)
int xb_init_comms(void)
