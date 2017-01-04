MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("ICEnsemble ICE17xx <-> AK4xxx AD/DA chip interface");
MODULE_LICENSE("GPL");
static void snd_ice1712_akm4xxx_lock(struct snd_akm4xxx *ak, int chip)
static void snd_ice1712_akm4xxx_unlock(struct snd_akm4xxx *ak, int chip)
static void snd_ice1712_akm4xxx_write(struct snd_akm4xxx *ak, int chip,
unsigned char addr, unsigned char data)
int snd_ice1712_akm4xxx_init(struct snd_akm4xxx *ak, const struct snd_akm4xxx *temp,
const struct snd_ak4xxx_private *_priv, struct snd_ice1712 *ice)
void snd_ice1712_akm4xxx_free(struct snd_ice1712 *ice)
int snd_ice1712_akm4xxx_build_controls(struct snd_ice1712 *ice)
static int __init alsa_ice1712_akm4xxx_module_init(void)
static void __exit alsa_ice1712_akm4xxx_module_exit(void)
module_init(alsa_ice1712_akm4xxx_module_init)
module_exit(alsa_ice1712_akm4xxx_module_exit)
EXPORT_SYMBOL(snd_ice1712_akm4xxx_init);
EXPORT_SYMBOL(snd_ice1712_akm4xxx_free);
EXPORT_SYMBOL(snd_ice1712_akm4xxx_build_controls);
