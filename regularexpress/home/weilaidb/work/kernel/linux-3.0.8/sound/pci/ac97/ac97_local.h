void snd_ac97_get_name(struct snd_ac97 *ac97, unsigned int id, char *name,
int modem);
int snd_ac97_update_bits_nolock(struct snd_ac97 *ac97, unsigned short reg,
unsigned short mask, unsigned short value);
void snd_ac97_bus_proc_init(struct snd_ac97_bus * ac97);
void snd_ac97_bus_proc_done(struct snd_ac97_bus * ac97);
void snd_ac97_proc_init(struct snd_ac97 * ac97);
void snd_ac97_proc_done(struct snd_ac97 * ac97);
#define snd_ac97_bus_proc_init(ac97_bus_t) do  while (0)
#define snd_ac97_bus_proc_done(ac97_bus_t) do  while (0)
#define snd_ac97_proc_init(ac97_t) do  while (0)
#define snd_ac97_proc_done(ac97_t) do  while (0)
