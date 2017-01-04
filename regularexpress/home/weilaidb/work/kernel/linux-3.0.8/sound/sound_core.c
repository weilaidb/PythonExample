static int __init init_oss_soundcore(void);
static void cleanup_oss_soundcore(void);
static inline int init_oss_soundcore(void)
static inline void cleanup_oss_soundcore(void)
struct class *sound_class;
EXPORT_SYMBOL(sound_class);
MODULE_DESCRIPTION("Core sound module");
MODULE_AUTHOR("Alan Cox");
MODULE_LICENSE("GPL");
static char *sound_devnode(struct device *dev, mode_t *mode)
static int __init init_soundcore(void)
static void __exit cleanup_soundcore(void)
subsys_initcall(init_soundcore);
module_exit(cleanup_soundcore);
#define SOUND_STEP 16
struct sound_unit
;
extern int msnd_classic_init(void);
extern int msnd_pinnacle_init(void);
static int preclaim_oss = 1;
static int preclaim_oss = 0;
module_param(preclaim_oss, int, 0444);
static int soundcore_open(struct inode *, struct file *);
static const struct file_operations soundcore_fops =
;
static int __sound_insert_unit(struct sound_unit * s, struct sound_unit **list, const struct file_operations *fops, int index, int low, int top)
static struct sound_unit *__sound_remove_unit(struct sound_unit **list, int unit)
static DEFINE_SPINLOCK(sound_loader_lock);
static int sound_insert_unit(struct sound_unit **list, const struct file_operations *fops, int index, int low, int top, const char *name, umode_t mode, struct device *dev)
static void sound_remove_unit(struct sound_unit **list, int unit)
static struct sound_unit *chains[SOUND_STEP];
int register_sound_special_device(const struct file_operations *fops, int unit,
struct device *dev)
EXPORT_SYMBOL(register_sound_special_device);
int register_sound_special(const struct file_operations *fops, int unit)
EXPORT_SYMBOL(register_sound_special);
int register_sound_mixer(const struct file_operations *fops, int dev)
EXPORT_SYMBOL(register_sound_mixer);
int register_sound_midi(const struct file_operations *fops, int dev)
EXPORT_SYMBOL(register_sound_midi);
int register_sound_dsp(const struct file_operations *fops, int dev)
EXPORT_SYMBOL(register_sound_dsp);
void unregister_sound_special(int unit)
EXPORT_SYMBOL(unregister_sound_special);
void unregister_sound_mixer(int unit)
EXPORT_SYMBOL(unregister_sound_mixer);
void unregister_sound_midi(int unit)
EXPORT_SYMBOL(unregister_sound_midi);
void unregister_sound_dsp(int unit)
EXPORT_SYMBOL(unregister_sound_dsp);
static struct sound_unit *__look_for_unit(int chain, int unit)
static int soundcore_open(struct inode *inode, struct file *file)
MODULE_ALIAS_CHARDEV_MAJOR(SOUND_MAJOR);
static void cleanup_oss_soundcore(void)
static int __init init_oss_soundcore(void)
