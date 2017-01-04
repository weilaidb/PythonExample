static void __irda_task_delete(struct irda_task *task);
static hashbin_t *dongles = NULL;
static hashbin_t *tasks = NULL;
static void irda_task_timer_expired(void *data);
int __init irda_device_init( void)
static void leftover_dongle(void *arg)
void irda_device_cleanup(void)
void irda_device_set_media_busy(struct net_device *dev, int status)
EXPORT_SYMBOL(irda_device_set_media_busy);
int irda_device_is_receiving(struct net_device *dev)
static void __irda_task_delete(struct irda_task *task)
static void irda_task_delete(struct irda_task *task)
static int irda_task_kick(struct irda_task *task)
static void irda_task_timer_expired(void *data)
static void irda_device_setup(struct net_device *dev)
struct net_device *alloc_irdadev(int sizeof_priv)
EXPORT_SYMBOL(alloc_irdadev);
void irda_setup_dma(int channel, dma_addr_t buffer, int count, int mode)
EXPORT_SYMBOL(irda_setup_dma);
