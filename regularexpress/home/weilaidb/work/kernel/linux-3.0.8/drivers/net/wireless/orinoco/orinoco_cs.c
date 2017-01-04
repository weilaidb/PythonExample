#define DRIVER_NAME "orinoco_cs"
#define PFX DRIVER_NAME ": "
MODULE_AUTHOR("David Gibson <hermes@gibson.dropbear.id.au>");
MODULE_DESCRIPTION("Driver for PCMCIA Lucent Orinoco,"
" Prism II based and similar wireless cards");
MODULE_LICENSE("Dual MPL/GPL");
static int ignore_cis_vcc;
module_param(ignore_cis_vcc, int, 0);
MODULE_PARM_DESC(ignore_cis_vcc, "Allow voltage mismatch between card and socket");
struct orinoco_pccard ;
static int orinoco_cs_config(struct pcmcia_device *link);
static void orinoco_cs_release(struct pcmcia_device *link);
static void orinoco_cs_detach(struct pcmcia_device *p_dev);
static int
orinoco_cs_hard_reset(struct orinoco_private *priv)
static int
orinoco_cs_probe(struct pcmcia_device *link)
static void orinoco_cs_detach(struct pcmcia_device *link)
static int orinoco_cs_config_check(struct pcmcia_device *p_dev, void *priv_data)
;
static int
orinoco_cs_config(struct pcmcia_device *link)
static void
orinoco_cs_release(struct pcmcia_device *link)
static int orinoco_cs_suspend(struct pcmcia_device *link)
static int orinoco_cs_resume(struct pcmcia_device *link)
static const struct pcmcia_device_id orinoco_cs_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, orinoco_cs_ids);
static struct pcmcia_driver orinoco_driver = ;
static int __init
init_orinoco_cs(void)
static void __exit
exit_orinoco_cs(void)
module_init(init_orinoco_cs);
module_exit(exit_orinoco_cs);
