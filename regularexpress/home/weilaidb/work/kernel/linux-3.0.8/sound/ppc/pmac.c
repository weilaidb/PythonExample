static int awacs_freqs[8] = ;
static int tumbler_freqs[1] = ;
static struct pmac_dbdma emergency_dbdma;
static int emergency_in_use;
static int snd_pmac_dbdma_alloc(struct snd_pmac *chip, struct pmac_dbdma *rec, int size)
static void snd_pmac_dbdma_free(struct snd_pmac *chip, struct pmac_dbdma *rec)
unsigned int snd_pmac_rate_index(struct snd_pmac *chip, struct pmac_stream *rec, unsigned int rate)
static inline int another_stream(int stream)
static int snd_pmac_pcm_hw_params(struct snd_pcm_substream *subs,
struct snd_pcm_hw_params *hw_params)
static int snd_pmac_pcm_hw_free(struct snd_pcm_substream *subs)
static struct pmac_stream *snd_pmac_get_stream(struct snd_pmac *chip, int stream)
static inline void
snd_pmac_wait_ack(struct pmac_stream *rec)
static void snd_pmac_pcm_set_format(struct snd_pmac *chip)
static inline void snd_pmac_dma_stop(struct pmac_stream *rec)
static inline void snd_pmac_dma_set_command(struct pmac_stream *rec, struct pmac_dbdma *cmd)
static inline void snd_pmac_dma_run(struct pmac_stream *rec, int status)
static int snd_pmac_pcm_prepare(struct snd_pmac *chip, struct pmac_stream *rec, struct snd_pcm_substream *subs)
static int snd_pmac_pcm_trigger(struct snd_pmac *chip, struct pmac_stream *rec,
struct snd_pcm_substream *subs, int cmd)
inline
static snd_pcm_uframes_t snd_pmac_pcm_pointer(struct snd_pmac *chip,
struct pmac_stream *rec,
struct snd_pcm_substream *subs)
static int snd_pmac_playback_prepare(struct snd_pcm_substream *subs)
static int snd_pmac_playback_trigger(struct snd_pcm_substream *subs,
int cmd)
static snd_pcm_uframes_t snd_pmac_playback_pointer(struct snd_pcm_substream *subs)
static int snd_pmac_capture_prepare(struct snd_pcm_substream *subs)
static int snd_pmac_capture_trigger(struct snd_pcm_substream *subs,
int cmd)
static snd_pcm_uframes_t snd_pmac_capture_pointer(struct snd_pcm_substream *subs)
static inline void snd_pmac_pcm_dead_xfer(struct pmac_stream *rec,
volatile struct dbdma_cmd __iomem *cp)
static void snd_pmac_pcm_update(struct snd_pmac *chip, struct pmac_stream *rec)
static struct snd_pcm_hardware snd_pmac_playback =
;
static struct snd_pcm_hardware snd_pmac_capture =
;
static int snd_pmac_pcm_open(struct snd_pmac *chip, struct pmac_stream *rec,
struct snd_pcm_substream *subs)
static int snd_pmac_pcm_close(struct snd_pmac *chip, struct pmac_stream *rec,
struct snd_pcm_substream *subs)
static int snd_pmac_playback_open(struct snd_pcm_substream *subs)
static int snd_pmac_capture_open(struct snd_pcm_substream *subs)
static int snd_pmac_playback_close(struct snd_pcm_substream *subs)
static int snd_pmac_capture_close(struct snd_pcm_substream *subs)
static struct snd_pcm_ops snd_pmac_playback_ops = ;
static struct snd_pcm_ops snd_pmac_capture_ops = ;
int __devinit snd_pmac_pcm_new(struct snd_pmac *chip)
static void snd_pmac_dbdma_reset(struct snd_pmac *chip)
void snd_pmac_beep_dma_start(struct snd_pmac *chip, int bytes, unsigned long addr, int speed)
void snd_pmac_beep_dma_stop(struct snd_pmac *chip)
static irqreturn_t
snd_pmac_tx_intr(int irq, void *devid)
static irqreturn_t
snd_pmac_rx_intr(int irq, void *devid)
static irqreturn_t
snd_pmac_ctrl_intr(int irq, void *devid)
static void snd_pmac_sound_feature(struct snd_pmac *chip, int enable)
static int snd_pmac_free(struct snd_pmac *chip)
static int snd_pmac_dev_free(struct snd_device *device)
static void __devinit detect_byte_swap(struct snd_pmac *chip)
static int __devinit snd_pmac_detect(struct snd_pmac *chip)
static int pmac_auto_mute_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int pmac_auto_mute_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int pmac_hp_detect_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new auto_mute_controls[] __devinitdata = ;
int __devinit snd_pmac_add_automute(struct snd_pmac *chip)
int __devinit snd_pmac_new(struct snd_card *card, struct snd_pmac **chip_return)
void snd_pmac_suspend(struct snd_pmac *chip)
void snd_pmac_resume(struct snd_pmac *chip)
