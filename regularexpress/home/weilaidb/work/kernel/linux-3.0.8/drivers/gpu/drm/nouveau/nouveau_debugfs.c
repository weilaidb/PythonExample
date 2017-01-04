static int
nouveau_debugfs_channel_info(struct seq_file *m, void *data)
int
nouveau_debugfs_channel_init(struct nouveau_channel *chan)
void
nouveau_debugfs_channel_fini(struct nouveau_channel *chan)
static int
nouveau_debugfs_chipset_info(struct seq_file *m, void *data)
static int
nouveau_debugfs_memory_info(struct seq_file *m, void *data)
static int
nouveau_debugfs_vbios_image(struct seq_file *m, void *data)
static int
nouveau_debugfs_evict_vram(struct seq_file *m, void *data)
static struct drm_info_list nouveau_debugfs_list[] = ;
#define NOUVEAU_DEBUGFS_ENTRIES ARRAY_SIZE(nouveau_debugfs_list)
int
nouveau_debugfs_init(struct drm_minor *minor)
void
nouveau_debugfs_takedown(struct drm_minor *minor)
