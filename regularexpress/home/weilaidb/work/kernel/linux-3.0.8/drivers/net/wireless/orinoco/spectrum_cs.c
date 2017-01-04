#define DRIVER_NAME "spectrum_cs"
#define PFX DRIVER_NAME ": "
MODULE_AUTHOR("Pavel Roskin <proski@gnu.org>");
MODULE_DESCRIPTION("Driver for Symbol Spectrum24 Trilogy cards with firmware downloader");
MODULE_LICENSE("Dual MPL/GPL");
static int ignore_cis_vcc;
module_param(ignore_cis_vcc, int, 0);
MODULE_PARM_DESC(ignore_cis_vcc, "Allow voltage mismatch between card and socket");
struct orinoco_pccard ;
static int spectrum_cs_config(struct pcmcia_device *link);
static void spectrum_cs_release(struct pcmcia_device *link);
#define HCR_RUN		0x07
#define HCR_IDLE	0x0E
#define HCR_MEM16	0x10
static int
spectrum_reset(struct pcmcia_device *link, int idle)
static int
spectrum_cs_hard_reset(struct orinoco_private *priv)
static int
spectrum_cs_stop_firmware(struct orinoco_private *priv, int idle)
static int
spectrum_cs_probe(struct pcmcia_device *link)
static void spectrum_cs_detach(struct pcmcia_device *link)
static int spectrum_cs_config_check(struct pcmcia_device *p_dev,
void *priv_data)
;
static int
spectrum_cs_config(struct pcmcia_device *link)
static void
spectrum_cs_release(struct pcmcia_device *link)
static int
spectrum_cs_suspend(struct pcmcia_device *link)
static int
spectrum_cs_resume(struct pcmcia_device *link)
static const struct pcmcia_device_id spectrum_cs_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, spectrum_cs_ids);
static struct pcmcia_driver orinoco_driver = ;
static int __init
init_spectrum_cs(void)
static void __exit
exit_spectrum_cs(void)
module_init(init_spectrum_cs);
module_exit(exit_spectrum_cs);
