# ifndef __alpha__
#  define SLOWIO
# endif
#  include "msnd_classic.h"
#  define LOGNAME			"msnd_classic"
#  include "msnd_pinnacle.h"
#  define LOGNAME			"snd_msnd_pinnacle"
static void __devinit set_default_audio_parameters(struct snd_msnd *chip)
static void snd_msnd_eval_dsp_msg(struct snd_msnd *chip, u16 wMessage)
static irqreturn_t snd_msnd_interrupt(int irq, void *dev_id)
static int snd_msnd_reset_dsp(long io, unsigned char *info)
static int __devinit snd_msnd_probe(struct snd_card *card)
static int snd_msnd_init_sma(struct snd_msnd *chip)
static int upload_dsp_code(struct snd_card *card)
static void reset_proteus(struct snd_msnd *chip)
static int snd_msnd_initialize(struct snd_card *card)
static int snd_msnd_dsp_full_reset(struct snd_card *card)
static int snd_msnd_dev_free(struct snd_device *device)
static int snd_msnd_send_dsp_cmd_chk(struct snd_msnd *chip, u8 cmd)
static int __devinit snd_msnd_calibrate_adc(struct snd_msnd *chip, u16 srate)
static int snd_msnd_mpu401_open(struct snd_mpu401 *mpu)
static void snd_msnd_mpu401_close(struct snd_mpu401 *mpu)
static long mpu_io[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int mpu_irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static int __devinit snd_msnd_attach(struct snd_card *card)
static void __devexit snd_msnd_unload(struct snd_card *card)
static int __devinit snd_msnd_write_cfg(int cfg, int reg, int value)
static int __devinit snd_msnd_write_cfg_io0(int cfg, int num, u16 io)
static int __devinit snd_msnd_write_cfg_io1(int cfg, int num, u16 io)
static int __devinit snd_msnd_write_cfg_irq(int cfg, int num, u16 irq)
static int __devinit snd_msnd_write_cfg_mem(int cfg, int num, int mem)
static int __devinit snd_msnd_activate_logical(int cfg, int num)
static int __devinit snd_msnd_write_cfg_logical(int cfg, int num, u16 io0,
u16 io1, u16 irq, int mem)
static int __devinit snd_msnd_pinnacle_cfg_reset(int cfg)
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
module_param_array(index, int, NULL, S_IRUGO);
MODULE_PARM_DESC(index, "Index value for msnd_pinnacle soundcard.");
module_param_array(id, charp, NULL, S_IRUGO);
MODULE_PARM_DESC(id, "ID string for msnd_pinnacle soundcard.");
static long io[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static long mem[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long cfg[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long ide_io0[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static long ide_io1[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int ide_irq[SNDRV_CARDS] = SNDRV_DEFAULT_IRQ;
static long joystick_io[SNDRV_CARDS] = SNDRV_DEFAULT_PORT;
static int digital[SNDRV_CARDS];
static int reset[SNDRV_CARDS];
static int write_ndelay[SNDRV_CARDS] = ;
static int calibrate_signal;
static int isapnp[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
module_param_array(isapnp, bool, NULL, 0444);
MODULE_PARM_DESC(isapnp, "ISA PnP detection for specified soundcard.");
#define has_isapnp(x) isapnp[x]
#define has_isapnp(x) 0
MODULE_AUTHOR("Karsten Wiese <annabellesgarden@yahoo.de>");
MODULE_DESCRIPTION("Turtle Beach " LONGNAME " Linux Driver");
MODULE_LICENSE("GPL");
MODULE_FIRMWARE(INITCODEFILE);
MODULE_FIRMWARE(PERMCODEFILE);
module_param_array(io, long, NULL, S_IRUGO);
MODULE_PARM_DESC(io, "IO port #");
module_param_array(irq, int, NULL, S_IRUGO);
module_param_array(mem, long, NULL, S_IRUGO);
module_param_array(write_ndelay, int, NULL, S_IRUGO);
module_param(calibrate_signal, int, S_IRUGO);
module_param_array(digital, int, NULL, S_IRUGO);
module_param_array(cfg, long, NULL, S_IRUGO);
module_param_array(reset, int, 0, S_IRUGO);
module_param_array(mpu_io, long, NULL, S_IRUGO);
module_param_array(mpu_irq, int, NULL, S_IRUGO);
module_param_array(ide_io0, long, NULL, S_IRUGO);
module_param_array(ide_io1, long, NULL, S_IRUGO);
module_param_array(ide_irq, int, NULL, S_IRUGO);
module_param_array(joystick_io, long, NULL, S_IRUGO);
static int __devinit snd_msnd_isa_match(struct device *pdev, unsigned int i)
static int __devinit snd_msnd_isa_probe(struct device *pdev, unsigned int idx)
static int __devexit snd_msnd_isa_remove(struct device *pdev, unsigned int dev)
#define DEV_NAME "msnd-pinnacle"
static struct isa_driver snd_msnd_driver = ;
static int __devinit snd_msnd_pnp_detect(struct pnp_card_link *pcard,
const struct pnp_card_device_id *pid)
static void __devexit snd_msnd_pnp_remove(struct pnp_card_link *pcard)
static int isa_registered;
static int pnp_registered;
static struct pnp_card_device_id msnd_pnpids[] = ;
MODULE_DEVICE_TABLE(pnp_card, msnd_pnpids);
static struct pnp_card_driver msnd_pnpc_driver = ;
static int __init snd_msnd_init(void)
static void __exit snd_msnd_exit(void)
module_init(snd_msnd_init);
module_exit(snd_msnd_exit);
