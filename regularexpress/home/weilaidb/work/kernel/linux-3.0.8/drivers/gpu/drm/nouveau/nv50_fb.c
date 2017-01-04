struct nv50_fb_priv ;
static void
nv50_fb_destroy(struct drm_device *dev)
static int
nv50_fb_create(struct drm_device *dev)
int
nv50_fb_init(struct drm_device *dev)
void
nv50_fb_takedown(struct drm_device *dev)
static struct nouveau_enum vm_dispatch_subclients[] = ;
static struct nouveau_enum vm_ccache_subclients[] = ;
static struct nouveau_enum vm_prop_subclients[] = ;
static struct nouveau_enum vm_pfifo_subclients[] = ;
static struct nouveau_enum vm_bar_subclients[] = ;
static struct nouveau_enum vm_client[] = ;
static struct nouveau_enum vm_engine[] = ;
static struct nouveau_enum vm_fault[] = ;
void
nv50_fb_vm_trap(struct drm_device *dev, int display)
