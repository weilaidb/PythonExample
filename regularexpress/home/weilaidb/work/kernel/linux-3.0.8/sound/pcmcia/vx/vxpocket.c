MODULE_AUTHOR("Takashi Iwai <tiwai@suse.de>");
MODULE_DESCRIPTION("Digigram VXPocket");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static int ibl[SNDRV_CARDS];
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for VXPocket soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for VXPocket soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable VXPocket soundcard.");
module_param_array(ibl, int, NULL, 0444);
MODULE_PARM_DESC(ibl, "Capture IBL size for VXPocket soundcard.");
static unsigned int card_alloc;
static void vxpocket_release(struct pcmcia_device *link)
static int snd_vxpocket_dev_free(struct snd_device *device)
static const DECLARE_TLV_DB_SCALE(db_scale_old_vol, -11350, 50, 0);
static struct snd_vx_hardware vxpocket_hw = ;
static struct snd_vx_hardware vxp440_hw = ;
static int snd_vxpocket_new(struct snd_card *card, int ibl,
struct pcmcia_device *link,
struct snd_vxpocket **chip_ret)
static int snd_vxpocket_assign_resources(struct vx_core *chip, int port, int irq)
static int vxpocket_config(struct pcmcia_device *link)
static int vxp_suspend(struct pcmcia_device *link)
static int vxp_resume(struct pcmcia_device *link)
static int vxpocket_probe(struct pcmcia_device *p_dev)
static void vxpocket_detach(struct pcmcia_device *link)
static const struct pcmcia_device_id vxp_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, vxp_ids);
static struct pcmcia_driver vxp_cs_driver = ;
static int __init init_vxpocket(void)
static void __exit exit_vxpocket(void)
module_init(init_vxpocket);
module_exit(exit_vxpocket);
