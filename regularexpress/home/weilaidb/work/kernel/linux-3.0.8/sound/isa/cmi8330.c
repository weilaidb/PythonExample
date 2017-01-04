#define PLAYBACK_ON_SB
MODULE_AUTHOR("George Talusan <gstalusan@uwaterloo.ca>");
MODULE_DESCRIPTION("C-Media CMI8330/CMI8329");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_ISAPNP;
static int isapnp[SNDRV_CARDS] = ;
static long sbport[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int sbirq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int sbdma8[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static int sbdma16[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static long wssport[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int wssirq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int wssdma[SNDRV_CARDS] = SNDRV_DEFAULT_DMA;
static long fmport[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long mpuport[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int mpuirq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for CMI8330/CMI8329 soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string  for CMI8330/CMI8329 soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable CMI8330/CMI8329 soundcard.");
module_param_array(isapnp, bool, NULL, 0444);
MODULE_PARM_DESC(isapnp, "PnP detection for specified soundcard.");
module_param_array(sbport, long, NULL, 0444);
MODULE_PARM_DESC(sbport, "Port # for CMI8330/CMI8329 SB driver.");
module_param_array(sbirq, int, NULL, 0444);
MODULE_PARM_DESC(sbirq, "IRQ # for CMI8330/CMI8329 SB driver.");
module_param_array(sbdma8, int, NULL, 0444);
MODULE_PARM_DESC(sbdma8, "DMA8 for CMI8330/CMI8329 SB driver.");
module_param_array(sbdma16, int, NULL, 0444);
MODULE_PARM_DESC(sbdma16, "DMA16 for CMI8330/CMI8329 SB driver.");
module_param_array(wssport, long, NULL, 0444);
MODULE_PARM_DESC(wssport, "Port # for CMI8330/CMI8329 WSS driver.");
module_param_array(wssirq, int, NULL, 0444);
MODULE_PARM_DESC(wssirq, "IRQ # for CMI8330/CMI8329 WSS driver.");
module_param_array(wssdma, int, NULL, 0444);
MODULE_PARM_DESC(wssdma, "DMA for CMI8330/CMI8329 WSS driver.");
module_param_array(fmport, long, NULL, 0444);
MODULE_PARM_DESC(fmport, "FM port # for CMI8330/CMI8329 driver.");
module_param_array(mpuport, long, NULL, 0444);
MODULE_PARM_DESC(mpuport, "MPU-401 port # for CMI8330/CMI8329 driver.");
module_param_array(mpuirq, int, NULL, 0444);
MODULE_PARM_DESC(mpuirq, "IRQ # for CMI8330/CMI8329 MPU-401 port.");
static int isa_registered;
static int pnp_registered;
#define CMI8330_RMUX3D    16
#define CMI8330_MUTEMUX   17
#define CMI8330_OUTPUTVOL 18
#define CMI8330_MASTVOL   19
#define CMI8330_LINVOL    20
#define CMI8330_CDINVOL   21
#define CMI8330_WAVVOL    22
#define CMI8330_RECMUX    23
#define CMI8330_WAVGAIN   24
#define CMI8330_LINGAIN   25
#define CMI8330_CDINGAIN  26
static unsigned char snd_cmi8330_image[((CMI8330_CDINGAIN)-16) + 1] =
;
typedef int (*snd_pcm_open_callback_t)(struct snd_pcm_substream *);
enum card_type ;
struct snd_cmi8330 ;
static struct pnp_card_device_id snd_cmi8330_pnpids[] = ;
MODULE_DEVICE_TABLE(pnp_card, snd_cmi8330_pnpids);
static struct snd_kcontrol_new snd_cmi8330_controls[] __devinitdata = ;
static struct sbmix_elem cmi8330_sb_mixers[] __devinitdata = ;
static unsigned char cmi8330_sb_init_values[][2] __devinitdata = ;
static int __devinit cmi8330_add_sb_mixers(struct snd_sb *chip)
static int __devinit snd_cmi8330_mixer(struct snd_card *card, struct snd_cmi8330 *acard)
static int __devinit snd_cmi8330_pnp(int dev, struct snd_cmi8330 *acard,
struct pnp_card_link *card,
const struct pnp_card_device_id *id)
#define CMI_SB_STREAM	SNDRV_PCM_STREAM_PLAYBACK
#define CMI_AD_STREAM	SNDRV_PCM_STREAM_CAPTURE
#define CMI_SB_STREAM	SNDRV_PCM_STREAM_CAPTURE
#define CMI_AD_STREAM	SNDRV_PCM_STREAM_PLAYBACK
static int snd_cmi8330_playback_open(struct snd_pcm_substream *substream)
static int snd_cmi8330_capture_open(struct snd_pcm_substream *substream)
static int __devinit snd_cmi8330_pcm(struct snd_card *card, struct snd_cmi8330 *chip)
static int snd_cmi8330_suspend(struct snd_card *card)
static int snd_cmi8330_resume(struct snd_card *card)
#define is_isapnp_selected(dev)		isapnp[dev]
#define is_isapnp_selected(dev)		0
#define PFX	"cmi8330: "
static int snd_cmi8330_card_new(int dev, struct snd_card **cardp)
static int __devinit snd_cmi8330_probe(struct snd_card *card, int dev)
static int __devinit snd_cmi8330_isa_match(struct device *pdev,
unsigned int dev)
static int __devinit snd_cmi8330_isa_probe(struct device *pdev,
unsigned int dev)
static int __devexit snd_cmi8330_isa_remove(struct device *devptr,
unsigned int dev)
static int snd_cmi8330_isa_suspend(struct device *dev, unsigned int n,
pm_message_t state)
static int snd_cmi8330_isa_resume(struct device *dev, unsigned int n)
#define DEV_NAME	"cmi8330"
static struct isa_driver snd_cmi8330_driver = ;
static int __devinit snd_cmi8330_pnp_detect(struct pnp_card_link *pcard,
const struct pnp_card_device_id *pid)
static void __devexit snd_cmi8330_pnp_remove(struct pnp_card_link * pcard)
static int snd_cmi8330_pnp_suspend(struct pnp_card_link *pcard, pm_message_t state)
static int snd_cmi8330_pnp_resume(struct pnp_card_link *pcard)
static struct pnp_card_driver cmi8330_pnpc_driver = ;
static int __init alsa_card_cmi8330_init(void)
static void __exit alsa_card_cmi8330_exit(void)
module_init(alsa_card_cmi8330_init)
module_exit(alsa_card_cmi8330_exit)
