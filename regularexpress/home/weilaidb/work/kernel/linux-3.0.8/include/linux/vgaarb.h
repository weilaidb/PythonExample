#define LINUX_VGA_H
#define VGA_RSRC_NONE	       0x00
#define VGA_RSRC_LEGACY_IO     0x01
#define VGA_RSRC_LEGACY_MEM    0x02
#define VGA_RSRC_LEGACY_MASK   (VGA_RSRC_LEGACY_IO | VGA_RSRC_LEGACY_MEM)
#define VGA_RSRC_NORMAL_IO     0x04
#define VGA_RSRC_NORMAL_MEM    0x08
#define VGA_DEFAULT_DEVICE     (NULL)
extern void vga_set_legacy_decoding(struct pci_dev *pdev,
unsigned int decodes);
#if defined(CONFIG_VGA_ARB)
extern int vga_get(struct pci_dev *pdev, unsigned int rsrc, int interruptible);
static inline int vga_get(struct pci_dev *pdev, unsigned int rsrc, int interruptible)
static inline int vga_get_interruptible(struct pci_dev *pdev,
unsigned int rsrc)
static inline int vga_get_uninterruptible(struct pci_dev *pdev,
unsigned int rsrc)
#if defined(CONFIG_VGA_ARB)
extern int vga_tryget(struct pci_dev *pdev, unsigned int rsrc);
static inline int vga_tryget(struct pci_dev *pdev, unsigned int rsrc)
#if defined(CONFIG_VGA_ARB)
extern void vga_put(struct pci_dev *pdev, unsigned int rsrc);
#define vga_put(pdev, rsrc)
extern struct pci_dev *vga_default_device(void);
static inline int vga_conflicts(struct pci_dev *p1, struct pci_dev *p2)
#if defined(CONFIG_VGA_ARB)
int vga_client_register(struct pci_dev *pdev, void *cookie,
void (*irq_set_state)(void *cookie, bool state),
unsigned int (*set_vga_decode)(void *cookie, bool state));
static inline int vga_client_register(struct pci_dev *pdev, void *cookie,
void (*irq_set_state)(void *cookie, bool state),
unsigned int (*set_vga_decode)(void *cookie, bool state))
