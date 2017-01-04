#define __SOUND_JACK_H
struct input_dev;
enum snd_jack_types ;
struct snd_jack ;
int snd_jack_new(struct snd_card *card, const char *id, int type,
struct snd_jack **jack);
void snd_jack_set_parent(struct snd_jack *jack, struct device *parent);
int snd_jack_set_key(struct snd_jack *jack, enum snd_jack_types type,
int keytype);
void snd_jack_report(struct snd_jack *jack, int status);
static inline int snd_jack_new(struct snd_card *card, const char *id, int type,
struct snd_jack **jack)
static inline void snd_jack_set_parent(struct snd_jack *jack,
struct device *parent)
static inline void snd_jack_report(struct snd_jack *jack, int status)
