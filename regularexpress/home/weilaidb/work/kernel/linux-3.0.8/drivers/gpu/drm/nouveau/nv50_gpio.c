static void nv50_gpio_isr(struct drm_device *dev);
static void nv50_gpio_isr_bh(struct work_struct *work);
struct nv50_gpio_priv ;
struct nv50_gpio_handler ;
static int
nv50_gpio_location(struct dcb_gpio_entry *gpio, uint32_t *reg, uint32_t *shift)
int
nv50_gpio_get(struct drm_device *dev, enum dcb_gpio_tag tag)
int
nv50_gpio_set(struct drm_device *dev, enum dcb_gpio_tag tag, int state)
int
nv50_gpio_irq_register(struct drm_device *dev, enum dcb_gpio_tag tag,
void (*handler)(void *, int), void *data)
void
nv50_gpio_irq_unregister(struct drm_device *dev, enum dcb_gpio_tag tag,
void (*handler)(void *, int), void *data)
bool
nv50_gpio_irq_enable(struct drm_device *dev, enum dcb_gpio_tag tag, bool on)
static int
nv50_gpio_create(struct drm_device *dev)
static void
nv50_gpio_destroy(struct drm_device *dev)
int
nv50_gpio_init(struct drm_device *dev)
void
nv50_gpio_fini(struct drm_device *dev)
static void
nv50_gpio_isr_bh(struct work_struct *work)
static void
nv50_gpio_isr(struct drm_device *dev)
