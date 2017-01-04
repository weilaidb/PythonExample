int snd_soc_jack_new(struct snd_soc_codec *codec, const char *id, int type,
struct snd_soc_jack *jack)
EXPORT_SYMBOL_GPL(snd_soc_jack_new);
void snd_soc_jack_report(struct snd_soc_jack *jack, int status, int mask)
EXPORT_SYMBOL_GPL(snd_soc_jack_report);
int snd_soc_jack_add_zones(struct snd_soc_jack *jack, int count,
struct snd_soc_jack_zone *zones)
EXPORT_SYMBOL_GPL(snd_soc_jack_add_zones);
int snd_soc_jack_get_type(struct snd_soc_jack *jack, int micbias_voltage)
EXPORT_SYMBOL_GPL(snd_soc_jack_get_type);
int snd_soc_jack_add_pins(struct snd_soc_jack *jack, int count,
struct snd_soc_jack_pin *pins)
EXPORT_SYMBOL_GPL(snd_soc_jack_add_pins);
void snd_soc_jack_notifier_register(struct snd_soc_jack *jack,
struct notifier_block *nb)
EXPORT_SYMBOL_GPL(snd_soc_jack_notifier_register);
void snd_soc_jack_notifier_unregister(struct snd_soc_jack *jack,
struct notifier_block *nb)
EXPORT_SYMBOL_GPL(snd_soc_jack_notifier_unregister);
static void snd_soc_jack_gpio_detect(struct snd_soc_jack_gpio *gpio)
static irqreturn_t gpio_handler(int irq, void *data)
static void gpio_work(struct work_struct *work)
int snd_soc_jack_add_gpios(struct snd_soc_jack *jack, int count,
struct snd_soc_jack_gpio *gpios)
EXPORT_SYMBOL_GPL(snd_soc_jack_add_gpios);
void snd_soc_jack_free_gpios(struct snd_soc_jack *jack, int count,
struct snd_soc_jack_gpio *gpios)
EXPORT_SYMBOL_GPL(snd_soc_jack_free_gpios);
