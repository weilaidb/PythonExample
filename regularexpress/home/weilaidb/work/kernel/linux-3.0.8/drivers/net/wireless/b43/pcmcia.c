static const struct pcmcia_device_id b43_pcmcia_tbl[] = ;
MODULE_DEVICE_TABLE(pcmcia, b43_pcmcia_tbl);
static int b43_pcmcia_suspend(struct pcmcia_device *dev)
static int b43_pcmcia_resume(struct pcmcia_device *dev)
# define b43_pcmcia_suspend		NULL
# define b43_pcmcia_resume		NULL
static int __devinit b43_pcmcia_probe(struct pcmcia_device *dev)
static void __devexit b43_pcmcia_remove(struct pcmcia_device *dev)
static struct pcmcia_driver b43_pcmcia_driver = ;
int b43_pcmcia_init(void)
void b43_pcmcia_exit(void)
