#define __SOUND_CONTROL_H
#define snd_kcontrol_chip(kcontrol) ((kcontrol)->private_data)
struct snd_kcontrol;
typedef int (snd_kcontrol_info_t) (struct snd_kcontrol * kcontrol, struct snd_ctl_elem_info * uinfo);
typedef int (snd_kcontrol_get_t) (struct snd_kcontrol * kcontrol, struct snd_ctl_elem_value * ucontrol);
typedef int (snd_kcontrol_put_t) (struct snd_kcontrol * kcontrol, struct snd_ctl_elem_value * ucontrol);
typedef int (snd_kcontrol_tlv_rw_t)(struct snd_kcontrol *kcontrol,
int op_flag,
unsigned int size,
unsigned int __user *tlv);
struct snd_kcontrol_new ;
struct snd_kcontrol_volatile ;
struct snd_kcontrol ;
#define snd_kcontrol(n) list_entry(n, struct snd_kcontrol, list)
struct snd_kctl_event ;
#define snd_kctl_event(n) list_entry(n, struct snd_kctl_event, list)
struct pid;
struct snd_ctl_file ;
#define snd_ctl_file(n) list_entry(n, struct snd_ctl_file, list)
typedef int (*snd_kctl_ioctl_func_t) (struct snd_card * card,
struct snd_ctl_file * control,
unsigned int cmd, unsigned long arg);
void snd_ctl_notify(struct snd_card * card, unsigned int mask, struct snd_ctl_elem_id * id);
struct snd_kcontrol *snd_ctl_new1(const struct snd_kcontrol_new * kcontrolnew, void * private_data);
void snd_ctl_free_one(struct snd_kcontrol * kcontrol);
int snd_ctl_add(struct snd_card * card, struct snd_kcontrol * kcontrol);
int snd_ctl_remove(struct snd_card * card, struct snd_kcontrol * kcontrol);
int snd_ctl_replace(struct snd_card *card, struct snd_kcontrol *kcontrol, bool add_on_replace);
int snd_ctl_remove_id(struct snd_card * card, struct snd_ctl_elem_id *id);
int snd_ctl_rename_id(struct snd_card * card, struct snd_ctl_elem_id *src_id, struct snd_ctl_elem_id *dst_id);
int snd_ctl_activate_id(struct snd_card *card, struct snd_ctl_elem_id *id,
int active);
struct snd_kcontrol *snd_ctl_find_numid(struct snd_card * card, unsigned int numid);
struct snd_kcontrol *snd_ctl_find_id(struct snd_card * card, struct snd_ctl_elem_id *id);
int snd_ctl_create(struct snd_card *card);
int snd_ctl_register_ioctl(snd_kctl_ioctl_func_t fcn);
int snd_ctl_unregister_ioctl(snd_kctl_ioctl_func_t fcn);
int snd_ctl_register_ioctl_compat(snd_kctl_ioctl_func_t fcn);
int snd_ctl_unregister_ioctl_compat(snd_kctl_ioctl_func_t fcn);
#define snd_ctl_register_ioctl_compat(fcn)
#define snd_ctl_unregister_ioctl_compat(fcn)
static inline unsigned int snd_ctl_get_ioffnum(struct snd_kcontrol *kctl, struct snd_ctl_elem_id *id)
static inline unsigned int snd_ctl_get_ioffidx(struct snd_kcontrol *kctl, struct snd_ctl_elem_id *id)
static inline unsigned int snd_ctl_get_ioff(struct snd_kcontrol *kctl, struct snd_ctl_elem_id *id)
static inline struct snd_ctl_elem_id *snd_ctl_build_ioff(struct snd_ctl_elem_id *dst_id,
struct snd_kcontrol *src_kctl,
unsigned int offset)
int snd_ctl_boolean_mono_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo);
int snd_ctl_boolean_stereo_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo);
int snd_ctl_enum_info(struct snd_ctl_elem_info *info, unsigned int channels,
unsigned int items, const char *const names[]);
struct snd_kcontrol *snd_ctl_make_virtual_master(char *name,
const unsigned int *tlv);
int _snd_ctl_add_slave(struct snd_kcontrol *master, struct snd_kcontrol *slave,
unsigned int flags);
#define SND_CTL_SLAVE_NEED_UPDATE	(1 << 0)
static inline int
snd_ctl_add_slave(struct snd_kcontrol *master, struct snd_kcontrol *slave)
static inline int
snd_ctl_add_slave_uncached(struct snd_kcontrol *master,
struct snd_kcontrol *slave)
