struct se_spec ;
static void __devinit se200pci_WM8740_init(struct snd_ice1712 *ice)
static void se200pci_WM8740_set_pro_rate(struct snd_ice1712 *ice,
unsigned int rate)
static void se200pci_WM8766_write(struct snd_ice1712 *ice,
unsigned int addr, unsigned int data)
static void se200pci_WM8766_set_volume(struct snd_ice1712 *ice, int ch,
unsigned int vol1, unsigned int vol2)
static void __devinit se200pci_WM8766_init(struct snd_ice1712 *ice)
static void se200pci_WM8766_set_pro_rate(struct snd_ice1712 *ice,
unsigned int rate)
static void se200pci_WM8776_write(struct snd_ice1712 *ice,
unsigned int addr, unsigned int data)
static void se200pci_WM8776_set_output_volume(struct snd_ice1712 *ice,
unsigned int vol1, unsigned int vol2)
static void se200pci_WM8776_set_input_volume(struct snd_ice1712 *ice,
unsigned int vol1, unsigned int vol2)
static const char *se200pci_sel[] = ;
static void se200pci_WM8776_set_input_selector(struct snd_ice1712 *ice,
unsigned int sel)
static void se200pci_WM8776_set_afl(struct snd_ice1712 *ice, unsigned int afl)
static const char *se200pci_agc[] = ;
static void se200pci_WM8776_set_agc(struct snd_ice1712 *ice, unsigned int agc)
static void __devinit se200pci_WM8776_init(struct snd_ice1712 *ice)
static void se200pci_WM8776_set_pro_rate(struct snd_ice1712 *ice,
unsigned int rate)
static void se200pci_set_pro_rate(struct snd_ice1712 *ice, unsigned int rate)
struct se200pci_control ;
static const struct se200pci_control se200pci_cont[] = ;
static int se200pci_get_enum_count(int n)
static int se200pci_cont_volume_info(struct snd_kcontrol *kc,
struct snd_ctl_elem_info *uinfo)
#define se200pci_cont_boolean_info	snd_ctl_boolean_mono_info
static int se200pci_cont_enum_info(struct snd_kcontrol *kc,
struct snd_ctl_elem_info *uinfo)
static int se200pci_cont_volume_get(struct snd_kcontrol *kc,
struct snd_ctl_elem_value *uc)
static int se200pci_cont_boolean_get(struct snd_kcontrol *kc,
struct snd_ctl_elem_value *uc)
static int se200pci_cont_enum_get(struct snd_kcontrol *kc,
struct snd_ctl_elem_value *uc)
static void se200pci_cont_update(struct snd_ice1712 *ice, int n)
static int se200pci_cont_volume_put(struct snd_kcontrol *kc,
struct snd_ctl_elem_value *uc)
static int se200pci_cont_boolean_put(struct snd_kcontrol *kc,
struct snd_ctl_elem_value *uc)
static int se200pci_cont_enum_put(struct snd_kcontrol *kc,
struct snd_ctl_elem_value *uc)
static const DECLARE_TLV_DB_SCALE(db_scale_gain1, -12750, 50, 1);
static const DECLARE_TLV_DB_SCALE(db_scale_gain2, -10350, 50, 1);
static int __devinit se200pci_add_controls(struct snd_ice1712 *ice)
static int __devinit se_init(struct snd_ice1712 *ice)
static int __devinit se_add_controls(struct snd_ice1712 *ice)
static unsigned char se200pci_eeprom[] __devinitdata = ;
static unsigned char se90pci_eeprom[] __devinitdata = ;
struct snd_ice1712_card_info snd_vt1724_se_cards[] __devinitdata = ;
