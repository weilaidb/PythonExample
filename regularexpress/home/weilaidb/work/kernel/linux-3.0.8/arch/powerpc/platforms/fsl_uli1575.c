#define ULI_PIRQA	0x08
#define ULI_PIRQB	0x09
#define ULI_PIRQC	0x0a
#define ULI_PIRQD	0x0b
#define ULI_PIRQE	0x0c
#define ULI_PIRQF	0x0d
#define ULI_PIRQG	0x0e
#define ULI_8259_NONE	0x00
#define ULI_8259_IRQ1	0x08
#define ULI_8259_IRQ3	0x02
#define ULI_8259_IRQ4	0x04
#define ULI_8259_IRQ5	0x05
#define ULI_8259_IRQ6	0x07
#define ULI_8259_IRQ7	0x06
#define ULI_8259_IRQ9	0x01
#define ULI_8259_IRQ10	0x03
#define ULI_8259_IRQ11	0x09
#define ULI_8259_IRQ12	0x0b
#define ULI_8259_IRQ14	0x0d
#define ULI_8259_IRQ15	0x0f
u8 uli_pirq_to_irq[8] = ;
static inline bool is_quirk_valid(void)
static void __devinit early_uli5249(struct pci_dev *dev)
static void __devinit quirk_uli1575(struct pci_dev *dev)
static void __devinit quirk_final_uli1575(struct pci_dev *dev)
static void __devinit quirk_uli5288(struct pci_dev *dev)
static void __devinit quirk_uli5229(struct pci_dev *dev)
static void __devinit quirk_final_uli5249(struct pci_dev *dev)
DECLARE_PCI_FIXUP_EARLY(PCI_VENDOR_ID_AL, 0x5249, early_uli5249);
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_AL, 0x1575, quirk_uli1575);
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_AL, 0x5288, quirk_uli5288);
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_AL, 0x5229, quirk_uli5229);
DECLARE_PCI_FIXUP_FINAL(PCI_VENDOR_ID_AL, 0x5249, quirk_final_uli5249);
DECLARE_PCI_FIXUP_FINAL(PCI_VENDOR_ID_AL, 0x1575, quirk_final_uli1575);
DECLARE_PCI_FIXUP_RESUME(PCI_VENDOR_ID_AL, 0x5229, quirk_uli5229);
static void __devinit hpcd_quirk_uli1575(struct pci_dev *dev)
static void __devinit hpcd_quirk_uli5288(struct pci_dev *dev)
static void __devinit hpcd_quirk_uli5229(struct pci_dev *dev)
static void __devinit hpcd_final_uli5288(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_AL, 0x1575, hpcd_quirk_uli1575);
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_AL, 0x5288, hpcd_quirk_uli5288);
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_AL, 0x5229, hpcd_quirk_uli5229);
DECLARE_PCI_FIXUP_FINAL(PCI_VENDOR_ID_AL, 0x5288, hpcd_final_uli5288);
int uli_exclude_device(struct pci_controller *hose,
u_char bus, u_char devfn)
