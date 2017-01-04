#define SSB_VERBOSE_SDIOCORESWITCH_DEBUG		0
#define SSB_SDIO_CIS			0x80
#define  SSB_SDIO_CIS_SROMREV		0x00
#define  SSB_SDIO_CIS_ID		0x01
#define  SSB_SDIO_CIS_BOARDREV		0x02
#define  SSB_SDIO_CIS_PA		0x03
#define   SSB_SDIO_CIS_PA_PA0B0_LO	0
#define   SSB_SDIO_CIS_PA_PA0B0_HI	1
#define   SSB_SDIO_CIS_PA_PA0B1_LO	2
#define   SSB_SDIO_CIS_PA_PA0B1_HI	3
#define   SSB_SDIO_CIS_PA_PA0B2_LO	4
#define   SSB_SDIO_CIS_PA_PA0B2_HI	5
#define   SSB_SDIO_CIS_PA_ITSSI		6
#define   SSB_SDIO_CIS_PA_MAXPOW	7
#define  SSB_SDIO_CIS_OEMNAME		0x04
#define  SSB_SDIO_CIS_CCODE		0x05
#define  SSB_SDIO_CIS_ANTENNA		0x06
#define  SSB_SDIO_CIS_ANTGAIN		0x07
#define  SSB_SDIO_CIS_BFLAGS		0x08
#define  SSB_SDIO_CIS_LEDS		0x09
#define CISTPL_FUNCE_LAN_NODE_ID        0x04
#define SBSDIO_FUNC1_SBADDRLOW	0x1000a
#define SBSDIO_FUNC1_SBADDRMID	0x1000b
#define SBSDIO_FUNC1_SBADDRHIGH	0x1000c
#define SBSDIO_SBADDRLOW_MASK	0x80
#define SBSDIO_SBADDRMID_MASK	0xff
#define SBSDIO_SBADDRHIGH_MASK	0xff
#define SBSDIO_SB_OFT_ADDR_MASK	0x7FFF
#define SBSDIO_SB_ACCESS_2_4B_FLAG	0x8000
static inline struct device *ssb_sdio_dev(struct ssb_bus *bus)
static int ssb_sdio_writeb(struct ssb_bus *bus, unsigned int addr, u8 val)
static int ssb_sdio_set_sbaddr_window(struct ssb_bus *bus, u32 address)
u32 ssb_sdio_scan_read32(struct ssb_bus *bus, u16 offset)
int ssb_sdio_scan_switch_coreidx(struct ssb_bus *bus, u8 coreidx)
int ssb_sdio_switch_core(struct ssb_bus *bus, struct ssb_device *dev)
static u8 ssb_sdio_read8(struct ssb_device *dev, u16 offset)
static u16 ssb_sdio_read16(struct ssb_device *dev, u16 offset)
static u32 ssb_sdio_read32(struct ssb_device *dev, u16 offset)
static void ssb_sdio_block_read(struct ssb_device *dev, void *buffer,
size_t count, u16 offset, u8 reg_width)
static void ssb_sdio_write8(struct ssb_device *dev, u16 offset, u8 val)
static void ssb_sdio_write16(struct ssb_device *dev, u16 offset, u16 val)
static void ssb_sdio_write32(struct ssb_device *dev, u16 offset, u32 val)
static void ssb_sdio_block_write(struct ssb_device *dev, const void *buffer,
size_t count, u16 offset, u8 reg_width)
const struct ssb_bus_ops ssb_sdio_ops = ;
#define GOTO_ERROR_ON(condition, description) do  while (0)
int ssb_sdio_get_invariants(struct ssb_bus *bus,
struct ssb_init_invariants *iv)
void ssb_sdio_exit(struct ssb_bus *bus)
int ssb_sdio_init(struct ssb_bus *bus)
