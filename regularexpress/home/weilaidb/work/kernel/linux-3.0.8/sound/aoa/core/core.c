MODULE_DESCRIPTION("Apple Onboard Audio Sound Driver");
MODULE_AUTHOR("Johannes Berg <johannes@sipsolutions.net>");
MODULE_LICENSE("GPL");
static struct aoa_fabric *fabric;
static LIST_HEAD(codec_list);
static int attach_codec_to_fabric(struct aoa_codec *c)
int aoa_codec_register(struct aoa_codec *codec)
EXPORT_SYMBOL_GPL(aoa_codec_register);
void aoa_codec_unregister(struct aoa_codec *codec)
EXPORT_SYMBOL_GPL(aoa_codec_unregister);
int aoa_fabric_register(struct aoa_fabric *new_fabric, struct device *dev)
EXPORT_SYMBOL_GPL(aoa_fabric_register);
void aoa_fabric_unregister(struct aoa_fabric *old_fabric)
EXPORT_SYMBOL_GPL(aoa_fabric_unregister);
void aoa_fabric_unlink_codec(struct aoa_codec *codec)
EXPORT_SYMBOL_GPL(aoa_fabric_unlink_codec);
static int __init aoa_init(void)
static void __exit aoa_exit(void)
module_init(aoa_init);
module_exit(aoa_exit);
