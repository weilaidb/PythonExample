struct snd_ctl_elem_list32 ;
static int snd_ctl_elem_list_compat(struct snd_card *card,
struct snd_ctl_elem_list32 __user *data32)
struct snd_ctl_elem_info32  __attribute__((packed));
static int snd_ctl_elem_info_compat(struct snd_ctl_file *ctl,
struct snd_ctl_elem_info32 __user *data32)
struct snd_ctl_elem_value32 ;
static int get_ctl_type(struct snd_card *card, struct snd_ctl_elem_id *id,
int *countp)
static int get_elem_size(int type, int count)
static int copy_ctl_value_from_user(struct snd_card *card,
struct snd_ctl_elem_value *data,
struct snd_ctl_elem_value32 __user *data32,
int *typep, int *countp)
static int copy_ctl_value_to_user(struct snd_ctl_elem_value32 __user *data32,
struct snd_ctl_elem_value *data,
int type, int count)
static int snd_ctl_elem_read_user_compat(struct snd_card *card,
struct snd_ctl_elem_value32 __user *data32)
static int snd_ctl_elem_write_user_compat(struct snd_ctl_file *file,
struct snd_ctl_elem_value32 __user *data32)
static int snd_ctl_elem_add_compat(struct snd_ctl_file *file,
struct snd_ctl_elem_info32 __user *data32,
int replace)
enum ;
static inline long snd_ctl_ioctl_compat(struct file *file, unsigned int cmd, unsigned long arg)
