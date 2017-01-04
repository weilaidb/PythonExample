MODULE_AUTHOR("Johannes Berg <johannes@sipsolutions.net>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("toonie codec driver for snd-aoa");
#define PFX "snd-aoa-codec-toonie: "
struct toonie ;
#define codec_to_toonie(c) container_of(c, struct toonie, codec)
static int toonie_dev_register(struct snd_device *dev)
static struct snd_device_ops ops = ;
static struct transfer_info toonie_transfers[] = ;
static int toonie_usable(struct codec_info_item *cii,
struct transfer_info *ti,
struct transfer_info *out)
static int toonie_suspend(struct codec_info_item *cii, pm_message_t state)
static int toonie_resume(struct codec_info_item *cii)
static struct codec_info toonie_codec_info = ;
static int toonie_init_codec(struct aoa_codec *codec)
static void toonie_exit_codec(struct aoa_codec *codec)
static struct toonie *toonie;
static int __init toonie_init(void)
static void __exit toonie_exit(void)
module_init(toonie_init);
module_exit(toonie_exit);
