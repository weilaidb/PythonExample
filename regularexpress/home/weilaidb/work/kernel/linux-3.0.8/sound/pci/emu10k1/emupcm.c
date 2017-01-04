static void snd_emu10k1_pcm_interrupt(struct snd_emu10k1 *emu,
struct snd_emu10k1_voice *voice)
static void snd_emu10k1_pcm_ac97adc_interrupt(struct snd_emu10k1 *emu,
unsigned int status)
static void snd_emu10k1_pcm_ac97mic_interrupt(struct snd_emu10k1 *emu,
unsigned int status)
static void snd_emu10k1_pcm_efx_interrupt(struct snd_emu10k1 *emu,
unsigned int status)
static snd_pcm_uframes_t snd_emu10k1_efx_playback_pointer(struct snd_pcm_substream *substream)
static int snd_emu10k1_pcm_channel_alloc(struct snd_emu10k1_pcm * epcm, int voices)
static unsigned int capture_period_sizes[31] = ;
static struct snd_pcm_hw_constraint_list hw_constraints_capture_period_sizes = ;
static unsigned int capture_rates[8] = ;
static struct snd_pcm_hw_constraint_list hw_constraints_capture_rates = ;
static unsigned int snd_emu10k1_capture_rate_reg(unsigned int rate)
static unsigned int snd_emu10k1_audigy_capture_rate_reg(unsigned int rate)
static unsigned int emu10k1_calc_pitch_target(unsigned int rate)
#define PITCH_48000 0x00004000
#define PITCH_96000 0x00008000
#define PITCH_85000 0x00007155
#define PITCH_80726 0x00006ba2
#define PITCH_67882 0x00005a82
#define PITCH_57081 0x00004c1c
static unsigned int emu10k1_select_interprom(unsigned int pitch_target)
static inline int emu10k1_ccis(int stereo, int w_16)
static void snd_emu10k1_pcm_init_voice(struct snd_emu10k1 *emu,
int master, int extra,
struct snd_emu10k1_voice *evoice,
unsigned int start_addr,
unsigned int end_addr,
struct snd_emu10k1_pcm_mixer *mix)
static int snd_emu10k1_playback_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_emu10k1_playback_hw_free(struct snd_pcm_substream *substream)
static int snd_emu10k1_efx_playback_hw_free(struct snd_pcm_substream *substream)
static int snd_emu10k1_playback_prepare(struct snd_pcm_substream *substream)
static int snd_emu10k1_efx_playback_prepare(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_emu10k1_efx_playback =
;
static int snd_emu10k1_capture_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_emu10k1_capture_hw_free(struct snd_pcm_substream *substream)
static int snd_emu10k1_capture_prepare(struct snd_pcm_substream *substream)
static void snd_emu10k1_playback_invalidate_cache(struct snd_emu10k1 *emu, int extra, struct snd_emu10k1_voice *evoice)
static void snd_emu10k1_playback_prepare_voice(struct snd_emu10k1 *emu, struct snd_emu10k1_voice *evoice,
int master, int extra,
struct snd_emu10k1_pcm_mixer *mix)
static void snd_emu10k1_playback_trigger_voice(struct snd_emu10k1 *emu, struct snd_emu10k1_voice *evoice, int master, int extra)
static void snd_emu10k1_playback_stop_voice(struct snd_emu10k1 *emu, struct snd_emu10k1_voice *evoice)
static inline void snd_emu10k1_playback_mangle_extra(struct snd_emu10k1 *emu,
struct snd_emu10k1_pcm *epcm,
struct snd_pcm_substream *substream,
struct snd_pcm_runtime *runtime)
static int snd_emu10k1_playback_trigger(struct snd_pcm_substream *substream,
int cmd)
static int snd_emu10k1_capture_trigger(struct snd_pcm_substream *substream,
int cmd)
static snd_pcm_uframes_t snd_emu10k1_playback_pointer(struct snd_pcm_substream *substream)
static int snd_emu10k1_efx_playback_trigger(struct snd_pcm_substream *substream,
int cmd)
static snd_pcm_uframes_t snd_emu10k1_capture_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_emu10k1_playback =
;
static struct snd_pcm_hardware snd_emu10k1_capture =
;
static struct snd_pcm_hardware snd_emu10k1_capture_efx =
;
static void snd_emu10k1_pcm_mixer_notify1(struct snd_emu10k1 *emu, struct snd_kcontrol *kctl, int idx, int activate)
static void snd_emu10k1_pcm_mixer_notify(struct snd_emu10k1 *emu, int idx, int activate)
static void snd_emu10k1_pcm_efx_mixer_notify(struct snd_emu10k1 *emu, int idx, int activate)
static void snd_emu10k1_pcm_free_substream(struct snd_pcm_runtime *runtime)
static int snd_emu10k1_efx_playback_close(struct snd_pcm_substream *substream)
static int snd_emu10k1_efx_playback_open(struct snd_pcm_substream *substream)
static int snd_emu10k1_playback_open(struct snd_pcm_substream *substream)
static int snd_emu10k1_playback_close(struct snd_pcm_substream *substream)
static int snd_emu10k1_capture_open(struct snd_pcm_substream *substream)
static int snd_emu10k1_capture_close(struct snd_pcm_substream *substream)
static int snd_emu10k1_capture_mic_open(struct snd_pcm_substream *substream)
static int snd_emu10k1_capture_mic_close(struct snd_pcm_substream *substream)
static int snd_emu10k1_capture_efx_open(struct snd_pcm_substream *substream)
static int snd_emu10k1_capture_efx_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_emu10k1_playback_ops = ;
static struct snd_pcm_ops snd_emu10k1_capture_ops = ;
static struct snd_pcm_ops snd_emu10k1_efx_playback_ops = ;
int __devinit snd_emu10k1_pcm(struct snd_emu10k1 * emu, int device, struct snd_pcm ** rpcm)
int __devinit snd_emu10k1_pcm_multi(struct snd_emu10k1 * emu, int device, struct snd_pcm ** rpcm)
static struct snd_pcm_ops snd_emu10k1_capture_mic_ops = ;
int __devinit snd_emu10k1_pcm_mic(struct snd_emu10k1 * emu, int device, struct snd_pcm ** rpcm)
static int snd_emu10k1_pcm_efx_voices_mask_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_emu10k1_pcm_efx_voices_mask_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_emu10k1_pcm_efx_voices_mask_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_emu10k1_pcm_efx_voices_mask = ;
static struct snd_pcm_ops snd_emu10k1_capture_efx_ops = ;
#define INITIAL_TRAM_SHIFT     14
#define INITIAL_TRAM_POS(size) ((((size) / 2) - INITIAL_TRAM_SHIFT) - 1)
static void snd_emu10k1_fx8010_playback_irq(struct snd_emu10k1 *emu, void *private_data)
static void snd_emu10k1_fx8010_playback_tram_poke1(unsigned short *dst_left,
unsigned short *dst_right,
unsigned short *src,
unsigned int count,
unsigned int tram_shift)
static void fx8010_pb_trans_copy(struct snd_pcm_substream *substream,
struct snd_pcm_indirect *rec, size_t bytes)
static int snd_emu10k1_fx8010_playback_transfer(struct snd_pcm_substream *substream)
static int snd_emu10k1_fx8010_playback_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_emu10k1_fx8010_playback_hw_free(struct snd_pcm_substream *substream)
static int snd_emu10k1_fx8010_playback_prepare(struct snd_pcm_substream *substream)
static int snd_emu10k1_fx8010_playback_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t snd_emu10k1_fx8010_playback_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_emu10k1_fx8010_playback =
;
static int snd_emu10k1_fx8010_playback_open(struct snd_pcm_substream *substream)
static int snd_emu10k1_fx8010_playback_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_emu10k1_fx8010_playback_ops = ;
int __devinit snd_emu10k1_pcm_efx(struct snd_emu10k1 * emu, int device, struct snd_pcm ** rpcm)
