int ssb_watchdog_timer_set(struct ssb_bus *bus, u32 ticks)
EXPORT_SYMBOL(ssb_watchdog_timer_set);
u32 ssb_gpio_in(struct ssb_bus *bus, u32 mask)
EXPORT_SYMBOL(ssb_gpio_in);
u32 ssb_gpio_out(struct ssb_bus *bus, u32 mask, u32 value)
EXPORT_SYMBOL(ssb_gpio_out);
u32 ssb_gpio_outen(struct ssb_bus *bus, u32 mask, u32 value)
EXPORT_SYMBOL(ssb_gpio_outen);
u32 ssb_gpio_control(struct ssb_bus *bus, u32 mask, u32 value)
EXPORT_SYMBOL(ssb_gpio_control);
u32 ssb_gpio_intmask(struct ssb_bus *bus, u32 mask, u32 value)
EXPORT_SYMBOL(ssb_gpio_intmask);
u32 ssb_gpio_polarity(struct ssb_bus *bus, u32 mask, u32 value)
EXPORT_SYMBOL(ssb_gpio_polarity);
static int gige_pci_init_callback(struct ssb_bus *bus, unsigned long data)
int ssb_pcibios_plat_dev_init(struct pci_dev *dev)
static int gige_map_irq_callback(struct ssb_bus *bus, unsigned long data)
int ssb_pcibios_map_irq(const struct pci_dev *dev, u8 slot, u8 pin)
