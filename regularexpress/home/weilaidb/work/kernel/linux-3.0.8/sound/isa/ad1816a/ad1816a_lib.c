static inline int snd_ad1816a_busy_wait(struct snd_ad1816a *chip)
static inline unsigned char snd_ad1816a_in(struct snd_ad1816a *chip, unsigned char reg)
static inline void snd_ad1816a_out(struct snd_ad1816a *chip, unsigned char reg,
unsigned char value)
static inline void snd_ad1816a_out_mask(struct snd_ad1816a *chip, unsigned char reg,
unsigned char mask, unsigned char value)
static unsigned short snd_ad1816a_read(struct snd_ad1816a *chip, unsigned char reg)
static void snd_ad1816a_write(struct snd_ad1816a *chip, unsigned char reg,
unsigned short value)
static void snd_ad1816a_write_mask(struct snd_ad1816a *chip, unsigned char reg,
unsigned short mask, unsigned short value)
static unsigned char snd_ad1816a_get_format(struct snd_ad1816a *chip,
unsigned int format, int channels)
static int snd_ad1816a_open(struct snd_ad1816a *chip, unsigned int mode)
static void snd_ad1816a_close(struct snd_ad1816a *chip, unsigned int mode)
static int snd_ad1816a_trigger(struct snd_ad1816a *chip, unsigned char what,
int channel, int cmd, int iscapture)
static int snd_ad1816a_playback_trigger(struct snd_pcm_substream *substream, int cmd)
static int snd_ad1816a_capture_trigger(struct snd_pcm_substream *substream, int cmd)
static int snd_ad1816a_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_ad1816a_hw_free(struct snd_pcm_substream *substream)
static int snd_ad1816a_playback_prepare(struct snd_pcm_substream *substream)
static int snd_ad1816a_capture_prepare(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_ad1816a_playback_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_ad1816a_capture_pointer(struct snd_pcm_substream *substream)
static irqreturn_t snd_ad1816a_interrupt(int irq, void *dev_id)
static struct snd_pcm_hardware snd_ad1816a_playback = ;
static struct snd_pcm_hardware snd_ad1816a_capture = ;
static int snd_ad1816a_timer_close(struct snd_timer *timer)
static int snd_ad1816a_timer_open(struct snd_timer *timer)
static unsigned long snd_ad1816a_timer_resolution(struct snd_timer *timer)
static int snd_ad1816a_timer_start(struct snd_timer *timer)
static int snd_ad1816a_timer_stop(struct snd_timer *timer)
static struct snd_timer_hardware snd_ad1816a_timer_table = ;
static int snd_ad1816a_playback_open(struct snd_pcm_substream *substream)
static int snd_ad1816a_capture_open(struct snd_pcm_substream *substream)
static int snd_ad1816a_playback_close(struct snd_pcm_substream *substream)
static int snd_ad1816a_capture_close(struct snd_pcm_substream *substream)
static void __devinit snd_ad1816a_init(struct snd_ad1816a *chip)
static int __devinit snd_ad1816a_probe(struct snd_ad1816a *chip)
static int snd_ad1816a_free(struct snd_ad1816a *chip)
static int snd_ad1816a_dev_free(struct snd_device *device)
static const char __devinit *snd_ad1816a_chip_id(struct snd_ad1816a *chip)
int __devinit snd_ad1816a_create(struct snd_card *card,
unsigned long port, int irq, int dma1, int dma2,
struct snd_ad1816a **rchip)
static struct snd_pcm_ops snd_ad1816a_playback_ops = ;
static struct snd_pcm_ops snd_ad1816a_capture_ops = ;
int __devinit snd_ad1816a_pcm(struct snd_ad1816a *chip, int device, struct snd_pcm **rpcm)
int __devinit snd_ad1816a_timer(struct snd_ad1816a *chip, int device, struct snd_timer **rtimer)
static int snd_ad1816a_info_mux(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ad1816a_get_mux(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ad1816a_put_mux(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define AD1816A_SINGLE_TLV(xname, reg, shift, mask, invert, xtlv)	\
#define AD1816A_SINGLE(xname, reg, shift, mask, invert) \
static int snd_ad1816a_info_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ad1816a_get_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ad1816a_put_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define AD1816A_DOUBLE_TLV(xname, reg, shift_left, shift_right, mask, invert, xtlv) \
#define AD1816A_DOUBLE(xname, reg, shift_left, shift_right, mask, invert) \
static int snd_ad1816a_info_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ad1816a_get_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ad1816a_put_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(db_scale_4bit, -4500, 300, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_5bit, -4650, 150, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_6bit, -9450, 150, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_5bit_12db_max, -3450, 150, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_rec_gain, 0, 150, 0);
static struct snd_kcontrol_new snd_ad1816a_controls[] __devinitdata = ;
int __devinit snd_ad1816a_mixer(struct snd_ad1816a *chip)
