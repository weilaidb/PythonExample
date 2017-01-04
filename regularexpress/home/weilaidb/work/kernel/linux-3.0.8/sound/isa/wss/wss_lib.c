MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Routines for control of CS4231(A)/CS4232/InterWave & compatible chips");
MODULE_LICENSE("GPL");
static unsigned char freq_bits[14] = ;
static unsigned int rates[14] = ;
static struct snd_pcm_hw_constraint_list hw_constraints_rates = ;
static int snd_wss_xrate(struct snd_pcm_runtime *runtime)
static unsigned char snd_wss_original_image[32] =
;
static unsigned char snd_opti93x_original_image[32] =
;
static inline void wss_outb(struct snd_wss *chip, u8 offset, u8 val)
static inline u8 wss_inb(struct snd_wss *chip, u8 offset)
static void snd_wss_wait(struct snd_wss *chip)
static void snd_wss_dout(struct snd_wss *chip, unsigned char reg,
unsigned char value)
void snd_wss_out(struct snd_wss *chip, unsigned char reg, unsigned char value)
EXPORT_SYMBOL(snd_wss_out);
unsigned char snd_wss_in(struct snd_wss *chip, unsigned char reg)
EXPORT_SYMBOL(snd_wss_in);
void snd_cs4236_ext_out(struct snd_wss *chip, unsigned char reg,
unsigned char val)
EXPORT_SYMBOL(snd_cs4236_ext_out);
unsigned char snd_cs4236_ext_in(struct snd_wss *chip, unsigned char reg)
EXPORT_SYMBOL(snd_cs4236_ext_in);
static void snd_wss_busy_wait(struct snd_wss *chip)
void snd_wss_mce_up(struct snd_wss *chip)
EXPORT_SYMBOL(snd_wss_mce_up);
void snd_wss_mce_down(struct snd_wss *chip)
EXPORT_SYMBOL(snd_wss_mce_down);
static unsigned int snd_wss_get_count(unsigned char format, unsigned int size)
static int snd_wss_trigger(struct snd_pcm_substream *substream,
int cmd)
static unsigned char snd_wss_get_rate(unsigned int rate)
static unsigned char snd_wss_get_format(struct snd_wss *chip,
int format,
int channels)
static void snd_wss_calibrate_mute(struct snd_wss *chip, int mute)
static void snd_wss_playback_format(struct snd_wss *chip,
struct snd_pcm_hw_params *params,
unsigned char pdfr)
static void snd_wss_capture_format(struct snd_wss *chip,
struct snd_pcm_hw_params *params,
unsigned char cdfr)
static unsigned long snd_wss_timer_resolution(struct snd_timer *timer)
static int snd_wss_timer_start(struct snd_timer *timer)
static int snd_wss_timer_stop(struct snd_timer *timer)
static void snd_wss_init(struct snd_wss *chip)
static int snd_wss_open(struct snd_wss *chip, unsigned int mode)
static void snd_wss_close(struct snd_wss *chip, unsigned int mode)
static int snd_wss_timer_open(struct snd_timer *timer)
static int snd_wss_timer_close(struct snd_timer *timer)
static struct snd_timer_hardware snd_wss_timer_table =
;
static int snd_wss_playback_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_wss_playback_hw_free(struct snd_pcm_substream *substream)
static int snd_wss_playback_prepare(struct snd_pcm_substream *substream)
static int snd_wss_capture_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_wss_capture_hw_free(struct snd_pcm_substream *substream)
static int snd_wss_capture_prepare(struct snd_pcm_substream *substream)
void snd_wss_overrange(struct snd_wss *chip)
EXPORT_SYMBOL(snd_wss_overrange);
irqreturn_t snd_wss_interrupt(int irq, void *dev_id)
EXPORT_SYMBOL(snd_wss_interrupt);
static snd_pcm_uframes_t snd_wss_playback_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_wss_capture_pointer(struct snd_pcm_substream *substream)
static int snd_ad1848_probe(struct snd_wss *chip)
static int snd_wss_probe(struct snd_wss *chip)
static struct snd_pcm_hardware snd_wss_playback =
;
static struct snd_pcm_hardware snd_wss_capture =
;
static int snd_wss_playback_open(struct snd_pcm_substream *substream)
static int snd_wss_capture_open(struct snd_pcm_substream *substream)
static int snd_wss_playback_close(struct snd_pcm_substream *substream)
static int snd_wss_capture_close(struct snd_pcm_substream *substream)
static void snd_wss_thinkpad_twiddle(struct snd_wss *chip, int on)
static void snd_wss_suspend(struct snd_wss *chip)
static void snd_wss_resume(struct snd_wss *chip)
static int snd_wss_free(struct snd_wss *chip)
static int snd_wss_dev_free(struct snd_device *device)
const char *snd_wss_chip_id(struct snd_wss *chip)
EXPORT_SYMBOL(snd_wss_chip_id);
static int snd_wss_new(struct snd_card *card,
unsigned short hardware,
unsigned short hwshare,
struct snd_wss **rchip)
int snd_wss_create(struct snd_card *card,
unsigned long port,
unsigned long cport,
int irq, int dma1, int dma2,
unsigned short hardware,
unsigned short hwshare,
struct snd_wss **rchip)
EXPORT_SYMBOL(snd_wss_create);
static struct snd_pcm_ops snd_wss_playback_ops = ;
static struct snd_pcm_ops snd_wss_capture_ops = ;
int snd_wss_pcm(struct snd_wss *chip, int device, struct snd_pcm **rpcm)
EXPORT_SYMBOL(snd_wss_pcm);
static void snd_wss_timer_free(struct snd_timer *timer)
int snd_wss_timer(struct snd_wss *chip, int device, struct snd_timer **rtimer)
EXPORT_SYMBOL(snd_wss_timer);
static int snd_wss_info_mux(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_wss_get_mux(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_wss_put_mux(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
int snd_wss_info_single(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
EXPORT_SYMBOL(snd_wss_info_single);
int snd_wss_get_single(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL(snd_wss_get_single);
int snd_wss_put_single(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL(snd_wss_put_single);
int snd_wss_info_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
EXPORT_SYMBOL(snd_wss_info_double);
int snd_wss_get_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL(snd_wss_get_double);
int snd_wss_put_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL(snd_wss_put_double);
static const DECLARE_TLV_DB_SCALE(db_scale_6bit, -9450, 150, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_5bit_12db_max, -3450, 150, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_rec_gain, 0, 150, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_4bit, -4500, 300, 0);
static struct snd_kcontrol_new snd_wss_controls[] = ;
int snd_wss_mixer(struct snd_wss *chip)
EXPORT_SYMBOL(snd_wss_mixer);
const struct snd_pcm_ops *snd_wss_get_pcm_ops(int direction)
EXPORT_SYMBOL(snd_wss_get_pcm_ops);
static int __init alsa_wss_init(void)
static void __exit alsa_wss_exit(void)
module_init(alsa_wss_init);
module_exit(alsa_wss_exit);
