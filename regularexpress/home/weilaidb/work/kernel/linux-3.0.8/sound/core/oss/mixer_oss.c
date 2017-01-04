#define OSS_ALSAEMULVER         _SIOR ('M', 249, int)
MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Mixer OSS emulation for ALSA.");
MODULE_LICENSE("GPL");
MODULE_ALIAS_SNDRV_MINOR(SNDRV_MINOR_OSS_MIXER);
static int snd_mixer_oss_open(struct inode *inode, struct file *file)
static int snd_mixer_oss_release(struct inode *inode, struct file *file)
static int snd_mixer_oss_info(struct snd_mixer_oss_file *fmixer,
mixer_info __user *_info)
static int snd_mixer_oss_info_obsolete(struct snd_mixer_oss_file *fmixer,
_old_mixer_info __user *_info)
static int snd_mixer_oss_caps(struct snd_mixer_oss_file *fmixer)
static int snd_mixer_oss_devmask(struct snd_mixer_oss_file *fmixer)
static int snd_mixer_oss_stereodevs(struct snd_mixer_oss_file *fmixer)
static int snd_mixer_oss_recmask(struct snd_mixer_oss_file *fmixer)
static int snd_mixer_oss_get_recsrc(struct snd_mixer_oss_file *fmixer)
static int snd_mixer_oss_set_recsrc(struct snd_mixer_oss_file *fmixer, int recsrc)
static int snd_mixer_oss_get_volume(struct snd_mixer_oss_file *fmixer, int slot)
static int snd_mixer_oss_set_volume(struct snd_mixer_oss_file *fmixer,
int slot, int volume)
static int snd_mixer_oss_ioctl1(struct snd_mixer_oss_file *fmixer, unsigned int cmd, unsigned long arg)
static long snd_mixer_oss_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
int snd_mixer_oss_ioctl_card(struct snd_card *card, unsigned int cmd, unsigned long arg)
#define snd_mixer_oss_ioctl_compat	snd_mixer_oss_ioctl
#define snd_mixer_oss_ioctl_compat	NULL
static const struct file_operations snd_mixer_oss_f_ops =
;
static long snd_mixer_oss_conv(long val, long omin, long omax, long nmin, long nmax)
static long snd_mixer_oss_conv1(long val, long min, long max, int *old)
static long snd_mixer_oss_conv2(long val, long min, long max)
#define SNDRV_MIXER_OSS_SIGNATURE		0x65999250
#define SNDRV_MIXER_OSS_ITEM_GLOBAL	0
#define SNDRV_MIXER_OSS_ITEM_GSWITCH	1
#define SNDRV_MIXER_OSS_ITEM_GROUTE	2
#define SNDRV_MIXER_OSS_ITEM_GVOLUME	3
#define SNDRV_MIXER_OSS_ITEM_PSWITCH	4
#define SNDRV_MIXER_OSS_ITEM_PROUTE	5
#define SNDRV_MIXER_OSS_ITEM_PVOLUME	6
#define SNDRV_MIXER_OSS_ITEM_CSWITCH	7
#define SNDRV_MIXER_OSS_ITEM_CROUTE	8
#define SNDRV_MIXER_OSS_ITEM_CVOLUME	9
#define SNDRV_MIXER_OSS_ITEM_CAPTURE	10
#define SNDRV_MIXER_OSS_ITEM_COUNT	11
#define SNDRV_MIXER_OSS_PRESENT_GLOBAL	(1<<0)
#define SNDRV_MIXER_OSS_PRESENT_GSWITCH	(1<<1)
#define SNDRV_MIXER_OSS_PRESENT_GROUTE	(1<<2)
#define SNDRV_MIXER_OSS_PRESENT_GVOLUME	(1<<3)
#define SNDRV_MIXER_OSS_PRESENT_PSWITCH	(1<<4)
#define SNDRV_MIXER_OSS_PRESENT_PROUTE	(1<<5)
#define SNDRV_MIXER_OSS_PRESENT_PVOLUME	(1<<6)
#define SNDRV_MIXER_OSS_PRESENT_CSWITCH	(1<<7)
#define SNDRV_MIXER_OSS_PRESENT_CROUTE	(1<<8)
#define SNDRV_MIXER_OSS_PRESENT_CVOLUME	(1<<9)
#define SNDRV_MIXER_OSS_PRESENT_CAPTURE	(1<<10)
struct slot ;
#define ID_UNKNOWN	((unsigned int)-1)
static struct snd_kcontrol *snd_mixer_oss_test_id(struct snd_mixer_oss *mixer, const char *name, int index)
static void snd_mixer_oss_get_volume1_vol(struct snd_mixer_oss_file *fmixer,
struct snd_mixer_oss_slot *pslot,
unsigned int numid,
int *left, int *right)
static void snd_mixer_oss_get_volume1_sw(struct snd_mixer_oss_file *fmixer,
struct snd_mixer_oss_slot *pslot,
unsigned int numid,
int *left, int *right,
int route)
static int snd_mixer_oss_get_volume1(struct snd_mixer_oss_file *fmixer,
struct snd_mixer_oss_slot *pslot,
int *left, int *right)
static void snd_mixer_oss_put_volume1_vol(struct snd_mixer_oss_file *fmixer,
struct snd_mixer_oss_slot *pslot,
unsigned int numid,
int left, int right)
static void snd_mixer_oss_put_volume1_sw(struct snd_mixer_oss_file *fmixer,
struct snd_mixer_oss_slot *pslot,
unsigned int numid,
int left, int right,
int route)
static int snd_mixer_oss_put_volume1(struct snd_mixer_oss_file *fmixer,
struct snd_mixer_oss_slot *pslot,
int left, int right)
static int snd_mixer_oss_get_recsrc1_sw(struct snd_mixer_oss_file *fmixer,
struct snd_mixer_oss_slot *pslot,
int *active)
static int snd_mixer_oss_get_recsrc1_route(struct snd_mixer_oss_file *fmixer,
struct snd_mixer_oss_slot *pslot,
int *active)
static int snd_mixer_oss_put_recsrc1_sw(struct snd_mixer_oss_file *fmixer,
struct snd_mixer_oss_slot *pslot,
int active)
static int snd_mixer_oss_put_recsrc1_route(struct snd_mixer_oss_file *fmixer,
struct snd_mixer_oss_slot *pslot,
int active)
static int snd_mixer_oss_get_recsrc2(struct snd_mixer_oss_file *fmixer, unsigned int *active_index)
static int snd_mixer_oss_put_recsrc2(struct snd_mixer_oss_file *fmixer, unsigned int active_index)
struct snd_mixer_oss_assign_table ;
static int snd_mixer_oss_build_test(struct snd_mixer_oss *mixer, struct slot *slot, const char *name, int index, int item)
static void snd_mixer_oss_slot_free(struct snd_mixer_oss_slot *chn)
static void mixer_slot_clear(struct snd_mixer_oss_slot *rslot)
static int snd_mixer_oss_build_test_all(struct snd_mixer_oss *mixer,
struct snd_mixer_oss_assign_table *ptr,
struct slot *slot)
static int snd_mixer_oss_build_input(struct snd_mixer_oss *mixer, struct snd_mixer_oss_assign_table *ptr, int ptr_allocated, int replace_old)
#define MIXER_VOL(name) [SOUND_MIXER_##name] = #name
static char *oss_mixer_names[SNDRV_OSS_MAX_MIXERS] = ;
static void snd_mixer_oss_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_mixer_oss_proc_write(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_mixer_oss_proc_init(struct snd_mixer_oss *mixer)
static void snd_mixer_oss_proc_done(struct snd_mixer_oss *mixer)
#define snd_mixer_oss_proc_init(mix)
#define snd_mixer_oss_proc_done(mix)
static void snd_mixer_oss_build(struct snd_mixer_oss *mixer)
static int snd_mixer_oss_free1(void *private)
static int snd_mixer_oss_notify_handler(struct snd_card *card, int cmd)
static int __init alsa_mixer_oss_init(void)
static void __exit alsa_mixer_oss_exit(void)
module_init(alsa_mixer_oss_init)
module_exit(alsa_mixer_oss_exit)
EXPORT_SYMBOL(snd_mixer_oss_ioctl_card);
