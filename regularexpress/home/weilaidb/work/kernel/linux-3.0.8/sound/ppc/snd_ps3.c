static struct snd_ps3_card_info the_card;
static int snd_ps3_start_delay = CONFIG_SND_PS3_DEFAULT_START_DELAY;
module_param_named(start_delay, snd_ps3_start_delay, uint, 0644);
MODULE_PARM_DESC(start_delay, "time to insert silent data in ms");
static int index = SNDRV_DEFAULT_IDX1;
static char *id = SNDRV_DEFAULT_STR1;
module_param(index, int, 0444);
MODULE_PARM_DESC(index, "Index value for PS3 soundchip.");
module_param(id, charp, 0444);
MODULE_PARM_DESC(id, "ID string for PS3 soundchip.");
static inline u32 read_reg(unsigned int reg)
static inline void write_reg(unsigned int reg, u32 val)
static inline void update_reg(unsigned int reg, u32 or_val)
static inline void update_mask_reg(unsigned int reg, u32 mask, u32 or_val)
static const struct snd_pcm_hardware snd_ps3_pcm_hw = ;
static int snd_ps3_verify_dma_stop(struct snd_ps3_card_info *card,
int count, int force_stop)
static void snd_ps3_wait_for_dma_stop(struct snd_ps3_card_info *card)
static void snd_ps3_kick_dma(struct snd_ps3_card_info *card)
static dma_addr_t v_to_bus(struct snd_ps3_card_info *card, void *paddr, int ch)
;
static void snd_ps3_bump_buffer(struct snd_ps3_card_info *card,
enum snd_ps3_ch ch, size_t byte_count,
int stage)
static int snd_ps3_program_dma(struct snd_ps3_card_info *card,
enum snd_ps3_dma_filltype filltype)
static irqreturn_t snd_ps3_interrupt(int irq, void *dev_id)
;
static int snd_ps3_mute(int mute_on)
static int snd_ps3_change_avsetting(struct snd_ps3_card_info *card)
static int snd_ps3_set_avsetting(struct snd_pcm_substream *substream)
static int snd_ps3_pcm_open(struct snd_pcm_substream *substream)
;
static int snd_ps3_pcm_close(struct snd_pcm_substream *substream)
;
static int snd_ps3_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
;
static int snd_ps3_pcm_hw_free(struct snd_pcm_substream *substream)
;
static int snd_ps3_delay_to_bytes(struct snd_pcm_substream *substream,
unsigned int delay_ms)
;
static int snd_ps3_pcm_prepare(struct snd_pcm_substream *substream)
;
static int snd_ps3_pcm_trigger(struct snd_pcm_substream *substream,
int cmd)
;
static snd_pcm_uframes_t snd_ps3_pcm_pointer(
struct snd_pcm_substream *substream)
;
static int snd_ps3_spdif_mask_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ps3_spdif_cmask_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ps3_spdif_pmask_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ps3_spdif_default_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ps3_spdif_default_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new spdif_ctls[] = ;
static struct snd_pcm_ops snd_ps3_pcm_spdif_ops = ;
static int __devinit snd_ps3_map_mmio(void)
;
static void snd_ps3_unmap_mmio(void)
static int __devinit snd_ps3_allocate_irq(void)
;
static void snd_ps3_free_irq(void)
static void __devinit snd_ps3_audio_set_base_addr(uint64_t ioaddr_start)
static void __devinit snd_ps3_audio_fixup(struct snd_ps3_card_info *card)
static int __devinit snd_ps3_init_avsetting(struct snd_ps3_card_info *card)
static int __devinit snd_ps3_driver_probe(struct ps3_system_bus_device *dev)
;
static int snd_ps3_driver_remove(struct ps3_system_bus_device *dev)
static struct ps3_system_bus_driver snd_ps3_bus_driver_info = ;
static int __init snd_ps3_init(void)
module_init(snd_ps3_init);
static void __exit snd_ps3_exit(void)
module_exit(snd_ps3_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("PS3 sound driver");
MODULE_AUTHOR("Sony Computer Entertainment Inc.");
MODULE_ALIAS(PS3_MODULE_ALIAS_SOUND);
