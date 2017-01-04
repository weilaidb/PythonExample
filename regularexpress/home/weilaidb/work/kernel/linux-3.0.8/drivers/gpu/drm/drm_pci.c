drm_dma_handle_t *drm_pci_alloc(struct drm_device * dev, size_t size, size_t align)
EXPORT_SYMBOL(drm_pci_alloc);
void __drm_pci_free(struct drm_device * dev, drm_dma_handle_t * dmah)
void drm_pci_free(struct drm_device * dev, drm_dma_handle_t * dmah)
EXPORT_SYMBOL(drm_pci_free);
static int drm_get_pci_domain(struct drm_device *dev)
static int drm_pci_get_irq(struct drm_device *dev)
static const char *drm_pci_get_name(struct drm_device *dev)
int drm_pci_set_busid(struct drm_device *dev, struct drm_master *master)
int drm_pci_set_unique(struct drm_device *dev,
struct drm_master *master,
struct drm_unique *u)
static int drm_pci_irq_by_busid(struct drm_device *dev, struct drm_irq_busid *p)
int drm_pci_agp_init(struct drm_device *dev)
static struct drm_bus drm_pci_bus = ;
int drm_get_pci_dev(struct pci_dev *pdev, const struct pci_device_id *ent,
struct drm_driver *driver)
EXPORT_SYMBOL(drm_get_pci_dev);
int drm_pci_init(struct drm_driver *driver, struct pci_driver *pdriver)
int drm_pci_init(struct drm_driver *driver, struct pci_driver *pdriver)
EXPORT_SYMBOL(drm_pci_init);
void drm_pci_exit(struct drm_driver *driver, struct pci_driver *pdriver)
EXPORT_SYMBOL(drm_pci_exit);
