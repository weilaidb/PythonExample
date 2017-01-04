#undef LABPC_DEBUG
static struct pcmcia_device *pcmcia_cur_dev;
static int labpc_attach(struct comedi_device *dev, struct comedi_devconfig *it);
static const struct labpc_board_struct labpc_cs_boards[] = ;
#define thisboard ((const struct labpc_board_struct *)dev->board_ptr)
static struct comedi_driver driver_labpc_cs = ;
static int labpc_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static void labpc_config(struct pcmcia_device *link);
static void labpc_release(struct pcmcia_device *link);
static int labpc_cs_suspend(struct pcmcia_device *p_dev);
static int labpc_cs_resume(struct pcmcia_device *p_dev);
static int labpc_cs_attach(struct pcmcia_device *);
static void labpc_cs_detach(struct pcmcia_device *);
struct local_info_t ;
static int labpc_cs_attach(struct pcmcia_device *link)
static void labpc_cs_detach(struct pcmcia_device *link)
static int labpc_pcmcia_config_loop(struct pcmcia_device *p_dev,
void *priv_data)
static void labpc_config(struct pcmcia_device *link)
static void labpc_release(struct pcmcia_device *link)
static int labpc_cs_suspend(struct pcmcia_device *link)
static int labpc_cs_resume(struct pcmcia_device *link)
static const struct pcmcia_device_id labpc_cs_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, labpc_cs_ids);
MODULE_AUTHOR("Frank Mori Hess <fmhess@users.sourceforge.net>");
MODULE_DESCRIPTION("Comedi driver for National Instruments Lab-PC");
MODULE_LICENSE("GPL");
struct pcmcia_driver labpc_cs_driver = ;
static int __init init_labpc_cs(void)
static void __exit exit_labpc_cs(void)
int __init labpc_init_module(void)
void __exit labpc_exit_module(void)
module_init(labpc_init_module);
module_exit(labpc_exit_module);
