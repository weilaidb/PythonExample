MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Routines for Gravis UltraSound soundcards");
MODULE_LICENSE("GPL");
static int snd_gus_init_dma_irq(struct snd_gus_card * gus, int latches);
int snd_gus_use_inc(struct snd_gus_card * gus)
void snd_gus_use_dec(struct snd_gus_card * gus)
static int snd_gus_joystick_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_gus_joystick_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_gus_joystick_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_gus_joystick_control = ;
static void snd_gus_init_control(struct snd_gus_card *gus)
static int snd_gus_free(struct snd_gus_card *gus)
static int snd_gus_dev_free(struct snd_device *device)
int snd_gus_create(struct snd_card *card,
unsigned long port,
int irq, int dma1, int dma2,
int timer_dev,
int voices,
int pcm_channels,
int effect,
struct snd_gus_card **rgus)
static int snd_gus_detect_memory(struct snd_gus_card * gus)
static int snd_gus_init_dma_irq(struct snd_gus_card * gus, int latches)
static int snd_gus_check_version(struct snd_gus_card * gus)
int snd_gus_initialize(struct snd_gus_card *gus)
EXPORT_SYMBOL(snd_gf1_delay);
EXPORT_SYMBOL(snd_gf1_write8);
EXPORT_SYMBOL(snd_gf1_look8);
EXPORT_SYMBOL(snd_gf1_write16);
EXPORT_SYMBOL(snd_gf1_look16);
EXPORT_SYMBOL(snd_gf1_i_write8);
EXPORT_SYMBOL(snd_gf1_i_look8);
EXPORT_SYMBOL(snd_gf1_i_look16);
EXPORT_SYMBOL(snd_gf1_dram_addr);
EXPORT_SYMBOL(snd_gf1_write_addr);
EXPORT_SYMBOL(snd_gf1_poke);
EXPORT_SYMBOL(snd_gf1_peek);
EXPORT_SYMBOL(snd_gf1_alloc_voice);
EXPORT_SYMBOL(snd_gf1_free_voice);
EXPORT_SYMBOL(snd_gf1_ctrl_stop);
EXPORT_SYMBOL(snd_gf1_stop_voice);
EXPORT_SYMBOL(snd_gf1_new_mixer);
EXPORT_SYMBOL(snd_gf1_pcm_new);
EXPORT_SYMBOL(snd_gus_use_inc);
EXPORT_SYMBOL(snd_gus_use_dec);
EXPORT_SYMBOL(snd_gus_create);
EXPORT_SYMBOL(snd_gus_initialize);
EXPORT_SYMBOL(snd_gus_interrupt);
EXPORT_SYMBOL(snd_gf1_rawmidi_new);
EXPORT_SYMBOL(snd_gus_dram_write);
EXPORT_SYMBOL(snd_gus_dram_read);
EXPORT_SYMBOL(snd_gf1_lvol_to_gvol_raw);
EXPORT_SYMBOL(snd_gf1_translate_freq);
EXPORT_SYMBOL(snd_gf1_mem_alloc);
EXPORT_SYMBOL(snd_gf1_mem_xfree);
EXPORT_SYMBOL(snd_gf1_mem_free);
EXPORT_SYMBOL(snd_gf1_mem_lock);
static int __init alsa_gus_init(void)
static void __exit alsa_gus_exit(void)
module_init(alsa_gus_init)
module_exit(alsa_gus_exit)
