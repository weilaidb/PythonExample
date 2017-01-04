#define	_CS5536_VSM_H
typedef void (*cs5536_pci_vsm_write)(int reg, u32 value);
typedef u32 (*cs5536_pci_vsm_read)(int reg);
#define DECLARE_CS5536_MODULE(name) \
extern void pci_##name##_write_reg(int reg, u32 value); \
extern u32 pci_##name##_read_reg(int reg);
DECLARE_CS5536_MODULE(ide)
DECLARE_CS5536_MODULE(acc)
DECLARE_CS5536_MODULE(ohci)
DECLARE_CS5536_MODULE(isa)
DECLARE_CS5536_MODULE(ehci)