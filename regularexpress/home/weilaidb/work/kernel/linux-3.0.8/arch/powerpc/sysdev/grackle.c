#define GRACKLE_CFA(b, d, o)	(0x80 | ((b) << 8) | ((d) << 16) \
| (((o) & ~3) << 24))
#define GRACKLE_PICR1_STG		0x00000040
#define GRACKLE_PICR1_LOOPSNOOP		0x00000010
static inline void grackle_set_stg(struct pci_controller* bp, int enable)
static inline void grackle_set_loop_snoop(struct pci_controller *bp, int enable)
void __init setup_grackle(struct pci_controller *hose)
