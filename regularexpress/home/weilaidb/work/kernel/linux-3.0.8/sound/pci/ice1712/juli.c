struct juli_spec ;
#define AK4114_ADDR		0x20
#define AK4358_ADDR		0x22
#define GPIO_FREQ_MASK		(3<<0)
#define GPIO_FREQ_32KHZ		(0<<0)
#define GPIO_FREQ_44KHZ		(1<<0)
#define GPIO_FREQ_48KHZ		(2<<0)
#define GPIO_MULTI_MASK		(3<<2)
#define GPIO_MULTI_4X		(0<<2)
#define GPIO_MULTI_2X		(1<<2)
#define GPIO_MULTI_1X		(2<<2)
#define GPIO_MULTI_HALF		(3<<2)
#define GPIO_INTERNAL_CLOCK	(1<<4)
#define GPIO_CLOCK_MASK		(1<<4)
#define GPIO_ANALOG_PRESENT	(1<<5)
#define GPIO_RXMCLK_SEL		(1<<7)
#define GPIO_AK5385A_CKS0	(1<<8)
#define GPIO_AK5385A_DFS1	(1<<9)
#define GPIO_AK5385A_DFS0	(1<<10)
#define GPIO_DIGOUT_MONITOR	(1<<11)
#define GPIO_DIGIN_MONITOR	(1<<12)
#define GPIO_ANAIN_MONITOR	(1<<13)
#define GPIO_AK5385A_CKS1	(1<<14)
#define GPIO_MUTE_CONTROL	(1<<15)
#define GPIO_RATE_MASK		(GPIO_FREQ_MASK | GPIO_MULTI_MASK | \
GPIO_CLOCK_MASK)
#define GPIO_AK5385A_MASK	(GPIO_AK5385A_CKS0 | GPIO_AK5385A_DFS0 | \
GPIO_AK5385A_DFS1 | GPIO_AK5385A_CKS1)
#define JULI_PCM_RATE	(SNDRV_PCM_RATE_16000 | SNDRV_PCM_RATE_22050 | \
SNDRV_PCM_RATE_32000 | SNDRV_PCM_RATE_44100 | \
SNDRV_PCM_RATE_48000 | SNDRV_PCM_RATE_64000 | \
SNDRV_PCM_RATE_88200 | SNDRV_PCM_RATE_96000 | \
SNDRV_PCM_RATE_176400 | SNDRV_PCM_RATE_192000)
#define GPIO_RATE_16000		(GPIO_FREQ_32KHZ | GPIO_MULTI_HALF | \
GPIO_INTERNAL_CLOCK)
#define GPIO_RATE_22050		(GPIO_FREQ_44KHZ | GPIO_MULTI_HALF | \
GPIO_INTERNAL_CLOCK)
#define GPIO_RATE_24000		(GPIO_FREQ_48KHZ | GPIO_MULTI_HALF | \
GPIO_INTERNAL_CLOCK)
#define GPIO_RATE_32000		(GPIO_FREQ_32KHZ | GPIO_MULTI_1X | \
GPIO_INTERNAL_CLOCK)
#define GPIO_RATE_44100		(GPIO_FREQ_44KHZ | GPIO_MULTI_1X | \
GPIO_INTERNAL_CLOCK)
#define GPIO_RATE_48000		(GPIO_FREQ_48KHZ | GPIO_MULTI_1X | \
GPIO_INTERNAL_CLOCK)
#define GPIO_RATE_64000		(GPIO_FREQ_32KHZ | GPIO_MULTI_2X | \
GPIO_INTERNAL_CLOCK)
#define GPIO_RATE_88200		(GPIO_FREQ_44KHZ | GPIO_MULTI_2X | \
GPIO_INTERNAL_CLOCK)
#define GPIO_RATE_96000		(GPIO_FREQ_48KHZ | GPIO_MULTI_2X | \
GPIO_INTERNAL_CLOCK)
#define GPIO_RATE_176400	(GPIO_FREQ_44KHZ | GPIO_MULTI_4X | \
GPIO_INTERNAL_CLOCK)
#define GPIO_RATE_192000	(GPIO_FREQ_48KHZ | GPIO_MULTI_4X | \
GPIO_INTERNAL_CLOCK)
static unsigned int juli_rates[] = ;
static unsigned int gpio_vals[] = ;
static struct snd_pcm_hw_constraint_list juli_rates_info = ;
static int get_gpio_val(int rate)
static void juli_ak4114_write(void *private_data, unsigned char reg,
unsigned char val)
static unsigned char juli_ak4114_read(void *private_data, unsigned char reg)
static void juli_spdif_in_open(struct snd_ice1712 *ice,
struct snd_pcm_substream *substream)
static void juli_akm_lock(struct snd_akm4xxx *ak, int chip)
static void juli_akm_unlock(struct snd_akm4xxx *ak, int chip)
static void juli_akm_write(struct snd_akm4xxx *ak, int chip,
unsigned char addr, unsigned char data)
static void juli_akm_set_rate_val(struct snd_akm4xxx *ak, unsigned int rate)
#define AK_DAC(xname, xch)
#define PCM_VOLUME		"PCM Playback Volume"
#define MONITOR_AN_IN_VOLUME	"Monitor Analog In Volume"
#define MONITOR_DIG_IN_VOLUME	"Monitor Digital In Volume"
#define MONITOR_DIG_OUT_VOLUME	"Monitor Digital Out Volume"
static const struct snd_akm4xxx_dac_channel juli_dac[] = ;
static struct snd_akm4xxx akm_juli_dac __devinitdata = ;
#define juli_mute_info		snd_ctl_boolean_mono_info
static int juli_mute_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int juli_mute_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new juli_mute_controls[] __devinitdata = ;
static char *slave_vols[] __devinitdata = ;
static __devinitdata
DECLARE_TLV_DB_SCALE(juli_master_db_scale, -6350, 50, 1);
static struct snd_kcontrol __devinit *ctl_find(struct snd_card *card,
const char *name)
static void __devinit add_slaves(struct snd_card *card,
struct snd_kcontrol *master, char **list)
static int __devinit juli_add_controls(struct snd_ice1712 *ice)
static int juli_resume(struct snd_ice1712 *ice)
static int juli_suspend(struct snd_ice1712 *ice)
static inline int juli_is_spdif_master(struct snd_ice1712 *ice)
static unsigned int juli_get_rate(struct snd_ice1712 *ice)
static void juli_set_rate(struct snd_ice1712 *ice, unsigned int rate)
static inline unsigned char juli_set_mclk(struct snd_ice1712 *ice,
unsigned int rate)
static int juli_set_spdif_clock(struct snd_ice1712 *ice, int type)
static void juli_ak4114_change(struct ak4114 *ak4114, unsigned char c0,
unsigned char c1)
static int __devinit juli_init(struct snd_ice1712 *ice)
static unsigned char juli_eeprom[] __devinitdata = ;
struct snd_ice1712_card_info snd_vt1724_juli_cards[] __devinitdata = ;
