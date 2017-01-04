static char *opt_coax_texts[2] = ;
static char *line_phono_texts[2] = ;
static const u8 log_volume_table[128] = ;
static const struct
init_data[] = ;
static const int rates_altsetting[] = ;
static const u16 rates_6fire_vl[] = ;
static const u16 rates_6fire_vh[] = ;
enum ;
static void usb6fire_control_master_vol_update(struct control_runtime *rt)
static void usb6fire_control_line_phono_update(struct control_runtime *rt)
static void usb6fire_control_opt_coax_update(struct control_runtime *rt)
static int usb6fire_control_set_rate(struct control_runtime *rt, int rate)
static int usb6fire_control_set_channels(
struct control_runtime *rt, int n_analog_out,
int n_analog_in, bool spdif_out, bool spdif_in)
static int usb6fire_control_streaming_update(struct control_runtime *rt)
static int usb6fire_control_master_vol_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int usb6fire_control_master_vol_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int usb6fire_control_master_vol_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int usb6fire_control_line_phono_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int usb6fire_control_line_phono_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int usb6fire_control_line_phono_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int usb6fire_control_opt_coax_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int usb6fire_control_opt_coax_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int usb6fire_control_opt_coax_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int usb6fire_control_digital_thru_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int usb6fire_control_digital_thru_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct __devinitdata snd_kcontrol_new elements[] = ;
int __devinit usb6fire_control_init(struct sfire_chip *chip)
void usb6fire_control_abort(struct sfire_chip *chip)
void usb6fire_control_destroy(struct sfire_chip *chip)
