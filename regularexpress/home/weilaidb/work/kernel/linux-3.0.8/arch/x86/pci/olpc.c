static const uint32_t lxnb_hdr[] = ;
static const uint32_t gxnb_hdr[] = ;
static const uint32_t lxfb_hdr[] = ;
static const uint32_t gxfb_hdr[] = ;
static const uint32_t aes_hdr[] = ;
static const uint32_t isa_hdr[] = ;
static const uint32_t ac97_hdr[] = ;
static const uint32_t ohci_hdr[] = ;
static const uint32_t ehci_hdr[] = ;
static uint32_t ff_loc = ~0;
static uint32_t zero_loc;
static int bar_probing;
static int is_lx;
#define NB_SLOT 0x1
#define SB_SLOT 0xf
static int is_simulated(unsigned int bus, unsigned int devfn)
static uint32_t *hdr_addr(const uint32_t *hdr, int reg)
static int pci_olpc_read(unsigned int seg, unsigned int bus,
unsigned int devfn, int reg, int len, uint32_t *value)
static int pci_olpc_write(unsigned int seg, unsigned int bus,
unsigned int devfn, int reg, int len, uint32_t value)
static struct pci_raw_ops pci_olpc_conf = ;
int __init pci_olpc_init(void)
