#define PHYS_EMI_CBLOCK		P4SEGADDR(0x1ec00000)
#define PHYS_EMI_DBLOCK		P4SEGADDR(0x08000000)
#define PHYS_FEMI_CBLOCK	P4SEGADDR(0x1f800000)
#define PHYS_FEMI_DBLOCK	P4SEGADDR(0x00000000)
#define PHYS_EPBR_BLOCK		P4SEGADDR(0x1de00000)
#define PHYS_DMAC_BLOCK		P4SEGADDR(0x1fa00000)
#define PHYS_PBR_BLOCK		P4SEGADDR(0x1fc00000)
static struct resource emi_resources[] = ;
static struct superhyway_device emi_device = ;
static struct resource femi_resources[] = ;
static struct superhyway_device femi_device = ;
static struct resource epbr_resources[] = ;
static struct superhyway_device epbr_device = ;
static struct resource dmac_resource = ;
static struct superhyway_device dmac_device = ;
static struct resource pbr_resources[] = ;
static struct superhyway_device pbr_device = ;
static struct superhyway_device *sh4202_devices[] __initdata = ;
static int sh4202_read_vcr(unsigned long base, struct superhyway_vcr_info *vcr)
static int sh4202_write_vcr(unsigned long base, struct superhyway_vcr_info vcr)
static struct superhyway_ops sh4202_superhyway_ops = ;
struct superhyway_bus superhyway_channels[] = ;
int __init superhyway_scan_bus(struct superhyway_bus *bus)
