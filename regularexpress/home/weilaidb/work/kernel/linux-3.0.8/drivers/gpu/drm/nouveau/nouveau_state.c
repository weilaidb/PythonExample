static void nouveau_stub_takedown(struct drm_device *dev)
static int nouveau_stub_init(struct drm_device *dev)
static int nouveau_init_engine_ptrs(struct drm_device *dev)
static unsigned int
nouveau_vga_set_decode(void *priv, bool state)
static int
nouveau_card_init_channel(struct drm_device *dev)
static void nouveau_switcheroo_set_state(struct pci_dev *pdev,
enum vga_switcheroo_state state)
static void nouveau_switcheroo_reprobe(struct pci_dev *pdev)
static bool nouveau_switcheroo_can_switch(struct pci_dev *pdev)
int
nouveau_card_init(struct drm_device *dev)
static void nouveau_card_takedown(struct drm_device *dev)
void nouveau_preclose(struct drm_device *dev, struct drm_file *file_priv)
int nouveau_firstopen(struct drm_device *dev)
static void nouveau_OF_copy_vbios_to_ramin(struct drm_device *dev)
static struct apertures_struct *nouveau_get_apertures(struct drm_device *dev)
static int nouveau_remove_conflicting_drivers(struct drm_device *dev)
int nouveau_load(struct drm_device *dev, unsigned long flags)
void nouveau_lastclose(struct drm_device *dev)
int nouveau_unload(struct drm_device *dev)
int nouveau_ioctl_getparam(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int
nouveau_ioctl_setparam(struct drm_device *dev, void *data,
struct drm_file *file_priv)
bool
nouveau_wait_eq(struct drm_device *dev, uint64_t timeout,
uint32_t reg, uint32_t mask, uint32_t val)
bool
nouveau_wait_ne(struct drm_device *dev, uint64_t timeout,
uint32_t reg, uint32_t mask, uint32_t val)
bool nouveau_wait_for_idle(struct drm_device *dev)
