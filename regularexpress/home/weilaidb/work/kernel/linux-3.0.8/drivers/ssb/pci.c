#define SSB_VERBOSE_PCICORESWITCH_DEBUG		0
int ssb_pci_switch_coreidx(struct ssb_bus *bus, u8 coreidx)
int ssb_pci_switch_core(struct ssb_bus *bus,
struct ssb_device *dev)
int ssb_pci_xtal(struct ssb_bus *bus, u32 what, int turn_on)
#define SPOFF(offset)	((offset) / sizeof(u16))
#define SPEX16(_outvar, _offset, _mask, _shift)	\
out->_outvar = ((in[SPOFF(_offset)] & (_mask)) >> (_shift))
#define SPEX32(_outvar, _offset, _mask, _shift)	\
out->_outvar = ((((u32)in[SPOFF((_offset)+2)] << 16 | \
in[SPOFF(_offset)]) & (_mask)) >> (_shift))
#define SPEX(_outvar, _offset, _mask, _shift) \
SPEX16(_outvar, _offset, _mask, _shift)
static inline u8 ssb_crc8(u8 crc, u8 data)
static u8 ssb_sprom_crc(const u16 *sprom, u16 size)
static int sprom_check_crc(const u16 *sprom, size_t size)
static int sprom_do_read(struct ssb_bus *bus, u16 *sprom)
static int sprom_do_write(struct ssb_bus *bus, const u16 *sprom)
static s8 r123_extract_antgain(u8 sprom_revision, const u16 *in,
u16 mask, u16 shift)
static void sprom_extract_r123(struct ssb_sprom *out, const u16 *in)
static void sprom_extract_r458(struct ssb_sprom *out, const u16 *in)
static void sprom_extract_r45(struct ssb_sprom *out, const u16 *in)
static void sprom_extract_r8(struct ssb_sprom *out, const u16 *in)
static int sprom_extract(struct ssb_bus *bus, struct ssb_sprom *out,
const u16 *in, u16 size)
static int ssb_pci_sprom_get(struct ssb_bus *bus,
struct ssb_sprom *sprom)
static void ssb_pci_get_boardinfo(struct ssb_bus *bus,
struct ssb_boardinfo *bi)
int ssb_pci_get_invariants(struct ssb_bus *bus,
struct ssb_init_invariants *iv)
static int ssb_pci_assert_buspower(struct ssb_bus *bus)
static inline int ssb_pci_assert_buspower(struct ssb_bus *bus)
static u8 ssb_pci_read8(struct ssb_device *dev, u16 offset)
static u16 ssb_pci_read16(struct ssb_device *dev, u16 offset)
static u32 ssb_pci_read32(struct ssb_device *dev, u16 offset)
static void ssb_pci_block_read(struct ssb_device *dev, void *buffer,
size_t count, u16 offset, u8 reg_width)
static void ssb_pci_write8(struct ssb_device *dev, u16 offset, u8 value)
static void ssb_pci_write16(struct ssb_device *dev, u16 offset, u16 value)
static void ssb_pci_write32(struct ssb_device *dev, u16 offset, u32 value)
static void ssb_pci_block_write(struct ssb_device *dev, const void *buffer,
size_t count, u16 offset, u8 reg_width)
const struct ssb_bus_ops ssb_pci_ops = ;
static ssize_t ssb_pci_attr_sprom_show(struct device *pcidev,
struct device_attribute *attr,
char *buf)
static ssize_t ssb_pci_attr_sprom_store(struct device *pcidev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(ssb_sprom, 0600,
ssb_pci_attr_sprom_show,
ssb_pci_attr_sprom_store);
void ssb_pci_exit(struct ssb_bus *bus)
int ssb_pci_init(struct ssb_bus *bus)
