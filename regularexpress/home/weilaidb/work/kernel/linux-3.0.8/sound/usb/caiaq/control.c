#define CNT_INTVAL 0x10000
static int control_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int control_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int control_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new kcontrol_template __devinitdata = ;
struct caiaq_controller ;
static struct caiaq_controller ak1_controller[] = ;
static struct caiaq_controller rk2_controller[] = ;
static struct caiaq_controller rk3_controller[] = ;
static struct caiaq_controller kore_controller[] = ;
static struct caiaq_controller a8dj_controller[] = ;
static struct caiaq_controller a4dj_controller[] = ;
static struct caiaq_controller kontrolx1_controller[] = ;
static struct caiaq_controller kontrols4_controller[] = ;
static int __devinit add_controls(struct caiaq_controller *c, int num,
struct snd_usb_caiaqdev *dev)
int __devinit snd_usb_caiaq_control_init(struct snd_usb_caiaqdev *dev)
