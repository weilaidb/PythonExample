static void amp_voyetra(struct snd_cs46xx *chip, int change);
static struct snd_pcm_ops snd_cs46xx_playback_rear_ops;
static struct snd_pcm_ops snd_cs46xx_playback_indirect_rear_ops;
static struct snd_pcm_ops snd_cs46xx_playback_clfe_ops;
static struct snd_pcm_ops snd_cs46xx_playback_indirect_clfe_ops;
static struct snd_pcm_ops snd_cs46xx_playback_iec958_ops;
static struct snd_pcm_ops snd_cs46xx_playback_indirect_iec958_ops;
static struct snd_pcm_ops snd_cs46xx_playback_ops;
static struct snd_pcm_ops snd_cs46xx_playback_indirect_ops;
static struct snd_pcm_ops snd_cs46xx_capture_ops;
static struct snd_pcm_ops snd_cs46xx_capture_indirect_ops;
static unsigned short snd_cs46xx_codec_read(struct snd_cs46xx *chip,
unsigned short reg,
int codec_index)
static unsigned short snd_cs46xx_ac97_read(struct snd_ac97 * ac97,
unsigned short reg)
static void snd_cs46xx_codec_write(struct snd_cs46xx *chip,
unsigned short reg,
unsigned short val,
int codec_index)
static void snd_cs46xx_ac97_write(struct snd_ac97 *ac97,
unsigned short reg,
unsigned short val)
int snd_cs46xx_download(struct snd_cs46xx *chip,
u32 *src,
unsigned long offset,
unsigned long len)
int snd_cs46xx_clear_BA1(struct snd_cs46xx *chip,
unsigned long offset,
unsigned long len)
int snd_cs46xx_download_image(struct snd_cs46xx *chip)
static void snd_cs46xx_reset(struct snd_cs46xx *chip)
static int cs46xx_wait_for_fifo(struct snd_cs46xx * chip,int retry_timeout)
static void snd_cs46xx_clear_serial_FIFOs(struct snd_cs46xx *chip)
static void snd_cs46xx_proc_start(struct snd_cs46xx *chip)
static void snd_cs46xx_proc_stop(struct snd_cs46xx *chip)
#define GOF_PER_SEC 200
static void snd_cs46xx_set_play_sample_rate(struct snd_cs46xx *chip, unsigned int rate)
static void snd_cs46xx_set_capture_sample_rate(struct snd_cs46xx *chip, unsigned int rate)
static void snd_cs46xx_pb_trans_copy(struct snd_pcm_substream *substream,
struct snd_pcm_indirect *rec, size_t bytes)
static int snd_cs46xx_playback_transfer(struct snd_pcm_substream *substream)
static void snd_cs46xx_cp_trans_copy(struct snd_pcm_substream *substream,
struct snd_pcm_indirect *rec, size_t bytes)
static int snd_cs46xx_capture_transfer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_cs46xx_playback_direct_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_cs46xx_playback_indirect_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_cs46xx_capture_direct_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_cs46xx_capture_indirect_pointer(struct snd_pcm_substream *substream)
static int snd_cs46xx_playback_trigger(struct snd_pcm_substream *substream,
int cmd)
static int snd_cs46xx_capture_trigger(struct snd_pcm_substream *substream,
int cmd)
static int _cs46xx_adjust_sample_rate (struct snd_cs46xx *chip, struct snd_cs46xx_pcm *cpcm,
int sample_rate)
static int snd_cs46xx_playback_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_cs46xx_playback_hw_free(struct snd_pcm_substream *substream)
static int snd_cs46xx_playback_prepare(struct snd_pcm_substream *substream)
static int snd_cs46xx_capture_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_cs46xx_capture_hw_free(struct snd_pcm_substream *substream)
static int snd_cs46xx_capture_prepare(struct snd_pcm_substream *substream)
static irqreturn_t snd_cs46xx_interrupt(int irq, void *dev_id)
static struct snd_pcm_hardware snd_cs46xx_playback =
;
static struct snd_pcm_hardware snd_cs46xx_capture =
;
static unsigned int period_sizes[] = ;
static struct snd_pcm_hw_constraint_list hw_constraints_period_sizes = ;
static void snd_cs46xx_pcm_free_substream(struct snd_pcm_runtime *runtime)
static int _cs46xx_playback_open_channel (struct snd_pcm_substream *substream,int pcm_channel_id)
static int snd_cs46xx_playback_open(struct snd_pcm_substream *substream)
static int snd_cs46xx_playback_open_rear(struct snd_pcm_substream *substream)
static int snd_cs46xx_playback_open_clfe(struct snd_pcm_substream *substream)
static int snd_cs46xx_playback_open_iec958(struct snd_pcm_substream *substream)
static int snd_cs46xx_playback_close(struct snd_pcm_substream *substream);
static int snd_cs46xx_playback_close_iec958(struct snd_pcm_substream *substream)
static int snd_cs46xx_capture_open(struct snd_pcm_substream *substream)
static int snd_cs46xx_playback_close(struct snd_pcm_substream *substream)
static int snd_cs46xx_capture_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_cs46xx_playback_rear_ops = ;
static struct snd_pcm_ops snd_cs46xx_playback_indirect_rear_ops = ;
static struct snd_pcm_ops snd_cs46xx_playback_clfe_ops = ;
static struct snd_pcm_ops snd_cs46xx_playback_indirect_clfe_ops = ;
static struct snd_pcm_ops snd_cs46xx_playback_iec958_ops = ;
static struct snd_pcm_ops snd_cs46xx_playback_indirect_iec958_ops = ;
static struct snd_pcm_ops snd_cs46xx_playback_ops = ;
static struct snd_pcm_ops snd_cs46xx_playback_indirect_ops = ;
static struct snd_pcm_ops snd_cs46xx_capture_ops = ;
static struct snd_pcm_ops snd_cs46xx_capture_indirect_ops = ;
#define MAX_PLAYBACK_CHANNELS	(DSP_MAX_PCM_CHANNELS - 1)
#define MAX_PLAYBACK_CHANNELS	1
int __devinit snd_cs46xx_pcm(struct snd_cs46xx *chip, int device, struct snd_pcm ** rpcm)
int __devinit snd_cs46xx_pcm_rear(struct snd_cs46xx *chip, int device, struct snd_pcm ** rpcm)
int __devinit snd_cs46xx_pcm_center_lfe(struct snd_cs46xx *chip, int device, struct snd_pcm ** rpcm)
int __devinit snd_cs46xx_pcm_iec958(struct snd_cs46xx *chip, int device, struct snd_pcm ** rpcm)
static void snd_cs46xx_mixer_free_ac97_bus(struct snd_ac97_bus *bus)
static void snd_cs46xx_mixer_free_ac97(struct snd_ac97 *ac97)
static int snd_cs46xx_vol_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_cs46xx_vol_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_cs46xx_vol_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_cs46xx_vol_dac_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_cs46xx_vol_dac_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define snd_mixer_boolean_info		snd_ctl_boolean_mono_info
static int snd_cs46xx_iec958_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cs46xx_iec958_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cs46xx_adc_capture_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cs46xx_adc_capture_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cs46xx_pcm_capture_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cs46xx_pcm_capture_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_herc_spdif_select_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_herc_spdif_select_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cs46xx_spdif_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_cs46xx_spdif_default_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cs46xx_spdif_default_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cs46xx_spdif_mask_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cs46xx_spdif_stream_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cs46xx_spdif_stream_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_cs46xx_controls[] __devinitdata = ;
static int snd_cs46xx_front_dup_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cs46xx_front_dup_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_cs46xx_front_dup_ctl = ;
static struct snd_kcontrol_new snd_hercules_controls[] = ;
static void snd_cs46xx_codec_reset (struct snd_ac97 * ac97)
static int __devinit cs46xx_detect_codec(struct snd_cs46xx *chip, int codec)
int __devinit snd_cs46xx_mixer(struct snd_cs46xx *chip, int spdif_device)
static void snd_cs46xx_midi_reset(struct snd_cs46xx *chip)
static int snd_cs46xx_midi_input_open(struct snd_rawmidi_substream *substream)
static int snd_cs46xx_midi_input_close(struct snd_rawmidi_substream *substream)
static int snd_cs46xx_midi_output_open(struct snd_rawmidi_substream *substream)
static int snd_cs46xx_midi_output_close(struct snd_rawmidi_substream *substream)
static void snd_cs46xx_midi_input_trigger(struct snd_rawmidi_substream *substream, int up)
static void snd_cs46xx_midi_output_trigger(struct snd_rawmidi_substream *substream, int up)
static struct snd_rawmidi_ops snd_cs46xx_midi_output =
;
static struct snd_rawmidi_ops snd_cs46xx_midi_input =
;
int __devinit snd_cs46xx_midi(struct snd_cs46xx *chip, int device, struct snd_rawmidi **rrawmidi)
#if defined(CONFIG_GAMEPORT) || (defined(MODULE) && defined(CONFIG_GAMEPORT_MODULE))
static void snd_cs46xx_gameport_trigger(struct gameport *gameport)
static unsigned char snd_cs46xx_gameport_read(struct gameport *gameport)
static int snd_cs46xx_gameport_cooked_read(struct gameport *gameport, int *axes, int *buttons)
static int snd_cs46xx_gameport_open(struct gameport *gameport, int mode)
int __devinit snd_cs46xx_gameport(struct snd_cs46xx *chip)
static inline void snd_cs46xx_remove_gameport(struct snd_cs46xx *chip)
int __devinit snd_cs46xx_gameport(struct snd_cs46xx *chip)
static inline void snd_cs46xx_remove_gameport(struct snd_cs46xx *chip)
static ssize_t snd_cs46xx_io_read(struct snd_info_entry *entry,
void *file_private_data,
struct file *file, char __user *buf,
size_t count, loff_t pos)
static struct snd_info_entry_ops snd_cs46xx_proc_io_ops = ;
static int __devinit snd_cs46xx_proc_init(struct snd_card *card, struct snd_cs46xx *chip)
static int snd_cs46xx_proc_done(struct snd_cs46xx *chip)
#define snd_cs46xx_proc_init(card, chip)
#define snd_cs46xx_proc_done(chip)
static void snd_cs46xx_hw_stop(struct snd_cs46xx *chip)
static int snd_cs46xx_free(struct snd_cs46xx *chip)
static int snd_cs46xx_dev_free(struct snd_device *device)
static int snd_cs46xx_chip_init(struct snd_cs46xx *chip)
static void cs46xx_enable_stream_irqs(struct snd_cs46xx *chip)
int __devinit snd_cs46xx_start_dsp(struct snd_cs46xx *chip)
static void amp_none(struct snd_cs46xx *chip, int change)
static int voyetra_setup_eapd_slot(struct snd_cs46xx *chip)
static void amp_voyetra(struct snd_cs46xx *chip, int change)
static void hercules_init(struct snd_cs46xx *chip)
static void amp_hercules(struct snd_cs46xx *chip, int change)
static void voyetra_mixer_init (struct snd_cs46xx *chip)
static void hercules_mixer_init (struct snd_cs46xx *chip)
static void clkrun_hack(struct snd_cs46xx *chip, int change)
static void clkrun_init(struct snd_cs46xx *chip)
struct cs_card_type
;
static struct cs_card_type __devinitdata cards[] = ;
static unsigned int saved_regs[] = ;
int snd_cs46xx_suspend(struct pci_dev *pci, pm_message_t state)
int snd_cs46xx_resume(struct pci_dev *pci)
int __devinit snd_cs46xx_create(struct snd_card *card,
struct pci_dev * pci,
int external_amp, int thinkpad,
struct snd_cs46xx ** rchip)
