static int(*get_fallback_sprom)(struct ssb_bus *dev, struct ssb_sprom *out);
static int sprom2hex(const u16 *sprom, char *buf, size_t buf_len,
size_t sprom_size_words)
static int hex2sprom(u16 *sprom, const char *dump, size_t len,
size_t sprom_size_words)
ssize_t ssb_attr_sprom_show(struct ssb_bus *bus, char *buf,
int (*sprom_read)(struct ssb_bus *bus, u16 *sprom))
ssize_t ssb_attr_sprom_store(struct ssb_bus *bus,
const char *buf, size_t count,
int (*sprom_check_crc)(const u16 *sprom, size_t size),
int (*sprom_write)(struct ssb_bus *bus, const u16 *sprom))
int ssb_arch_register_fallback_sprom(int (*sprom_callback)(struct ssb_bus *bus,
struct ssb_sprom *out))
int ssb_fill_sprom_with_fallback(struct ssb_bus *bus, struct ssb_sprom *out)
if (bus->bustype == SSB_BUSTYPE_PCI &&
bus->chipco.dev &&
bus->chipco.dev->id.revision >= 31)
return bus->chipco.capabilities & SSB_CHIPCO_CAP_SPROM;
return true;
}
