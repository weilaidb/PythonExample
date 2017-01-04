int edac_mce_enabled;
EXPORT_SYMBOL_GPL(edac_mce_enabled);
static LIST_HEAD(edac_mce_list);
static DEFINE_MUTEX(edac_mce_lock);
int edac_mce_register(struct edac_mce *edac_mce)
EXPORT_SYMBOL(edac_mce_register);
void edac_mce_unregister(struct edac_mce *edac_mce)
EXPORT_SYMBOL(edac_mce_unregister);
int edac_mce_parse(struct mce *mce)
EXPORT_SYMBOL_GPL(edac_mce_parse);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@redhat.com>");
MODULE_AUTHOR("Red Hat Inc. (http:
MODULE_DESCRIPTION("EDAC Driver for mcelog captured errors");
