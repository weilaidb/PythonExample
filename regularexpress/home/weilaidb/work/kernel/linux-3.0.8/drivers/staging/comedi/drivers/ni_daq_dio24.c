static int dio24_attach(struct comedi_device *dev, struct comedi_devconfig *it);
static int dio24_detach(struct comedi_device *dev);
enum dio24_bustype ;
struct dio24_board_struct ;
static const struct dio24_board_struct dio24_boards[] = ;
#define thisboard ((const struct dio24_board_struct *)dev->board_ptr)
struct dio24_private ;
#define devpriv ((struct dio24_private *)dev->private)
static struct comedi_driver driver_dio24 = ;
static int dio24_attach(struct comedi_device *dev, struct comedi_devconfig *it)
;
static int dio24_detach(struct comedi_device *dev)
;
static void dio24_config(struct pcmcia_device *link);
static void dio24_release(struct pcmcia_device *link);
static int dio24_cs_suspend(struct pcmcia_device *p_dev);
static int dio24_cs_resume(struct pcmcia_device *p_dev);
static int dio24_cs_attach(struct pcmcia_device *);
static void dio24_cs_detach(struct pcmcia_device *);
struct local_info_t ;
static int dio24_cs_attach(struct pcmcia_device *link)
static void dio24_cs_detach(struct pcmcia_device *link)
static int dio24_pcmcia_config_loop(struct pcmcia_device *p_dev,
void *priv_data)
static void dio24_config(struct pcmcia_device *link)
static void dio24_release(struct pcmcia_device *link)
static int dio24_cs_suspend(struct pcmcia_device *link)
static int dio24_cs_resume(struct pcmcia_device *link)
static const struct pcmcia_device_id dio24_cs_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, dio24_cs_ids);
MODULE_AUTHOR("Daniel Vecino Castel <dvecino@able.es>");
MODULE_DESCRIPTION("Comedi driver for National Instruments "
"PCMCIA DAQ-Card DIO-24");
MODULE_LICENSE("GPL");
struct pcmcia_driver dio24_cs_driver = ;
static int __init init_dio24_cs(void)
static void __exit exit_dio24_cs(void)
int __init init_module(void)
void __exit cleanup_module(void)
