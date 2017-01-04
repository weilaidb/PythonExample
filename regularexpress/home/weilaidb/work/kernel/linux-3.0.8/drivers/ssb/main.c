MODULE_DESCRIPTION("Sonics Silicon Backplane driver");
MODULE_LICENSE("GPL");
static LIST_HEAD(attach_queue);
static LIST_HEAD(buses);
static unsigned int next_busnumber;
static DEFINE_MUTEX(buses_mutex);
static bool ssb_is_early_boot = 1;
static void ssb_buses_lock(void);
static void ssb_buses_unlock(void);
struct ssb_bus *ssb_pci_dev_to_bus(struct pci_dev *pdev)
struct ssb_bus *ssb_pcmcia_dev_to_bus(struct pcmcia_device *pdev)
struct ssb_bus *ssb_sdio_func_to_bus(struct sdio_func *func)
int ssb_for_each_bus_call(unsigned long data,
int (*func)(struct ssb_bus *bus, unsigned long data))
static struct ssb_device *ssb_device_get(struct ssb_device *dev)
static void ssb_device_put(struct ssb_device *dev)
static inline struct ssb_driver *ssb_driver_get(struct ssb_driver *drv)
static inline void ssb_driver_put(struct ssb_driver *drv)
static int ssb_device_resume(struct device *dev)
static int ssb_device_suspend(struct device *dev, pm_message_t state)
int ssb_bus_resume(struct ssb_bus *bus)
EXPORT_SYMBOL(ssb_bus_resume);
int ssb_bus_suspend(struct ssb_bus *bus)
EXPORT_SYMBOL(ssb_bus_suspend);
int ssb_devices_freeze(struct ssb_bus *bus, struct ssb_freeze_context *ctx)
int ssb_devices_thaw(struct ssb_freeze_context *ctx)
static void ssb_device_shutdown(struct device *dev)
static int ssb_device_remove(struct device *dev)
static int ssb_device_probe(struct device *dev)
static int ssb_match_devid(const struct ssb_device_id *tabid,
const struct ssb_device_id *devid)
static int ssb_bus_match(struct device *dev, struct device_driver *drv)
static int ssb_device_uevent(struct device *dev, struct kobj_uevent_env *env)
#define ssb_config_attr(attrib, field, format_string) \
static ssize_t \
attrib##_show(struct device *dev, struct device_attribute *attr, char *buf) \
ssb_config_attr(core_num, core_index, "%u\n")
ssb_config_attr(coreid, id.coreid, "0x%04x\n")
ssb_config_attr(vendor, id.vendor, "0x%04x\n")
ssb_config_attr(revision, id.revision, "%u\n")
ssb_config_attr(irq, irq, "%u\n")
static ssize_t
name_show(struct device *dev, struct device_attribute *attr, char *buf)
static struct device_attribute ssb_device_attrs[] = ;
static struct bus_type ssb_bustype = ;
static void ssb_buses_lock(void)
static void ssb_buses_unlock(void)
static void ssb_devices_unregister(struct ssb_bus *bus)
void ssb_bus_unregister(struct ssb_bus *bus)
EXPORT_SYMBOL(ssb_bus_unregister);
static void ssb_release_dev(struct device *dev)
static int ssb_devices_register(struct ssb_bus *bus)
static int ssb_attach_queued_buses(void)
static u8 ssb_ssb_read8(struct ssb_device *dev, u16 offset)
static u16 ssb_ssb_read16(struct ssb_device *dev, u16 offset)
static u32 ssb_ssb_read32(struct ssb_device *dev, u16 offset)
static void ssb_ssb_block_read(struct ssb_device *dev, void *buffer,
size_t count, u16 offset, u8 reg_width)
static void ssb_ssb_write8(struct ssb_device *dev, u16 offset, u8 value)
static void ssb_ssb_write16(struct ssb_device *dev, u16 offset, u16 value)
static void ssb_ssb_write32(struct ssb_device *dev, u16 offset, u32 value)
static void ssb_ssb_block_write(struct ssb_device *dev, const void *buffer,
size_t count, u16 offset, u8 reg_width)
static const struct ssb_bus_ops ssb_ssb_ops = ;
static int ssb_fetch_invariants(struct ssb_bus *bus,
ssb_invariants_func_t get_invariants)
static int ssb_bus_register(struct ssb_bus *bus,
ssb_invariants_func_t get_invariants,
unsigned long baseaddr)
int ssb_bus_pcibus_register(struct ssb_bus *bus,
struct pci_dev *host_pci)
EXPORT_SYMBOL(ssb_bus_pcibus_register);
int ssb_bus_pcmciabus_register(struct ssb_bus *bus,
struct pcmcia_device *pcmcia_dev,
unsigned long baseaddr)
EXPORT_SYMBOL(ssb_bus_pcmciabus_register);
int ssb_bus_sdiobus_register(struct ssb_bus *bus, struct sdio_func *func,
unsigned int quirks)
EXPORT_SYMBOL(ssb_bus_sdiobus_register);
int ssb_bus_ssbbus_register(struct ssb_bus *bus,
unsigned long baseaddr,
ssb_invariants_func_t get_invariants)
int __ssb_driver_register(struct ssb_driver *drv, struct module *owner)
EXPORT_SYMBOL(__ssb_driver_register);
void ssb_driver_unregister(struct ssb_driver *drv)
EXPORT_SYMBOL(ssb_driver_unregister);
void ssb_set_devtypedata(struct ssb_device *dev, void *data)
EXPORT_SYMBOL(ssb_set_devtypedata);
static u32 clkfactor_f6_resolve(u32 v)
u32 ssb_calc_clock_rate(u32 plltype, u32 n, u32 m)
u32 ssb_clockspeed(struct ssb_bus *bus)
EXPORT_SYMBOL(ssb_clockspeed);
static u32 ssb_tmslow_reject_bitmask(struct ssb_device *dev)
int ssb_device_is_enabled(struct ssb_device *dev)
EXPORT_SYMBOL(ssb_device_is_enabled);
static void ssb_flush_tmslow(struct ssb_device *dev)
void ssb_device_enable(struct ssb_device *dev, u32 core_specific_flags)
EXPORT_SYMBOL(ssb_device_enable);
static int ssb_wait_bits(struct ssb_device *dev, u16 reg, u32 bitmask,
int timeout, int set)
void ssb_device_disable(struct ssb_device *dev, u32 core_specific_flags)
EXPORT_SYMBOL(ssb_device_disable);
u32 ssb_dma_translation(struct ssb_device *dev)
EXPORT_SYMBOL(ssb_dma_translation);
int ssb_bus_may_powerdown(struct ssb_bus *bus)
EXPORT_SYMBOL(ssb_bus_may_powerdown);
int ssb_bus_powerup(struct ssb_bus *bus, bool dynamic_pctl)
EXPORT_SYMBOL(ssb_bus_powerup);
static void ssb_broadcast_value(struct ssb_device *dev,
u32 address, u32 data)
void ssb_commit_settings(struct ssb_bus *bus)
EXPORT_SYMBOL(ssb_commit_settings);
u32 ssb_admatch_base(u32 adm)
EXPORT_SYMBOL(ssb_admatch_base);
u32 ssb_admatch_size(u32 adm)
EXPORT_SYMBOL(ssb_admatch_size);
static int __init ssb_modinit(void)
fs_initcall(ssb_modinit);
static void __exit ssb_modexit(void)
module_exit(ssb_modexit)
