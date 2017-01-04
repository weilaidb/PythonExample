unsigned int lola_sample_rate_convert(unsigned int coded)
#define LOLA_MAXFREQ_AT_GRANULARITY_MIN         48000
#define LOLA_MAXFREQ_AT_GRANULARITY_BELOW_MAX   96000
static bool check_gran_clock_compatibility(struct lola *chip,
unsigned int val,
unsigned int freq)
int lola_set_granularity(struct lola *chip, unsigned int val, bool force)
int __devinit lola_init_clock_widget(struct lola *chip, int nid)
int lola_enable_clock_events(struct lola *chip)
int lola_set_clock_index(struct lola *chip, unsigned int idx)
bool lola_update_ext_clock_freq(struct lola *chip, unsigned int val)
int lola_set_clock(struct lola *chip, int idx)
int lola_set_sample_rate(struct lola *chip, int rate)
