#define DEFAULT_DEBUG_LEVEL	2
#define DEFAULT_DEBUG_LEVEL	1
static int debug = DEFAULT_DEBUG_LEVEL;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Debug level (0 = disable)");
void release_and_free_resource(struct resource *res)
EXPORT_SYMBOL(release_and_free_resource);
static const char *sanity_file_name(const char *path)
#if defined(CONFIG_SND_DEBUG) || defined(CONFIG_SND_VERBOSE_PRINTK)
void __snd_printk(unsigned int level, const char *path, int line,
const char *format, ...)
EXPORT_SYMBOL_GPL(__snd_printk);
const struct snd_pci_quirk *
snd_pci_quirk_lookup_id(u16 vendor, u16 device,
const struct snd_pci_quirk *list)
EXPORT_SYMBOL(snd_pci_quirk_lookup_id);
const struct snd_pci_quirk *
snd_pci_quirk_lookup(struct pci_dev *pci, const struct snd_pci_quirk *list)
EXPORT_SYMBOL(snd_pci_quirk_lookup);
