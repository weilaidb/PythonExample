enum vga_switcheroo_state ;
enum vga_switcheroo_client_id ;
struct vga_switcheroo_handler ;
#if defined(CONFIG_VGA_SWITCHEROO)
void vga_switcheroo_unregister_client(struct pci_dev *dev);
int vga_switcheroo_register_client(struct pci_dev *dev,
void (*set_gpu_state)(struct pci_dev *dev, enum vga_switcheroo_state),
void (*reprobe)(struct pci_dev *dev),
bool (*can_switch)(struct pci_dev *dev));
void vga_switcheroo_client_fb_set(struct pci_dev *dev,
struct fb_info *info);
int vga_switcheroo_register_handler(struct vga_switcheroo_handler *handler);
void vga_switcheroo_unregister_handler(void);
int vga_switcheroo_process_delayed_switch(void);
static inline void vga_switcheroo_unregister_client(struct pci_dev *dev)
static inline int vga_switcheroo_register_client(struct pci_dev *dev,
void (*set_gpu_state)(struct pci_dev *dev, enum vga_switcheroo_state),
void (*reprobe)(struct pci_dev *dev),
bool (*can_switch)(struct pci_dev *dev))
static inline void vga_switcheroo_client_fb_set(struct pci_dev *dev, struct fb_info *info)
static inline int vga_switcheroo_register_handler(struct vga_switcheroo_handler *handler)
static inline void vga_switcheroo_unregister_handler(void)
static inline int vga_switcheroo_process_delayed_switch(void)
