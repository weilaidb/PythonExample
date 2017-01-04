static int index = -1;
module_param(index, int, 0444);
MODULE_PARM_DESC(index, "index for AOA sound card.");
static struct aoa_card *aoa_card;
int aoa_alsa_init(char *name, struct module *mod, struct device *dev)
struct snd_card *aoa_get_card(void)
EXPORT_SYMBOL_GPL(aoa_get_card);
void aoa_alsa_cleanup(void)
int aoa_snd_device_new(snd_device_type_t type,
void * device_data, struct snd_device_ops * ops)
EXPORT_SYMBOL_GPL(aoa_snd_device_new);
int aoa_snd_ctl_add(struct snd_kcontrol* control)
EXPORT_SYMBOL_GPL(aoa_snd_ctl_add);
