#define SSB_VERBOSE_PCMCIACORESWITCH_DEBUG		0
#define SSB_PCMCIA_ADDRESS0		0x2E
#define SSB_PCMCIA_ADDRESS1		0x30
#define SSB_PCMCIA_ADDRESS2		0x32
#define SSB_PCMCIA_MEMSEG		0x34
#define SSB_PCMCIA_SPROMCTL		0x36
#define  SSB_PCMCIA_SPROMCTL_IDLE	0
#define  SSB_PCMCIA_SPROMCTL_WRITE	1
#define  SSB_PCMCIA_SPROMCTL_READ	2
#define  SSB_PCMCIA_SPROMCTL_WRITEEN	4
#define  SSB_PCMCIA_SPROMCTL_WRITEDIS	7
#define  SSB_PCMCIA_SPROMCTL_DONE	8
#define SSB_PCMCIA_SPROM_DATALO		0x38
#define SSB_PCMCIA_SPROM_DATAHI		0x3A
#define SSB_PCMCIA_SPROM_ADDRLO		0x3C
#define SSB_PCMCIA_SPROM_ADDRHI		0x3E
#define SSB_PCMCIA_CIS			0x80
#define  SSB_PCMCIA_CIS_ID		0x01
#define  SSB_PCMCIA_CIS_BOARDREV	0x02
#define  SSB_PCMCIA_CIS_PA		0x03
#define   SSB_PCMCIA_CIS_PA_PA0B0_LO	0
#define   SSB_PCMCIA_CIS_PA_PA0B0_HI	1
#define   SSB_PCMCIA_CIS_PA_PA0B1_LO	2
#define   SSB_PCMCIA_CIS_PA_PA0B1_HI	3
#define   SSB_PCMCIA_CIS_PA_PA0B2_LO	4
#define   SSB_PCMCIA_CIS_PA_PA0B2_HI	5
#define   SSB_PCMCIA_CIS_PA_ITSSI	6
#define   SSB_PCMCIA_CIS_PA_MAXPOW	7
#define  SSB_PCMCIA_CIS_OEMNAME		0x04
#define  SSB_PCMCIA_CIS_CCODE		0x05
#define  SSB_PCMCIA_CIS_ANTENNA		0x06
#define  SSB_PCMCIA_CIS_ANTGAIN		0x07
#define  SSB_PCMCIA_CIS_BFLAGS		0x08
#define  SSB_PCMCIA_CIS_LEDS		0x09
#define SSB_PCMCIA_SPROM_SIZE		256
#define SSB_PCMCIA_SPROM_SIZE_BYTES	(SSB_PCMCIA_SPROM_SIZE * sizeof(u16))
static int ssb_pcmcia_cfg_write(struct ssb_bus *bus, u8 offset, u8 value)
static int ssb_pcmcia_cfg_read(struct ssb_bus *bus, u8 offset, u8 *value)
int ssb_pcmcia_switch_coreidx(struct ssb_bus *bus,
u8 coreidx)
int ssb_pcmcia_switch_core(struct ssb_bus *bus,
struct ssb_device *dev)
int ssb_pcmcia_switch_segment(struct ssb_bus *bus, u8 seg)
static int select_core_and_segment(struct ssb_device *dev,
u16 *offset)
static u8 ssb_pcmcia_read8(struct ssb_device *dev, u16 offset)
static u16 ssb_pcmcia_read16(struct ssb_device *dev, u16 offset)
static u32 ssb_pcmcia_read32(struct ssb_device *dev, u16 offset)
static void ssb_pcmcia_block_read(struct ssb_device *dev, void *buffer,
size_t count, u16 offset, u8 reg_width)
static void ssb_pcmcia_write8(struct ssb_device *dev, u16 offset, u8 value)
static void ssb_pcmcia_write16(struct ssb_device *dev, u16 offset, u16 value)
static void ssb_pcmcia_write32(struct ssb_device *dev, u16 offset, u32 value)
static void ssb_pcmcia_block_write(struct ssb_device *dev, const void *buffer,
size_t count, u16 offset, u8 reg_width)
const struct ssb_bus_ops ssb_pcmcia_ops = ;
static int ssb_pcmcia_sprom_command(struct ssb_bus *bus, u8 command)
static int ssb_pcmcia_sprom_read(struct ssb_bus *bus, u16 offset, u16 *value)
static int ssb_pcmcia_sprom_write(struct ssb_bus *bus, u16 offset, u16 value)
static int ssb_pcmcia_sprom_read_all(struct ssb_bus *bus, u16 *sprom)
static int ssb_pcmcia_sprom_write_all(struct ssb_bus *bus, const u16 *sprom)
static int ssb_pcmcia_sprom_check_crc(const u16 *sprom, size_t size)
#define GOTO_ERROR_ON(condition, description) do  while (0)
static int ssb_pcmcia_get_mac(struct pcmcia_device *p_dev,
tuple_t *tuple,
void *priv)
;
static int ssb_pcmcia_do_get_invariants(struct pcmcia_device *p_dev,
tuple_t *tuple,
void *priv)
int ssb_pcmcia_get_invariants(struct ssb_bus *bus,
struct ssb_init_invariants *iv)
static ssize_t ssb_pcmcia_attr_sprom_show(struct device *pcmciadev,
struct device_attribute *attr,
char *buf)
static ssize_t ssb_pcmcia_attr_sprom_store(struct device *pcmciadev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(ssb_sprom, 0600,
ssb_pcmcia_attr_sprom_show,
ssb_pcmcia_attr_sprom_store);
static int ssb_pcmcia_cor_setup(struct ssb_bus *bus, u8 cor)
int ssb_pcmcia_hardware_setup(struct ssb_bus *bus)
void ssb_pcmcia_exit(struct ssb_bus *bus)
int ssb_pcmcia_init(struct ssb_bus *bus)
