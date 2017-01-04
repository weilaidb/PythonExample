#if defined(CONFIG_EDAC_MCE) || \
(defined(CONFIG_EDAC_MCE_MODULE) && defined(MODULE))
struct edac_mce ;
int edac_mce_register(struct edac_mce *edac_mce);
void edac_mce_unregister(struct edac_mce *edac_mce);
int edac_mce_parse(struct mce *mce);
#define edac_mce_parse(mce) (0)
