#define SND_CS8404
enum ;
struct ews_spec ;
static void ewx_i2c_setlines(struct snd_i2c_bus *bus, int clk, int data)
static int ewx_i2c_getclock(struct snd_i2c_bus *bus)
static int ewx_i2c_getdata(struct snd_i2c_bus *bus, int ack)
static void ewx_i2c_start(struct snd_i2c_bus *bus)
static void ewx_i2c_stop(struct snd_i2c_bus *bus)
static void ewx_i2c_direction(struct snd_i2c_bus *bus, int clock, int data)
static struct snd_i2c_bit_ops snd_ice1712_ewx_cs8427_bit_ops = ;
static int snd_ice1712_ews88mt_chip_select(struct snd_ice1712 *ice, int chip_mask)
static void ews88mt_ak4524_lock(struct snd_akm4xxx *ak, int chip)
static void ews88mt_ak4524_unlock(struct snd_akm4xxx *ak, int chip)
static void ewx2496_ak4524_lock(struct snd_akm4xxx *ak, int chip)
static void dmx6fire_ak4524_lock(struct snd_akm4xxx *ak, int chip)
static void snd_ice1712_ews_cs8404_spdif_write(struct snd_ice1712 *ice, unsigned char bits)
static void ews88_spdif_default_get(struct snd_ice1712 *ice, struct snd_ctl_elem_value *ucontrol)
static int ews88_spdif_default_put(struct snd_ice1712 *ice, struct snd_ctl_elem_value *ucontrol)
static void ews88_spdif_stream_get(struct snd_ice1712 *ice, struct snd_ctl_elem_value *ucontrol)
static int ews88_spdif_stream_put(struct snd_ice1712 *ice, struct snd_ctl_elem_value *ucontrol)
static void ews88_open_spdif(struct snd_ice1712 *ice, struct snd_pcm_substream *substream)
static void ews88_setup_spdif(struct snd_ice1712 *ice, int rate)
static struct snd_akm4xxx akm_ews88mt __devinitdata = ;
static struct snd_ak4xxx_private akm_ews88mt_priv __devinitdata = ;
static struct snd_akm4xxx akm_ewx2496 __devinitdata = ;
static struct snd_ak4xxx_private akm_ewx2496_priv __devinitdata = ;
static struct snd_akm4xxx akm_6fire __devinitdata = ;
static struct snd_ak4xxx_private akm_6fire_priv __devinitdata = ;
#define PCF9554_REG_INPUT      0
#define PCF9554_REG_OUTPUT     1
#define PCF9554_REG_POLARITY   2
#define PCF9554_REG_CONFIG     3
static int snd_ice1712_6fire_write_pca(struct snd_ice1712 *ice, unsigned char reg, unsigned char data);
static int __devinit snd_ice1712_ews_init(struct snd_ice1712 *ice)
static int snd_ice1712_ewx_io_sense_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ice1712_ewx_io_sense_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ice1712_ewx_io_sense_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ice1712_ewx2496_controls[] __devinitdata = ;
static int snd_ice1712_ews88mt_output_sense_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ice1712_ews88mt_output_sense_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ice1712_ews88mt_input_sense_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ice1712_ews88mt_input_sense_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ice1712_ews88mt_input_sense __devinitdata = ;
static struct snd_kcontrol_new snd_ice1712_ews88mt_output_sense __devinitdata = ;
#define snd_ice1712_ews88d_control_info		snd_ctl_boolean_mono_info
static int snd_ice1712_ews88d_control_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ice1712_ews88d_control_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define EWS88D_CONTROL(xiface, xname, xshift, xinvert, xaccess) \
static struct snd_kcontrol_new snd_ice1712_ews88d_controls[] __devinitdata = ;
static int snd_ice1712_6fire_read_pca(struct snd_ice1712 *ice, unsigned char reg)
static int snd_ice1712_6fire_write_pca(struct snd_ice1712 *ice, unsigned char reg, unsigned char data)
#define snd_ice1712_6fire_control_info		snd_ctl_boolean_mono_info
static int snd_ice1712_6fire_control_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ice1712_6fire_control_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ice1712_6fire_select_input_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ice1712_6fire_select_input_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ice1712_6fire_select_input_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define DMX6FIRE_CONTROL(xname, xshift, xinvert) \
static struct snd_kcontrol_new snd_ice1712_6fire_controls[] __devinitdata = ;
static int __devinit snd_ice1712_ews_add_controls(struct snd_ice1712 *ice)
struct snd_ice1712_card_info snd_ice1712_ews_cards[] __devinitdata = ;
