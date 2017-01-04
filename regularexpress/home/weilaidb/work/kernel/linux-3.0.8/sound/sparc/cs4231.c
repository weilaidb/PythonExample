#define SBUS_SUPPORT
#if defined(CONFIG_PCI) && defined(CONFIG_SPARC64)
#define EBUS_SUPPORT
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for Sun CS4231 soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for Sun CS4231 soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable Sun CS4231 soundcard.");
MODULE_AUTHOR("Jaroslav Kysela, Derrick J. Brashear and David S. Miller");
MODULE_DESCRIPTION("Sun CS4231");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
struct sbus_dma_info ;
struct snd_cs4231;
struct cs4231_dma_control ;
struct snd_cs4231 ;
#define CS4231U(chip, x)	((chip)->port + ((c_d_c_CS4231##x) << 2))
#define APCCSR	0x10UL
#define APCCVA	0x20UL
#define APCCC	0x24UL
#define APCCNVA	0x28UL
#define APCCNC	0x2cUL
#define APCPVA	0x30UL
#define APCPC	0x34UL
#define APCPNVA	0x38UL
#define APCPNC	0x3cUL
#define APCVA  0x0UL
#define APCC   0x4UL
#define APCNVA 0x8UL
#define APCNC  0xcUL
#define APC_PLAY 0x30UL
#define APC_RECORD 0x20UL
#define APC_INT_PENDING 0x800000
#define APC_PLAY_INT    0x400000
#define APC_CAPT_INT    0x200000
#define APC_GENL_INT    0x100000
#define APC_XINT_ENA    0x80000
#define APC_XINT_PLAY   0x40000
#define APC_XINT_CAPT   0x20000
#define APC_XINT_GENL   0x10000
#define APC_XINT_EMPT   0x8000
#define APC_XINT_PEMP   0x4000
#define APC_XINT_PNVA   0x2000
#define APC_XINT_PENA   0x1000
#define APC_XINT_COVF   0x800
#define APC_XINT_CNVA   0x400
#define APC_XINT_CEMP   0x200
#define APC_XINT_CENA   0x100
#define APC_PPAUSE      0x80
#define APC_CPAUSE      0x40
#define APC_CDC_RESET   0x20
#define APC_PDMA_READY  0x08
#define APC_CDMA_READY  0x04
#define APC_CHIP_RESET  0x01
#define EBDMA_CSR	0x00UL
#define EBDMA_ADDR	0x04UL
#define EBDMA_COUNT	0x08UL
static unsigned char freq_bits[14] = ;
static unsigned int rates[14] = ;
static struct snd_pcm_hw_constraint_list hw_constraints_rates = ;
static int snd_cs4231_xrate(struct snd_pcm_runtime *runtime)
static unsigned char snd_cs4231_original_image[32] =
;
static u8 __cs4231_readb(struct snd_cs4231 *cp, void __iomem *reg_addr)
static void __cs4231_writeb(struct snd_cs4231 *cp, u8 val,
void __iomem *reg_addr)
static void snd_cs4231_ready(struct snd_cs4231 *chip)
static void snd_cs4231_dout(struct snd_cs4231 *chip, unsigned char reg,
unsigned char value)
static inline void snd_cs4231_outm(struct snd_cs4231 *chip, unsigned char reg,
unsigned char mask, unsigned char value)
static void snd_cs4231_out(struct snd_cs4231 *chip, unsigned char reg,
unsigned char value)
static unsigned char snd_cs4231_in(struct snd_cs4231 *chip, unsigned char reg)
static void snd_cs4231_busy_wait(struct snd_cs4231 *chip)
static void snd_cs4231_mce_up(struct snd_cs4231 *chip)
static void snd_cs4231_mce_down(struct snd_cs4231 *chip)
static void snd_cs4231_advance_dma(struct cs4231_dma_control *dma_cont,
struct snd_pcm_substream *substream,
unsigned int *periods_sent)
static void cs4231_dma_trigger(struct snd_pcm_substream *substream,
unsigned int what, int on)
static int snd_cs4231_trigger(struct snd_pcm_substream *substream, int cmd)
static unsigned char snd_cs4231_get_rate(unsigned int rate)
static unsigned char snd_cs4231_get_format(struct snd_cs4231 *chip, int format,
int channels)
static void snd_cs4231_calibrate_mute(struct snd_cs4231 *chip, int mute)
static void snd_cs4231_playback_format(struct snd_cs4231 *chip,
struct snd_pcm_hw_params *params,
unsigned char pdfr)
static void snd_cs4231_capture_format(struct snd_cs4231 *chip,
struct snd_pcm_hw_params *params,
unsigned char cdfr)
static unsigned long snd_cs4231_timer_resolution(struct snd_timer *timer)
static int snd_cs4231_timer_start(struct snd_timer *timer)
static int snd_cs4231_timer_stop(struct snd_timer *timer)
static void __devinit snd_cs4231_init(struct snd_cs4231 *chip)
static int snd_cs4231_open(struct snd_cs4231 *chip, unsigned int mode)
static void snd_cs4231_close(struct snd_cs4231 *chip, unsigned int mode)
static int snd_cs4231_timer_open(struct snd_timer *timer)
static int snd_cs4231_timer_close(struct snd_timer *timer)
static struct snd_timer_hardware snd_cs4231_timer_table = ;
static int snd_cs4231_playback_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_cs4231_playback_prepare(struct snd_pcm_substream *substream)
static int snd_cs4231_capture_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_cs4231_capture_prepare(struct snd_pcm_substream *substream)
static void snd_cs4231_overrange(struct snd_cs4231 *chip)
static void snd_cs4231_play_callback(struct snd_cs4231 *chip)
static void snd_cs4231_capture_callback(struct snd_cs4231 *chip)
static snd_pcm_uframes_t snd_cs4231_playback_pointer(
struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_cs4231_capture_pointer(
struct snd_pcm_substream *substream)
static int __devinit snd_cs4231_probe(struct snd_cs4231 *chip)
static struct snd_pcm_hardware snd_cs4231_playback = ;
static struct snd_pcm_hardware snd_cs4231_capture = ;
static int snd_cs4231_playback_open(struct snd_pcm_substream *substream)
static int snd_cs4231_capture_open(struct snd_pcm_substream *substream)
static int snd_cs4231_playback_close(struct snd_pcm_substream *substream)
static int snd_cs4231_capture_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_cs4231_playback_ops = ;
static struct snd_pcm_ops snd_cs4231_capture_ops = ;
static int __devinit snd_cs4231_pcm(struct snd_card *card)
static int __devinit snd_cs4231_timer(struct snd_card *card)
static int snd_cs4231_info_mux(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_cs4231_get_mux(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cs4231_put_mux(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cs4231_info_single(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_cs4231_get_single(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cs4231_put_single(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cs4231_info_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_cs4231_get_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cs4231_put_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define CS4231_SINGLE(xname, xindex, reg, shift, mask, invert) \
#define CS4231_DOUBLE(xname, xindex, left_reg, right_reg, shift_left, \
shift_right, mask, invert) \
static struct snd_kcontrol_new snd_cs4231_controls[] __devinitdata = ;
static int __devinit snd_cs4231_mixer(struct snd_card *card)
static int dev;
static int __devinit cs4231_attach_begin(struct snd_card **rcard)
static int __devinit cs4231_attach_finish(struct snd_card *card)
static irqreturn_t snd_cs4231_sbus_interrupt(int irq, void *dev_id)
static int sbus_dma_request(struct cs4231_dma_control *dma_cont,
dma_addr_t bus_addr, size_t len)
static void sbus_dma_prepare(struct cs4231_dma_control *dma_cont, int d)
static void sbus_dma_enable(struct cs4231_dma_control *dma_cont, int on)
static unsigned int sbus_dma_addr(struct cs4231_dma_control *dma_cont)
static int snd_cs4231_sbus_free(struct snd_cs4231 *chip)
static int snd_cs4231_sbus_dev_free(struct snd_device *device)
static struct snd_device_ops snd_cs4231_sbus_dev_ops = ;
static int __devinit snd_cs4231_sbus_create(struct snd_card *card,
struct platform_device *op,
int dev)
static int __devinit cs4231_sbus_probe(struct platform_device *op)
static void snd_cs4231_ebus_play_callback(struct ebus_dma_info *p, int event,
void *cookie)
static void snd_cs4231_ebus_capture_callback(struct ebus_dma_info *p,
int event, void *cookie)
static int _ebus_dma_request(struct cs4231_dma_control *dma_cont,
dma_addr_t bus_addr, size_t len)
static void _ebus_dma_enable(struct cs4231_dma_control *dma_cont, int on)
static void _ebus_dma_prepare(struct cs4231_dma_control *dma_cont, int dir)
static unsigned int _ebus_dma_addr(struct cs4231_dma_control *dma_cont)
static int snd_cs4231_ebus_free(struct snd_cs4231 *chip)
static int snd_cs4231_ebus_dev_free(struct snd_device *device)
static struct snd_device_ops snd_cs4231_ebus_dev_ops = ;
static int __devinit snd_cs4231_ebus_create(struct snd_card *card,
struct platform_device *op,
int dev)
static int __devinit cs4231_ebus_probe(struct platform_device *op)
static int __devinit cs4231_probe(struct platform_device *op)
static int __devexit cs4231_remove(struct platform_device *op)
static const struct of_device_id cs4231_match[] = ;
MODULE_DEVICE_TABLE(of, cs4231_match);
static struct platform_driver cs4231_driver = ;
static int __init cs4231_init(void)
static void __exit cs4231_exit(void)
module_init(cs4231_init);
module_exit(cs4231_exit);
