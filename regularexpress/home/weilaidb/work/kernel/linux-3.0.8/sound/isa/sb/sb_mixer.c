#undef IO_DEBUG
void snd_sbmixer_write(struct snd_sb *chip, unsigned char reg, unsigned char data)
unsigned char snd_sbmixer_read(struct snd_sb *chip, unsigned char reg)
static int snd_sbmixer_info_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_sbmixer_get_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_sbmixer_put_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_sbmixer_info_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_sbmixer_get_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_sbmixer_put_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_dt019x_input_sw_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_dt019x_input_sw_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_dt019x_input_sw_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_als4k_mono_capture_route_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_als4k_mono_capture_route_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_als4k_mono_capture_route_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_sb8mixer_info_mux(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_sb8mixer_get_mux(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_sb8mixer_put_mux(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_sb16mixer_info_input_sw(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_sb16mixer_get_input_sw(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_sb16mixer_put_input_sw(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
int snd_sbmixer_add_ctl(struct snd_sb *chip, const char *name, int index, int type, unsigned long value)
static struct sbmix_elem snd_sb20_controls[] = ;
static unsigned char snd_sb20_init_values[][2] = ;
static struct sbmix_elem snd_sbpro_controls[] = ;
static unsigned char snd_sbpro_init_values[][2] = ;
static struct sbmix_elem snd_sb16_controls[] = ;
static unsigned char snd_sb16_init_values[][2] = ;
static struct sbmix_elem snd_dt019x_controls[] = ;
static unsigned char snd_dt019x_init_values[][2] = ;
static struct sbmix_elem snd_als4000_controls[] = ;
static unsigned char snd_als4000_init_values[][2] = ;
static int snd_sbmixer_init(struct snd_sb *chip,
struct sbmix_elem *controls,
int controls_count,
unsigned char map[][2],
int map_count,
char *name)
int snd_sbmixer_new(struct snd_sb *chip)
static unsigned char sb20_saved_regs[] = ;
static unsigned char sbpro_saved_regs[] = ;
static unsigned char sb16_saved_regs[] = ;
static unsigned char dt019x_saved_regs[] = ;
static unsigned char als4000_saved_regs[] = ;
static void save_mixer(struct snd_sb *chip, unsigned char *regs, int num_regs)
static void restore_mixer(struct snd_sb *chip, unsigned char *regs, int num_regs)
void snd_sbmixer_suspend(struct snd_sb *chip)
void snd_sbmixer_resume(struct snd_sb *chip)
