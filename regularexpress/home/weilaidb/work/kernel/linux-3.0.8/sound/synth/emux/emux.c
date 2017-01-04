MODULE_AUTHOR("Takashi Iwai");
MODULE_DESCRIPTION("Routines for control of EMU WaveTable chip");
MODULE_LICENSE("GPL");
int snd_emux_new(struct snd_emux **remu)
EXPORT_SYMBOL(snd_emux_new);
static int sf_sample_new(void *private_data, struct snd_sf_sample *sp,
struct snd_util_memhdr *hdr,
const void __user *buf, long count)
static int sf_sample_free(void *private_data, struct snd_sf_sample *sp,
struct snd_util_memhdr *hdr)
static void sf_sample_reset(void *private_data)
int snd_emux_register(struct snd_emux *emu, struct snd_card *card, int index, char *name)
EXPORT_SYMBOL(snd_emux_register);
int snd_emux_free(struct snd_emux *emu)
EXPORT_SYMBOL(snd_emux_free);
static int __init alsa_emux_init(void)
static void __exit alsa_emux_exit(void)
module_init(alsa_emux_init)
module_exit(alsa_emux_exit)
