struct link_ctl_info ;
struct link_master ;
struct link_slave ;
static int slave_update(struct link_slave *slave)
static int slave_init(struct link_slave *slave)
static int master_init(struct link_master *master)
static int slave_get_val(struct link_slave *slave,
struct snd_ctl_elem_value *ucontrol)
static int slave_put_val(struct link_slave *slave,
struct snd_ctl_elem_value *ucontrol)
static int slave_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int slave_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int slave_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int slave_tlv_cmd(struct snd_kcontrol *kcontrol,
int op_flag, unsigned int size,
unsigned int __user *tlv)
static void slave_free(struct snd_kcontrol *kcontrol)
int _snd_ctl_add_slave(struct snd_kcontrol *master, struct snd_kcontrol *slave,
unsigned int flags)
EXPORT_SYMBOL(_snd_ctl_add_slave);
static int master_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int master_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int master_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static void master_free(struct snd_kcontrol *kcontrol)
struct snd_kcontrol *snd_ctl_make_virtual_master(char *name,
const unsigned int *tlv)
EXPORT_SYMBOL(snd_ctl_make_virtual_master);
