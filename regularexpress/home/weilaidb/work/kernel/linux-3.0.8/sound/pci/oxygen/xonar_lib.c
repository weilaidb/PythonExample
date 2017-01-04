#define GPIO_CS53x1_M_MASK	0x000c
#define GPIO_CS53x1_M_SINGLE	0x0000
#define GPIO_CS53x1_M_DOUBLE	0x0004
#define GPIO_CS53x1_M_QUAD	0x0008
void xonar_enable_output(struct oxygen *chip)
void xonar_disable_output(struct oxygen *chip)
static void xonar_ext_power_gpio_changed(struct oxygen *chip)
void xonar_init_ext_power(struct oxygen *chip)
void xonar_init_cs53x1(struct oxygen *chip)
void xonar_set_cs53x1_params(struct oxygen *chip,
struct snd_pcm_hw_params *params)
int xonar_gpio_bit_switch_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
int xonar_gpio_bit_switch_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
