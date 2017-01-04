#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define PCMCIA
static u_long mmiobase = 0xce000;
static u_long srambase = 0xd0000;
static u_long sramsize = 64;
static int ringspeed = 16;
module_param(mmiobase, ulong, 0);
module_param(srambase, ulong, 0);
module_param(sramsize, ulong, 0);
module_param(ringspeed, int, 0);
MODULE_LICENSE("GPL");
static int ibmtr_config(struct pcmcia_device *link);
static void ibmtr_hw_setup(struct net_device *dev, u_int mmiobase);
static void ibmtr_release(struct pcmcia_device *link);
static void ibmtr_detach(struct pcmcia_device *p_dev);
typedef struct ibmtr_dev_t  ibmtr_dev_t;
static irqreturn_t ibmtr_interrupt(int irq, void *dev_id) ;
static int __devinit ibmtr_attach(struct pcmcia_device *link)
static void ibmtr_detach(struct pcmcia_device *link)
static int __devinit ibmtr_config(struct pcmcia_device *link)
static void ibmtr_release(struct pcmcia_device *link)
static int ibmtr_suspend(struct pcmcia_device *link)
static int __devinit ibmtr_resume(struct pcmcia_device *link)
static void ibmtr_hw_setup(struct net_device *dev, u_int mmiobase)
static const struct pcmcia_device_id ibmtr_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, ibmtr_ids);
static struct pcmcia_driver ibmtr_cs_driver = ;
static int __init init_ibmtr_cs(void)
static void __exit exit_ibmtr_cs(void)
module_init(init_ibmtr_cs);
module_exit(exit_ibmtr_cs);
