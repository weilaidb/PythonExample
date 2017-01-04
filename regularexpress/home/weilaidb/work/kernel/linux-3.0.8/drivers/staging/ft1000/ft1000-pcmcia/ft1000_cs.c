#define INT_MODULE_PARM(n, v) static int n = v; MODULE_PARM(n, "i")
MODULE_AUTHOR("Wai Chan");
MODULE_DESCRIPTION("FT1000 PCMCIA driver");
MODULE_LICENSE("GPL");
#define DEBUG(n, args...) printk(KERN_DEBUG args)
#define DEBUG(n, args...)
struct net_device *init_ft1000_card(struct pcmcia_device *link,
void *ft1000_reset);
void stop_ft1000_card(struct net_device *);
static int ft1000_config(struct pcmcia_device *link);
static void ft1000_release(struct pcmcia_device *link);
static void ft1000_detach(struct pcmcia_device *link);
static int  ft1000_attach(struct pcmcia_device *link);
typedef struct local_info_t  local_info_t;
#define MAX_ASIC_RESET_CNT     10
#define COR_DEFAULT            0x55
static void ft1000_reset(struct pcmcia_device * link)
static int ft1000_attach(struct pcmcia_device *link)
static void ft1000_detach(struct pcmcia_device *link)
int ft1000_confcheck(struct pcmcia_device *link, void *priv_data)
static int ft1000_config(struct pcmcia_device *link)
static void ft1000_release(struct pcmcia_device * link)
static int ft1000_suspend(struct pcmcia_device *link)
static int ft1000_resume(struct pcmcia_device *link)
static const struct pcmcia_device_id ft1000_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, ft1000_ids);
static struct pcmcia_driver ft1000_cs_driver = ;
static int __init init_ft1000_cs(void)
static void __exit exit_ft1000_cs(void)
module_init(init_ft1000_cs);
module_exit(exit_ft1000_cs);
