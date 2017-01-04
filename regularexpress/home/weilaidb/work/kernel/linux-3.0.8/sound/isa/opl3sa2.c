MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Yamaha OPL3SA2+");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_ISAPNP;
static int isapnp[SNDRV_CARDS] = ;
static long port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long sb_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long wss_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long fm_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long midi_port[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int dma1[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static int dma2[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static int opl3sa3_ymode[SNDRV_CARDS];
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for OPL3-SA soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for OPL3-SA soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable OPL3-SA soundcard.");
module_param_array(isapnp, bool, NULL, 0444);
MODULE_PARM_DESC(isapnp, "PnP detection for specified soundcard.");
module_param_array(port, long, NULL, 0444);
MODULE_PARM_DESC(port, "Port # for OPL3-SA driver.");
module_param_array(sb_port, long, NULL, 0444);
MODULE_PARM_DESC(sb_port, "SB port # for OPL3-SA driver.");
module_param_array(wss_port, long, NULL, 0444);
MODULE_PARM_DESC(wss_port, "WSS port # for OPL3-SA driver.");
module_param_array(fm_port, long, NULL, 0444);
MODULE_PARM_DESC(fm_port, "FM port # for OPL3-SA driver.");
module_param_array(midi_port, long, NULL, 0444);
MODULE_PARM_DESC(midi_port, "MIDI port # for OPL3-SA driver.");
module_param_array(irq, int, NULL, 0444);
MODULE_PARM_DESC(irq, "IRQ # for OPL3-SA driver.");
module_param_array(dma1, int, NULL, 0444);
MODULE_PARM_DESC(dma1, "DMA1 # for OPL3-SA driver.");
module_param_array(dma2, int, NULL, 0444);
MODULE_PARM_DESC(dma2, "DMA2 # for OPL3-SA driver.");
module_param_array(opl3sa3_ymode, int, NULL, 0444);
MODULE_PARM_DESC(opl3sa3_ymode, "Speaker size selection for 3D Enhancement mode: Desktop/Large Notebook/Small Notebook/HiFi.");
static int isa_registered;
static int pnp_registered;
static int pnpc_registered;
#define OPL3SA2_PM_CTRL		0x01
#define OPL3SA2_SYS_CTRL		0x02
#define OPL3SA2_IRQ_CONFIG	0x03
#define OPL3SA2_IRQ_STATUS	0x04
#define OPL3SA2_DMA_CONFIG	0x06
#define OPL3SA2_MASTER_LEFT	0x07
#define OPL3SA2_MASTER_RIGHT	0x08
#define OPL3SA2_MIC		0x09
#define OPL3SA2_MISC		0x0A
#define OPL3SA3_DGTL_DOWN	0x12
#define OPL3SA3_ANLG_DOWN	0x13
#define OPL3SA3_WIDE		0x14
#define OPL3SA3_BASS		0x15
#define OPL3SA3_TREBLE		0x16
#define OPL3SA2_PM_ADOWN		0x20
#define OPL3SA2_PM_PSV		0x04
#define OPL3SA2_PM_PDN		0x02
#define OPL3SA2_PM_PDX		0x01
#define OPL3SA2_PM_D0	0x00
#define OPL3SA2_PM_D3	(OPL3SA2_PM_ADOWN|OPL3SA2_PM_PSV|OPL3SA2_PM_PDN|OPL3SA2_PM_PDX)
struct snd_opl3sa2 ;
#define PFX	"opl3sa2: "
static struct pnp_device_id snd_opl3sa2_pnpbiosids[] = ;
MODULE_DEVICE_TABLE(pnp, snd_opl3sa2_pnpbiosids);
static struct pnp_card_device_id snd_opl3sa2_pnpids[] = ;
MODULE_DEVICE_TABLE(pnp_card, snd_opl3sa2_pnpids);
static unsigned char __snd_opl3sa2_read(struct snd_opl3sa2 *chip, unsigned char reg)
static unsigned char snd_opl3sa2_read(struct snd_opl3sa2 *chip, unsigned char reg)
static void __snd_opl3sa2_write(struct snd_opl3sa2 *chip, unsigned char reg, unsigned char value)
static void snd_opl3sa2_write(struct snd_opl3sa2 *chip, unsigned char reg, unsigned char value)
static int __devinit snd_opl3sa2_detect(struct snd_card *card)
static irqreturn_t snd_opl3sa2_interrupt(int irq, void *dev_id)
#define OPL3SA2_SINGLE(xname, xindex, reg, shift, mask, invert) \
#define OPL3SA2_SINGLE_TLV(xname, xindex, reg, shift, mask, invert, xtlv) \
static int snd_opl3sa2_get_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_opl3sa2_put_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define OPL3SA2_DOUBLE(xname, xindex, left_reg, right_reg, shift_left, shift_right, mask, invert) \
#define OPL3SA2_DOUBLE_TLV(xname, xindex, left_reg, right_reg, shift_left, shift_right, mask, invert, xtlv) \
static int snd_opl3sa2_get_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_opl3sa2_put_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(db_scale_master, -3000, 200, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_5bit_12db_max, -3450, 150, 0);
static struct snd_kcontrol_new snd_opl3sa2_controls[] = ;
static struct snd_kcontrol_new snd_opl3sa2_tone_controls[] = ;
static void snd_opl3sa2_master_free(struct snd_kcontrol *kcontrol)
static int __devinit snd_opl3sa2_mixer(struct snd_card *card)
static int snd_opl3sa2_suspend(struct snd_card *card, pm_message_t state)
static int snd_opl3sa2_resume(struct snd_card *card)
static int __devinit snd_opl3sa2_pnp(int dev, struct snd_opl3sa2 *chip,
struct pnp_dev *pdev)
static void snd_opl3sa2_free(struct snd_card *card)
static int snd_opl3sa2_card_new(int dev, struct snd_card **cardp)
static int __devinit snd_opl3sa2_probe(struct snd_card *card, int dev)
static int __devinit snd_opl3sa2_pnp_detect(struct pnp_dev *pdev,
const struct pnp_device_id *id)
static void __devexit snd_opl3sa2_pnp_remove(struct pnp_dev * pdev)
static int snd_opl3sa2_pnp_suspend(struct pnp_dev *pdev, pm_message_t state)
static int snd_opl3sa2_pnp_resume(struct pnp_dev *pdev)
static struct pnp_driver opl3sa2_pnp_driver = ;
static int __devinit snd_opl3sa2_pnp_cdetect(struct pnp_card_link *pcard,
const struct pnp_card_device_id *id)
static void __devexit snd_opl3sa2_pnp_cremove(struct pnp_card_link * pcard)
static int snd_opl3sa2_pnp_csuspend(struct pnp_card_link *pcard, pm_message_t state)
static int snd_opl3sa2_pnp_cresume(struct pnp_card_link *pcard)
static struct pnp_card_driver opl3sa2_pnpc_driver = ;
static int __devinit snd_opl3sa2_isa_match(struct device *pdev,
unsigned int dev)
static int __devinit snd_opl3sa2_isa_probe(struct device *pdev,
unsigned int dev)
static int __devexit snd_opl3sa2_isa_remove(struct device *devptr,
unsigned int dev)
static int snd_opl3sa2_isa_suspend(struct device *dev, unsigned int n,
pm_message_t state)
static int snd_opl3sa2_isa_resume(struct device *dev, unsigned int n)
#define DEV_NAME "opl3sa2"
static struct isa_driver snd_opl3sa2_isa_driver = ;
static int __init alsa_card_opl3sa2_init(void)
static void __exit alsa_card_opl3sa2_exit(void)
module_init(alsa_card_opl3sa2_init)
module_exit(alsa_card_opl3sa2_exit)
