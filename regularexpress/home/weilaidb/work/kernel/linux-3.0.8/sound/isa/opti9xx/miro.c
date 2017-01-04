#define SNDRV_LEGACY_FIND_FREE_IRQ
#define SNDRV_LEGACY_FIND_FREE_DMA
MODULE_AUTHOR("Martin Langer <martin-langer@gmx.de>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Miro miroSOUND PCM1 pro, PCM12, PCM20 Radio");
MODULE_SUPPORTED_DEVICE("");
static int index = SNDRV_DEFAULT_IDX1;
static char *id = SNDRV_DEFAULT_STR1;
static long port = SNDRV_DEFAULT_PORT1;
static long mpu_port = SNDRV_DEFAULT_PORT1;
static long fm_port = SNDRV_DEFAULT_PORT1;
static int irq = SNDRV_DEFAULT_IRQ1;
static int mpu_irq = SNDRV_DEFAULT_IRQ1;
static int dma1 = SNDRV_DEFAULT_DMA1;
static int dma2 = SNDRV_DEFAULT_DMA1;
static int wss;
static int ide;
static int isapnp = 1;
module_param(index, int, 0444);
MODULE_PARM_DESC(index, "Index value for miro soundcard.");
module_param(id, charp, 0444);
MODULE_PARM_DESC(id, "ID string for miro soundcard.");
module_param(port, long, 0444);
MODULE_PARM_DESC(port, "WSS port # for miro driver.");
module_param(mpu_port, long, 0444);
MODULE_PARM_DESC(mpu_port, "MPU-401 port # for miro driver.");
module_param(fm_port, long, 0444);
MODULE_PARM_DESC(fm_port, "FM Port # for miro driver.");
module_param(irq, int, 0444);
MODULE_PARM_DESC(irq, "WSS irq # for miro driver.");
module_param(mpu_irq, int, 0444);
MODULE_PARM_DESC(mpu_irq, "MPU-401 irq # for miro driver.");
module_param(dma1, int, 0444);
MODULE_PARM_DESC(dma1, "1st dma # for miro driver.");
module_param(dma2, int, 0444);
MODULE_PARM_DESC(dma2, "2nd dma # for miro driver.");
module_param(wss, int, 0444);
MODULE_PARM_DESC(wss, "wss mode");
module_param(ide, int, 0444);
MODULE_PARM_DESC(ide, "enable ide port");
module_param(isapnp, bool, 0444);
MODULE_PARM_DESC(isapnp, "Enable ISA PnP detection for specified soundcard.");
#define OPTi9XX_HW_DETECT	0
#define OPTi9XX_HW_82C928	1
#define OPTi9XX_HW_82C929	2
#define OPTi9XX_HW_82C924	3
#define OPTi9XX_HW_82C925	4
#define OPTi9XX_HW_82C930	5
#define OPTi9XX_HW_82C931	6
#define OPTi9XX_HW_82C933	7
#define OPTi9XX_HW_LAST		OPTi9XX_HW_82C933
#define OPTi9XX_MC_REG(n)	n
struct snd_miro ;
static struct snd_miro_aci aci_device;
static char * snd_opti9xx_names[] = ;
static int snd_miro_pnp_is_probed;
static struct pnp_card_device_id snd_miro_pnpids[] = ;
MODULE_DEVICE_TABLE(pnp_card, snd_miro_pnpids);
static int aci_busy_wait(struct snd_miro_aci *aci)
static inline int aci_write(struct snd_miro_aci *aci, unsigned char byte)
static inline int aci_read(struct snd_miro_aci *aci)
int snd_aci_cmd(struct snd_miro_aci *aci, int write1, int write2, int write3)
EXPORT_SYMBOL(snd_aci_cmd);
static int aci_getvalue(struct snd_miro_aci *aci, unsigned char index)
static int aci_setvalue(struct snd_miro_aci *aci, unsigned char index,
int value)
struct snd_miro_aci *snd_aci_get_aci(void)
EXPORT_SYMBOL(snd_aci_get_aci);
#define snd_miro_info_capture	snd_ctl_boolean_mono_info
static int snd_miro_get_capture(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_miro_put_capture(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_miro_info_preamp(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_miro_get_preamp(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_miro_put_preamp(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define snd_miro_info_amp	snd_ctl_boolean_mono_info
static int snd_miro_get_amp(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_miro_put_amp(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define MIRO_DOUBLE(ctl_name, ctl_index, get_right_reg, set_right_reg) \
static int snd_miro_info_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_miro_get_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *uinfo)
static int snd_miro_put_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_miro_controls[] __devinitdata = ;
static struct snd_kcontrol_new snd_miro_eq_controls[] __devinitdata = ;
static struct snd_kcontrol_new snd_miro_radio_control[] __devinitdata = ;
static struct snd_kcontrol_new snd_miro_line_control[] __devinitdata = ;
static struct snd_kcontrol_new snd_miro_preamp_control[] __devinitdata = ;
static struct snd_kcontrol_new snd_miro_amp_control[] __devinitdata = ;
static struct snd_kcontrol_new snd_miro_capture_control[] __devinitdata = ;
static unsigned char aci_init_values[][2] __devinitdata = ;
static int __devinit snd_set_aci_init_values(struct snd_miro *miro)
static int __devinit snd_miro_mixer(struct snd_card *card,
struct snd_miro *miro)
static long snd_legacy_find_free_ioport(long *port_table, long size)
static int __devinit snd_miro_init(struct snd_miro *chip,
unsigned short hardware)
static unsigned char snd_miro_read(struct snd_miro *chip,
unsigned char reg)
static void snd_miro_write(struct snd_miro *chip, unsigned char reg,
unsigned char value)
#define snd_miro_write_mask(chip, reg, value, mask)	\
snd_miro_write(chip, reg,			\
(snd_miro_read(chip, reg) & ~(mask)) | ((value) & (mask)))
static void snd_miro_proc_read(struct snd_info_entry * entry,
struct snd_info_buffer *buffer)
static void __devinit snd_miro_proc_init(struct snd_card *card,
struct snd_miro *miro)
static int __devinit snd_miro_configure(struct snd_miro *chip)
static int __devinit snd_miro_opti_check(struct snd_miro *chip)
static int __devinit snd_card_miro_detect(struct snd_card *card,
struct snd_miro *chip)
static int __devinit snd_card_miro_aci_detect(struct snd_card *card,
struct snd_miro *miro)
static void snd_card_miro_free(struct snd_card *card)
static int __devinit snd_miro_probe(struct snd_card *card)
static int __devinit snd_miro_isa_match(struct device *devptr, unsigned int n)
static int __devinit snd_miro_isa_probe(struct device *devptr, unsigned int n)
static int __devexit snd_miro_isa_remove(struct device *devptr,
unsigned int dev)
#define DEV_NAME "miro"
static struct isa_driver snd_miro_driver = ;
static int __devinit snd_card_miro_pnp(struct snd_miro *chip,
struct pnp_card_link *card,
const struct pnp_card_device_id *pid)
static int __devinit snd_miro_pnp_probe(struct pnp_card_link *pcard,
const struct pnp_card_device_id *pid)
static void __devexit snd_miro_pnp_remove(struct pnp_card_link * pcard)
static struct pnp_card_driver miro_pnpc_driver = ;
static int __init alsa_card_miro_init(void)
static void __exit alsa_card_miro_exit(void)
module_init(alsa_card_miro_init)
module_exit(alsa_card_miro_exit)
