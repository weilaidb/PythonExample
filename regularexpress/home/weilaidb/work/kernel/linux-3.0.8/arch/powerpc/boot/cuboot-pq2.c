#define TARGET_CPM2
#define TARGET_HAS_ETH1
static bd_t bd;
struct cs_range ;
struct pci_range ;
struct cs_range cs_ranges_buf[MAX_PROP_LEN / sizeof(struct cs_range)];
struct pci_range pci_ranges_buf[MAX_PROP_LEN / sizeof(struct pci_range)];
static void update_cs_ranges(void)
static void fixup_pci(void)
static void pq2_platform_fixups(void)
void platform_init(unsigned long r3, unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7)
