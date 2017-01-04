inline void pcibios_penalize_isa_irq(int irq, int active)
#define SMALL_TAG_PNPVERNO		0x01
#define SMALL_TAG_LOGDEVID		0x02
#define SMALL_TAG_COMPATDEVID		0x03
#define SMALL_TAG_IRQ			0x04
#define SMALL_TAG_DMA			0x05
#define SMALL_TAG_STARTDEP		0x06
#define SMALL_TAG_ENDDEP		0x07
#define SMALL_TAG_PORT			0x08
#define SMALL_TAG_FIXEDPORT		0x09
#define SMALL_TAG_VENDOR		0x0e
#define SMALL_TAG_END			0x0f
#define LARGE_TAG			0x80
#define LARGE_TAG_MEM			0x81
#define LARGE_TAG_ANSISTR		0x82
#define LARGE_TAG_UNICODESTR		0x83
#define LARGE_TAG_VENDOR		0x84
#define LARGE_TAG_MEM32			0x85
#define LARGE_TAG_FIXEDMEM32		0x86
static void pnpbios_parse_allocated_ioresource(struct pnp_dev *dev,
int start, int len)
static void pnpbios_parse_allocated_memresource(struct pnp_dev *dev,
int start, int len)
static unsigned char *pnpbios_parse_allocated_resource_data(struct pnp_dev *dev,
unsigned char *p,
unsigned char *end)
static __init void pnpbios_parse_mem_option(struct pnp_dev *dev,
unsigned char *p, int size,
unsigned int option_flags)
static __init void pnpbios_parse_mem32_option(struct pnp_dev *dev,
unsigned char *p, int size,
unsigned int option_flags)
static __init void pnpbios_parse_fixed_mem32_option(struct pnp_dev *dev,
unsigned char *p, int size,
unsigned int option_flags)
static __init void pnpbios_parse_irq_option(struct pnp_dev *dev,
unsigned char *p, int size,
unsigned int option_flags)
static __init void pnpbios_parse_dma_option(struct pnp_dev *dev,
unsigned char *p, int size,
unsigned int option_flags)
static __init void pnpbios_parse_port_option(struct pnp_dev *dev,
unsigned char *p, int size,
unsigned int option_flags)
static __init void pnpbios_parse_fixed_port_option(struct pnp_dev *dev,
unsigned char *p, int size,
unsigned int option_flags)
static __init unsigned char *
pnpbios_parse_resource_option_data(unsigned char *p, unsigned char *end,
struct pnp_dev *dev)
static unsigned char *pnpbios_parse_compatible_ids(unsigned char *p,
unsigned char *end,
struct pnp_dev *dev)
static void pnpbios_encode_mem(struct pnp_dev *dev, unsigned char *p,
struct resource *res)
static void pnpbios_encode_mem32(struct pnp_dev *dev, unsigned char *p,
struct resource *res)
static void pnpbios_encode_fixed_mem32(struct pnp_dev *dev, unsigned char *p,
struct resource *res)
static void pnpbios_encode_irq(struct pnp_dev *dev, unsigned char *p,
struct resource *res)
static void pnpbios_encode_dma(struct pnp_dev *dev, unsigned char *p,
struct resource *res)
static void pnpbios_encode_port(struct pnp_dev *dev, unsigned char *p,
struct resource *res)
static void pnpbios_encode_fixed_port(struct pnp_dev *dev, unsigned char *p,
struct resource *res)
static unsigned char *pnpbios_encode_allocated_resource_data(struct pnp_dev
*dev,
unsigned char *p,
unsigned char *end)
int __init pnpbios_parse_data_stream(struct pnp_dev *dev,
struct pnp_bios_node *node)
int pnpbios_read_resources_from_node(struct pnp_dev *dev,
struct pnp_bios_node *node)
int pnpbios_write_resources_to_node(struct pnp_dev *dev,
struct pnp_bios_node *node)
