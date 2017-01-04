static struct pcmcia_device *cur_dev;
#define thisboard ((const struct das08_board_struct *)dev->board_ptr)
static int das08_cs_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static struct comedi_driver driver_das08_cs = ;
static int das08_cs_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static void das08_pcmcia_config(struct pcmcia_device *link);
static void das08_pcmcia_release(struct pcmcia_device *link);
static int das08_pcmcia_suspend(struct pcmcia_device *p_dev);
static int das08_pcmcia_resume(struct pcmcia_device *p_dev);
static int das08_pcmcia_attach(struct pcmcia_device *);
static void das08_pcmcia_detach(struct pcmcia_device *);
struct local_info_t ;
static int das08_pcmcia_attach(struct pcmcia_device *link)
static void das08_pcmcia_detach(struct pcmcia_device *link)
static int das08_pcmcia_config_loop(struct pcmcia_device *p_dev,
void *priv_data)
static void das08_pcmcia_config(struct pcmcia_device *link)
static void das08_pcmcia_release(struct pcmcia_device *link)
static int das08_pcmcia_suspend(struct pcmcia_device *link)
static int das08_pcmcia_resume(struct pcmcia_device *link)
static const struct pcmcia_device_id das08_cs_id_table[] = ;
MODULE_DEVICE_TABLE(pcmcia, das08_cs_id_table);
MODULE_AUTHOR("David A. Schleef <ds@schleef.org>, "
"Frank Mori Hess <fmhess@users.sourceforge.net>");
MODULE_DESCRIPTION("Comedi driver for ComputerBoards DAS-08 PCMCIA boards");
MODULE_LICENSE("GPL");
struct pcmcia_driver das08_cs_driver = ;
static int __init init_das08_pcmcia_cs(void)
static void __exit exit_das08_pcmcia_cs(void)
static int __init das08_cs_init_module(void)
static void __exit das08_cs_exit_module(void)
module_init(das08_cs_init_module);
module_exit(das08_cs_exit_module);
