MODULE_AUTHOR("Clemens Ladisch <clemens@ladisch.de>");
MODULE_DESCRIPTION("C-Media CMI8788 helper library");
MODULE_LICENSE("GPL v2");
#define DRIVER "oxygen"
static inline int oxygen_uart_input_ready(struct oxygen *chip)
static void oxygen_read_uart(struct oxygen *chip)
static irqreturn_t oxygen_interrupt(int dummy, void *dev_id)
static void oxygen_spdif_input_bits_changed(struct work_struct *work)
static void oxygen_gpio_changed(struct work_struct *work)
static void oxygen_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void oxygen_proc_init(struct oxygen *chip)
#define oxygen_proc_init(chip)
static const struct pci_device_id *
oxygen_search_pci_id(struct oxygen *chip, const struct pci_device_id ids[])
static void oxygen_restore_eeprom(struct oxygen *chip,
const struct pci_device_id *id)
static void configure_pcie_bridge(struct pci_dev *pci)
static void oxygen_init(struct oxygen *chip)
static void oxygen_shutdown(struct oxygen *chip)
static void oxygen_card_free(struct snd_card *card)
int oxygen_pci_probe(struct pci_dev *pci, int index, char *id,
struct module *owner,
const struct pci_device_id *ids,
int (*get_model)(struct oxygen *chip,
const struct pci_device_id *id
)
)
EXPORT_SYMBOL(oxygen_pci_probe);
void oxygen_pci_remove(struct pci_dev *pci)
EXPORT_SYMBOL(oxygen_pci_remove);
int oxygen_pci_suspend(struct pci_dev *pci, pm_message_t state)
EXPORT_SYMBOL(oxygen_pci_suspend);
static const u32 registers_to_restore[OXYGEN_IO_SIZE / 32] = ;
static const u32 ac97_registers_to_restore[2][0x40 / 32] = ;
static inline int is_bit_set(const u32 *bitmap, unsigned int bit)
static void oxygen_restore_ac97(struct oxygen *chip, unsigned int codec)
int oxygen_pci_resume(struct pci_dev *pci)
EXPORT_SYMBOL(oxygen_pci_resume);
void oxygen_pci_shutdown(struct pci_dev *pci)
EXPORT_SYMBOL(oxygen_pci_shutdown);
