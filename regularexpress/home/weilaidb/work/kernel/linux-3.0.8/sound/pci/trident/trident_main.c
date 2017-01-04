static int snd_trident_pcm_mixer_build(struct snd_trident *trident,
struct snd_trident_voice * voice,
struct snd_pcm_substream *substream);
static int snd_trident_pcm_mixer_free(struct snd_trident *trident,
struct snd_trident_voice * voice,
struct snd_pcm_substream *substream);
static irqreturn_t snd_trident_interrupt(int irq, void *dev_id);
static int snd_trident_sis_reset(struct snd_trident *trident);
static void snd_trident_clear_voices(struct snd_trident * trident,
unsigned short v_min, unsigned short v_max);
static int snd_trident_free(struct snd_trident *trident);
static unsigned short snd_trident_codec_read(struct snd_ac97 *ac97, unsigned short reg)
static void snd_trident_codec_write(struct snd_ac97 *ac97, unsigned short reg,
unsigned short wdata)
static void snd_trident_enable_eso(struct snd_trident * trident)
static void snd_trident_disable_eso(struct snd_trident * trident)
void snd_trident_start_voice(struct snd_trident * trident, unsigned int voice)
EXPORT_SYMBOL(snd_trident_start_voice);
void snd_trident_stop_voice(struct snd_trident * trident, unsigned int voice)
EXPORT_SYMBOL(snd_trident_stop_voice);
static int snd_trident_allocate_pcm_channel(struct snd_trident * trident)
static void snd_trident_free_pcm_channel(struct snd_trident *trident, int channel)
static int snd_trident_allocate_synth_channel(struct snd_trident * trident)
static void snd_trident_free_synth_channel(struct snd_trident *trident, int channel)
void snd_trident_write_voice_regs(struct snd_trident * trident,
struct snd_trident_voice * voice)
EXPORT_SYMBOL(snd_trident_write_voice_regs);
static void snd_trident_write_cso_reg(struct snd_trident * trident,
struct snd_trident_voice * voice,
unsigned int CSO)
static void snd_trident_write_eso_reg(struct snd_trident * trident,
struct snd_trident_voice * voice,
unsigned int ESO)
static void snd_trident_write_vol_reg(struct snd_trident * trident,
struct snd_trident_voice * voice,
unsigned int Vol)
static void snd_trident_write_pan_reg(struct snd_trident * trident,
struct snd_trident_voice * voice,
unsigned int Pan)
static void snd_trident_write_rvol_reg(struct snd_trident * trident,
struct snd_trident_voice * voice,
unsigned int RVol)
static void snd_trident_write_cvol_reg(struct snd_trident * trident,
struct snd_trident_voice * voice,
unsigned int CVol)
static unsigned int snd_trident_convert_rate(unsigned int rate)
static unsigned int snd_trident_convert_adc_rate(unsigned int rate)
static unsigned int snd_trident_spurious_threshold(unsigned int rate,
unsigned int period_size)
static unsigned int snd_trident_control_mode(struct snd_pcm_substream *substream)
static int snd_trident_ioctl(struct snd_pcm_substream *substream,
unsigned int cmd,
void *arg)
static int snd_trident_allocate_pcm_mem(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_trident_allocate_evoice(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_trident_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_trident_hw_free(struct snd_pcm_substream *substream)
static int snd_trident_playback_prepare(struct snd_pcm_substream *substream)
static int snd_trident_capture_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_trident_capture_prepare(struct snd_pcm_substream *substream)
static int snd_trident_si7018_capture_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_trident_si7018_capture_hw_free(struct snd_pcm_substream *substream)
static int snd_trident_si7018_capture_prepare(struct snd_pcm_substream *substream)
static int snd_trident_foldback_prepare(struct snd_pcm_substream *substream)
static int snd_trident_spdif_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_trident_spdif_prepare(struct snd_pcm_substream *substream)
static int snd_trident_trigger(struct snd_pcm_substream *substream,
int cmd)
static snd_pcm_uframes_t snd_trident_playback_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_trident_capture_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_trident_spdif_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_trident_playback =
;
static struct snd_pcm_hardware snd_trident_capture =
;
static struct snd_pcm_hardware snd_trident_foldback =
;
static struct snd_pcm_hardware snd_trident_spdif =
;
static struct snd_pcm_hardware snd_trident_spdif_7018 =
;
static void snd_trident_pcm_free_substream(struct snd_pcm_runtime *runtime)
static int snd_trident_playback_open(struct snd_pcm_substream *substream)
static int snd_trident_playback_close(struct snd_pcm_substream *substream)
static int snd_trident_spdif_open(struct snd_pcm_substream *substream)
static int snd_trident_spdif_close(struct snd_pcm_substream *substream)
static int snd_trident_capture_open(struct snd_pcm_substream *substream)
static int snd_trident_capture_close(struct snd_pcm_substream *substream)
static int snd_trident_foldback_open(struct snd_pcm_substream *substream)
static int snd_trident_foldback_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_trident_playback_ops = ;
static struct snd_pcm_ops snd_trident_nx_playback_ops = ;
static struct snd_pcm_ops snd_trident_capture_ops = ;
static struct snd_pcm_ops snd_trident_si7018_capture_ops = ;
static struct snd_pcm_ops snd_trident_foldback_ops = ;
static struct snd_pcm_ops snd_trident_nx_foldback_ops = ;
static struct snd_pcm_ops snd_trident_spdif_ops = ;
static struct snd_pcm_ops snd_trident_spdif_7018_ops = ;
int __devinit snd_trident_pcm(struct snd_trident * trident,
int device, struct snd_pcm ** rpcm)
int __devinit snd_trident_foldback_pcm(struct snd_trident * trident,
int device, struct snd_pcm ** rpcm)
int __devinit snd_trident_spdif_pcm(struct snd_trident * trident,
int device, struct snd_pcm ** rpcm)
#define snd_trident_spdif_control_info	snd_ctl_boolean_mono_info
static int snd_trident_spdif_control_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_trident_spdif_control_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_trident_spdif_control __devinitdata =
;
static int snd_trident_spdif_default_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_trident_spdif_default_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_trident_spdif_default_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_trident_spdif_default __devinitdata =
;
static int snd_trident_spdif_mask_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_trident_spdif_mask_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_trident_spdif_mask __devinitdata =
;
static int snd_trident_spdif_stream_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_trident_spdif_stream_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_trident_spdif_stream_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_trident_spdif_stream __devinitdata =
;
#define snd_trident_ac97_control_info	snd_ctl_boolean_mono_info
static int snd_trident_ac97_control_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_trident_ac97_control_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_trident_ac97_rear_control __devinitdata =
;
static int snd_trident_vol_control_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_trident_vol_control_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(db_scale_gvol, -6375, 25, 0);
static int snd_trident_vol_control_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_trident_vol_music_control __devinitdata =
;
static struct snd_kcontrol_new snd_trident_vol_wave_control __devinitdata =
;
static int snd_trident_pcm_vol_control_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_trident_pcm_vol_control_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_trident_pcm_vol_control_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_trident_pcm_vol_control __devinitdata =
;
static int snd_trident_pcm_pan_control_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_trident_pcm_pan_control_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_trident_pcm_pan_control_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_trident_pcm_pan_control __devinitdata =
;
static int snd_trident_pcm_rvol_control_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_trident_pcm_rvol_control_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_trident_pcm_rvol_control_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(db_scale_crvol, -3175, 25, 1);
static struct snd_kcontrol_new snd_trident_pcm_rvol_control __devinitdata =
;
static int snd_trident_pcm_cvol_control_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_trident_pcm_cvol_control_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_trident_pcm_cvol_control_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_trident_pcm_cvol_control __devinitdata =
;
static void snd_trident_notify_pcm_change1(struct snd_card *card,
struct snd_kcontrol *kctl,
int num, int activate)
static void snd_trident_notify_pcm_change(struct snd_trident *trident,
struct snd_trident_pcm_mixer *tmix,
int num, int activate)
static int snd_trident_pcm_mixer_build(struct snd_trident *trident,
struct snd_trident_voice *voice,
struct snd_pcm_substream *substream)
static int snd_trident_pcm_mixer_free(struct snd_trident *trident, struct snd_trident_voice *voice, struct snd_pcm_substream *substream)
static int __devinit snd_trident_mixer(struct snd_trident * trident, int pcm_spdif_device)
#if defined(CONFIG_GAMEPORT) || (defined(MODULE) && defined(CONFIG_GAMEPORT_MODULE))
static unsigned char snd_trident_gameport_read(struct gameport *gameport)
static void snd_trident_gameport_trigger(struct gameport *gameport)
static int snd_trident_gameport_cooked_read(struct gameport *gameport, int *axes, int *buttons)
static int snd_trident_gameport_open(struct gameport *gameport, int mode)
int __devinit snd_trident_create_gameport(struct snd_trident *chip)
static inline void snd_trident_free_gameport(struct snd_trident *chip)
int __devinit snd_trident_create_gameport(struct snd_trident *chip)
static inline void snd_trident_free_gameport(struct snd_trident *chip)
static inline void do_delay(struct snd_trident *chip)
static int snd_trident_sis_reset(struct snd_trident *trident)
static void snd_trident_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void __devinit snd_trident_proc_init(struct snd_trident * trident)
static int snd_trident_dev_free(struct snd_device *device)
static int __devinit snd_trident_tlb_alloc(struct snd_trident *trident)
static void snd_trident_stop_all_voices(struct snd_trident *trident)
static int snd_trident_4d_dx_init(struct snd_trident *trident)
static int snd_trident_4d_nx_init(struct snd_trident *trident)
static int snd_trident_sis_init(struct snd_trident *trident)
int __devinit snd_trident_create(struct snd_card *card,
struct pci_dev *pci,
int pcm_streams,
int pcm_spdif_device,
int max_wavetable_size,
struct snd_trident ** rtrident)
static int snd_trident_free(struct snd_trident *trident)
static irqreturn_t snd_trident_interrupt(int irq, void *dev_id)
struct snd_trident_voice *snd_trident_alloc_voice(struct snd_trident * trident, int type, int client, int port)
EXPORT_SYMBOL(snd_trident_alloc_voice);
void snd_trident_free_voice(struct snd_trident * trident, struct snd_trident_voice *voice)
EXPORT_SYMBOL(snd_trident_free_voice);
static void snd_trident_clear_voices(struct snd_trident * trident, unsigned short v_min, unsigned short v_max)
int snd_trident_suspend(struct pci_dev *pci, pm_message_t state)
int snd_trident_resume(struct pci_dev *pci)
