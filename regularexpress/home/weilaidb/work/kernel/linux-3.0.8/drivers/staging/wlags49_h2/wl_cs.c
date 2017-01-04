#if DBG
extern dbg_info_t *DbgInfo;
static int wl_adapter_attach(struct pcmcia_device *link)
static void wl_adapter_detach(struct pcmcia_device *link)
void wl_adapter_release(struct pcmcia_device *link)
static int wl_adapter_suspend(struct pcmcia_device *link)
static int wl_adapter_resume(struct pcmcia_device *link)
void wl_adapter_insert(struct pcmcia_device *link)
int wl_adapter_open(struct net_device *dev)
int wl_adapter_close(struct net_device *dev)
static const struct pcmcia_device_id wl_adapter_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, wl_adapter_ids);
static struct pcmcia_driver wlags49_driver = ;
int wl_adapter_init_module(void)
void wl_adapter_cleanup_module(void)
int wl_adapter_is_open(struct net_device *dev)
#if DBG
const char *DbgEvent(int mask)
