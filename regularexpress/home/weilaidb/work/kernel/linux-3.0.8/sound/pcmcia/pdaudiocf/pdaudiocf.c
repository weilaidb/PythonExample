#define CARD_NAME	"PDAudio-CF"
MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Sound Core " CARD_NAME);
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for " CARD_NAME " soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for " CARD_NAME " soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable " CARD_NAME " soundcard.");
static struct snd_card *card_list[SNDRV_CARDS];
static int pdacf_config(struct pcmcia_device *link);
static void snd_pdacf_detach(struct pcmcia_device *p_dev);
static void pdacf_release(struct pcmcia_device *link)
static int snd_pdacf_free(struct snd_pdacf *pdacf)
static int snd_pdacf_dev_free(struct snd_device *device)
static int snd_pdacf_probe(struct pcmcia_device *link)
static int snd_pdacf_assign_resources(struct snd_pdacf *pdacf, int port, int irq)
static void snd_pdacf_detach(struct pcmcia_device *link)
static int pdacf_config(struct pcmcia_device *link)
static int pdacf_suspend(struct pcmcia_device *link)
static int pdacf_resume(struct pcmcia_device *link)
static const struct pcmcia_device_id snd_pdacf_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, snd_pdacf_ids);
static struct pcmcia_driver pdacf_cs_driver = ;
static int __init init_pdacf(void)
static void __exit exit_pdacf(void)
module_init(init_pdacf);
module_exit(exit_pdacf);
