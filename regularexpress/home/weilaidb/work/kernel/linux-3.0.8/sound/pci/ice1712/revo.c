struct revo51_spec ;
static void revo_i2s_mclk_changed(struct snd_ice1712 *ice)
static void revo_set_rate_val(struct snd_akm4xxx *ak, unsigned int rate)
static void revo_i2c_start(struct snd_i2c_bus *bus)
static void revo_i2c_stop(struct snd_i2c_bus *bus)
static void revo_i2c_direction(struct snd_i2c_bus *bus, int clock, int data)
static void revo_i2c_setlines(struct snd_i2c_bus *bus, int clk, int data)
static int revo_i2c_getdata(struct snd_i2c_bus *bus, int ack)
static struct snd_i2c_bit_ops revo51_bit_ops = ;
static int revo51_i2c_init(struct snd_ice1712 *ice,
struct snd_pt2258 *pt)
#define AK_DAC(xname,xch)
static const struct snd_akm4xxx_dac_channel revo71_front[] = ;
static const struct snd_akm4xxx_dac_channel revo71_surround[] = ;
static const struct snd_akm4xxx_dac_channel revo51_dac[] = ;
static const char *revo51_adc_input_names[] = ;
static const struct snd_akm4xxx_adc_channel revo51_adc[] = ;
static struct snd_akm4xxx akm_revo_front __devinitdata = ;
static struct snd_ak4xxx_private akm_revo_front_priv __devinitdata = ;
static struct snd_akm4xxx akm_revo_surround __devinitdata = ;
static struct snd_ak4xxx_private akm_revo_surround_priv __devinitdata = ;
static struct snd_akm4xxx akm_revo51 __devinitdata = ;
static struct snd_ak4xxx_private akm_revo51_priv __devinitdata = ;
static struct snd_akm4xxx akm_revo51_adc __devinitdata = ;
static struct snd_ak4xxx_private akm_revo51_adc_priv __devinitdata = ;
static struct snd_pt2258 ptc_revo51_volume;
static void ap192_set_rate_val(struct snd_akm4xxx *ak, unsigned int rate)
static const struct snd_akm4xxx_dac_channel ap192_dac[] = ;
static struct snd_akm4xxx akm_ap192 __devinitdata = ;
static struct snd_ak4xxx_private akm_ap192_priv __devinitdata = ;
#define AK4114_ADDR	0x02
static void write_data(struct snd_ice1712 *ice, unsigned int gpio,
unsigned int data, int idx)
static unsigned char read_data(struct snd_ice1712 *ice, unsigned int gpio,
int idx)
static unsigned int ap192_4wire_start(struct snd_ice1712 *ice)
static void ap192_4wire_finish(struct snd_ice1712 *ice, unsigned int tmp)
static void ap192_ak4114_write(void *private_data, unsigned char addr,
unsigned char data)
static unsigned char ap192_ak4114_read(void *private_data, unsigned char addr)
static int __devinit ap192_ak4114_init(struct snd_ice1712 *ice)
static int __devinit revo_init(struct snd_ice1712 *ice)
static int __devinit revo_add_controls(struct snd_ice1712 *ice)
struct snd_ice1712_card_info snd_vt1724_revo_cards[] __devinitdata = ;
