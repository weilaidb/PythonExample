static int jack_switch_types[] = ;
static int snd_jack_dev_free(struct snd_device *device)
static int snd_jack_dev_register(struct snd_device *device)
int snd_jack_new(struct snd_card *card, const char *id, int type,
struct snd_jack **jjack)
EXPORT_SYMBOL(snd_jack_new);
void snd_jack_set_parent(struct snd_jack *jack, struct device *parent)
EXPORT_SYMBOL(snd_jack_set_parent);
int snd_jack_set_key(struct snd_jack *jack, enum snd_jack_types type,
int keytype)
EXPORT_SYMBOL(snd_jack_set_key);
void snd_jack_report(struct snd_jack *jack, int status)
EXPORT_SYMBOL(snd_jack_report);
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_DESCRIPTION("Jack detection support for ALSA");
MODULE_LICENSE("GPL");
