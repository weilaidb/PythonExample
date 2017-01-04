#define TMP_CLIENT_ID	0x1001
static int
snd_emux_hwdep_load_patch(struct snd_emux *emu, void __user *arg)
static int
snd_emux_hwdep_misc_mode(struct snd_emux *emu, void __user *arg)
static int
snd_emux_hwdep_ioctl(struct snd_hwdep * hw, struct file *file,
unsigned int cmd, unsigned long arg)
int
snd_emux_init_hwdep(struct snd_emux *emu)
void
snd_emux_delete_hwdep(struct snd_emux *emu)
