static void snd_ymfpci_irq_wait(struct snd_ymfpci *chip);
static inline u8 snd_ymfpci_readb(struct snd_ymfpci *chip, u32 offset)
static inline void snd_ymfpci_writeb(struct snd_ymfpci *chip, u32 offset, u8 val)
static inline u16 snd_ymfpci_readw(struct snd_ymfpci *chip, u32 offset)
static inline void snd_ymfpci_writew(struct snd_ymfpci *chip, u32 offset, u16 val)
static inline u32 snd_ymfpci_readl(struct snd_ymfpci *chip, u32 offset)
static inline void snd_ymfpci_writel(struct snd_ymfpci *chip, u32 offset, u32 val)
static int snd_ymfpci_codec_ready(struct snd_ymfpci *chip, int secondary)
static void snd_ymfpci_codec_write(struct snd_ac97 *ac97, u16 reg, u16 val)
static u16 snd_ymfpci_codec_read(struct snd_ac97 *ac97, u16 reg)
static u32 snd_ymfpci_calc_delta(u32 rate)
static u32 def_rate[8] = ;
static u32 snd_ymfpci_calc_lpfK(u32 rate)
static u32 snd_ymfpci_calc_lpfQ(u32 rate)
static void snd_ymfpci_hw_start(struct snd_ymfpci *chip)
static void snd_ymfpci_hw_stop(struct snd_ymfpci *chip)
static int voice_alloc(struct snd_ymfpci *chip,
enum snd_ymfpci_voice_type type, int pair,
struct snd_ymfpci_voice **rvoice)
static int snd_ymfpci_voice_alloc(struct snd_ymfpci *chip,
enum snd_ymfpci_voice_type type, int pair,
struct snd_ymfpci_voice **rvoice)
static int snd_ymfpci_voice_free(struct snd_ymfpci *chip, struct snd_ymfpci_voice *pvoice)
static void snd_ymfpci_pcm_interrupt(struct snd_ymfpci *chip, struct snd_ymfpci_voice *voice)
static void snd_ymfpci_pcm_capture_interrupt(struct snd_pcm_substream *substream)
static int snd_ymfpci_playback_trigger(struct snd_pcm_substream *substream,
int cmd)
static int snd_ymfpci_capture_trigger(struct snd_pcm_substream *substream,
int cmd)
static int snd_ymfpci_pcm_voice_alloc(struct snd_ymfpci_pcm *ypcm, int voices)
static void snd_ymfpci_pcm_init_voice(struct snd_ymfpci_pcm *ypcm, unsigned int voiceidx,
struct snd_pcm_runtime *runtime,
int has_pcm_volume)
static int __devinit snd_ymfpci_ac3_init(struct snd_ymfpci *chip)
static int snd_ymfpci_ac3_done(struct snd_ymfpci *chip)
static int snd_ymfpci_playback_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_ymfpci_playback_hw_free(struct snd_pcm_substream *substream)
static int snd_ymfpci_playback_prepare(struct snd_pcm_substream *substream)
static int snd_ymfpci_capture_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_ymfpci_capture_hw_free(struct snd_pcm_substream *substream)
static int snd_ymfpci_capture_prepare(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_ymfpci_playback_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_ymfpci_capture_pointer(struct snd_pcm_substream *substream)
static void snd_ymfpci_irq_wait(struct snd_ymfpci *chip)
static irqreturn_t snd_ymfpci_interrupt(int irq, void *dev_id)
static struct snd_pcm_hardware snd_ymfpci_playback =
;
static struct snd_pcm_hardware snd_ymfpci_capture =
;
static void snd_ymfpci_pcm_free_substream(struct snd_pcm_runtime *runtime)
static int snd_ymfpci_playback_open_1(struct snd_pcm_substream *substream)
static void ymfpci_open_extension(struct snd_ymfpci *chip)
static void ymfpci_close_extension(struct snd_ymfpci *chip)
static int snd_ymfpci_playback_open(struct snd_pcm_substream *substream)
static int snd_ymfpci_playback_spdif_open(struct snd_pcm_substream *substream)
static int snd_ymfpci_playback_4ch_open(struct snd_pcm_substream *substream)
static int snd_ymfpci_capture_open(struct snd_pcm_substream *substream,
u32 capture_bank_number)
static int snd_ymfpci_capture_rec_open(struct snd_pcm_substream *substream)
static int snd_ymfpci_capture_ac97_open(struct snd_pcm_substream *substream)
static int snd_ymfpci_playback_close_1(struct snd_pcm_substream *substream)
static int snd_ymfpci_playback_close(struct snd_pcm_substream *substream)
static int snd_ymfpci_playback_spdif_close(struct snd_pcm_substream *substream)
static int snd_ymfpci_playback_4ch_close(struct snd_pcm_substream *substream)
static int snd_ymfpci_capture_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_ymfpci_playback_ops = ;
static struct snd_pcm_ops snd_ymfpci_capture_rec_ops = ;
int __devinit snd_ymfpci_pcm(struct snd_ymfpci *chip, int device, struct snd_pcm ** rpcm)
static struct snd_pcm_ops snd_ymfpci_capture_ac97_ops = ;
int __devinit snd_ymfpci_pcm2(struct snd_ymfpci *chip, int device, struct snd_pcm ** rpcm)
static struct snd_pcm_ops snd_ymfpci_playback_spdif_ops = ;
int __devinit snd_ymfpci_pcm_spdif(struct snd_ymfpci *chip, int device, struct snd_pcm ** rpcm)
static struct snd_pcm_ops snd_ymfpci_playback_4ch_ops = ;
int __devinit snd_ymfpci_pcm_4ch(struct snd_ymfpci *chip, int device, struct snd_pcm ** rpcm)
static int snd_ymfpci_spdif_default_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ymfpci_spdif_default_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ymfpci_spdif_default_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ymfpci_spdif_default __devinitdata =
;
static int snd_ymfpci_spdif_mask_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ymfpci_spdif_mask_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ymfpci_spdif_mask __devinitdata =
;
static int snd_ymfpci_spdif_stream_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ymfpci_spdif_stream_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ymfpci_spdif_stream_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ymfpci_spdif_stream __devinitdata =
;
static int snd_ymfpci_drec_source_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *info)
static int snd_ymfpci_drec_source_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *value)
static int snd_ymfpci_drec_source_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *value)
static struct snd_kcontrol_new snd_ymfpci_drec_source __devinitdata = ;
#define YMFPCI_SINGLE(xname, xindex, reg, shift) \
#define snd_ymfpci_info_single		snd_ctl_boolean_mono_info
static int snd_ymfpci_get_single(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ymfpci_put_single(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_LINEAR(db_scale_native, TLV_DB_GAIN_MUTE, 0);
#define YMFPCI_DOUBLE(xname, xindex, reg) \
static int snd_ymfpci_info_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ymfpci_get_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ymfpci_put_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ymfpci_put_nativedacvol(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define snd_ymfpci_info_dup4ch		snd_ctl_boolean_mono_info
static int snd_ymfpci_get_dup4ch(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ymfpci_put_dup4ch(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ymfpci_controls[] __devinitdata = ;
static int snd_ymfpci_get_gpio_out(struct snd_ymfpci *chip, int pin)
static int snd_ymfpci_set_gpio_out(struct snd_ymfpci *chip, int pin, int enable)
#define snd_ymfpci_gpio_sw_info		snd_ctl_boolean_mono_info
static int snd_ymfpci_gpio_sw_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ymfpci_gpio_sw_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ymfpci_rear_shared __devinitdata = ;
static int snd_ymfpci_pcm_vol_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ymfpci_pcm_vol_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ymfpci_pcm_vol_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ymfpci_pcm_volume __devinitdata = ;
static void snd_ymfpci_mixer_free_ac97_bus(struct snd_ac97_bus *bus)
static void snd_ymfpci_mixer_free_ac97(struct snd_ac97 *ac97)
int __devinit snd_ymfpci_mixer(struct snd_ymfpci *chip, int rear_switch)
static int snd_ymfpci_timer_start(struct snd_timer *timer)
static int snd_ymfpci_timer_stop(struct snd_timer *timer)
static int snd_ymfpci_timer_precise_resolution(struct snd_timer *timer,
unsigned long *num, unsigned long *den)
static struct snd_timer_hardware snd_ymfpci_timer_hw = ;
int __devinit snd_ymfpci_timer(struct snd_ymfpci *chip, int device)
static void snd_ymfpci_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static int __devinit snd_ymfpci_proc_init(struct snd_card *card, struct snd_ymfpci *chip)
static void snd_ymfpci_aclink_reset(struct pci_dev * pci)
static void snd_ymfpci_enable_dsp(struct snd_ymfpci *chip)
static void snd_ymfpci_disable_dsp(struct snd_ymfpci *chip)
static int snd_ymfpci_request_firmware(struct snd_ymfpci *chip)
MODULE_FIRMWARE("yamaha/ds1_dsp.fw");
MODULE_FIRMWARE("yamaha/ds1_ctrl.fw");
MODULE_FIRMWARE("yamaha/ds1e_ctrl.fw");
static void snd_ymfpci_download_image(struct snd_ymfpci *chip)
static int __devinit snd_ymfpci_memalloc(struct snd_ymfpci *chip)
static int snd_ymfpci_free(struct snd_ymfpci *chip)
static int snd_ymfpci_dev_free(struct snd_device *device)
static int saved_regs_index[] = ;
#define YDSXGR_NUM_SAVED_REGS	ARRAY_SIZE(saved_regs_index)
int snd_ymfpci_suspend(struct pci_dev *pci, pm_message_t state)
int snd_ymfpci_resume(struct pci_dev *pci)
int __devinit snd_ymfpci_create(struct snd_card *card,
struct pci_dev * pci,
unsigned short old_legacy_ctrl,
struct snd_ymfpci ** rchip)
