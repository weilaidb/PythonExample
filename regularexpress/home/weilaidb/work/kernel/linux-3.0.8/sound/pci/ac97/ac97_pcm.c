static unsigned char rate_reg_tables[2][4][9] = ;
static unsigned char rate_cregs[9] = ;
static unsigned char get_slot_reg(struct ac97_pcm *pcm, unsigned short cidx,
unsigned short slot, int dbl)
static int set_spdif_rate(struct snd_ac97 *ac97, unsigned short rate)
int snd_ac97_set_rate(struct snd_ac97 *ac97, int reg, unsigned int rate)
EXPORT_SYMBOL(snd_ac97_set_rate);
static unsigned short get_pslots(struct snd_ac97 *ac97, unsigned char *rate_table, unsigned short *spdif_slots)
static unsigned short get_cslots(struct snd_ac97 *ac97)
static unsigned int get_rates(struct ac97_pcm *pcm, unsigned int cidx, unsigned short slots, int dbl)
int snd_ac97_pcm_assign(struct snd_ac97_bus *bus,
unsigned short pcms_count,
const struct ac97_pcm *pcms)
EXPORT_SYMBOL(snd_ac97_pcm_assign);
int snd_ac97_pcm_open(struct ac97_pcm *pcm, unsigned int rate,
enum ac97_pcm_cfg cfg, unsigned short slots)
EXPORT_SYMBOL(snd_ac97_pcm_open);
int snd_ac97_pcm_close(struct ac97_pcm *pcm)
EXPORT_SYMBOL(snd_ac97_pcm_close);
static int double_rate_hw_constraint_rate(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int double_rate_hw_constraint_channels(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
int snd_ac97_pcm_double_rate_rules(struct snd_pcm_runtime *runtime)
EXPORT_SYMBOL(snd_ac97_pcm_double_rate_rules);
