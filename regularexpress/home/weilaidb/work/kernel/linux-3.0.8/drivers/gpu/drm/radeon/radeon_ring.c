int radeon_debugfs_ib_init(struct radeon_device *rdev);
void radeon_ib_bogus_cleanup(struct radeon_device *rdev)
void radeon_ib_bogus_add(struct radeon_device *rdev, struct radeon_ib *ib)
int radeon_ib_get(struct radeon_device *rdev, struct radeon_ib **ib)
void radeon_ib_free(struct radeon_device *rdev, struct radeon_ib **ib)
int radeon_ib_schedule(struct radeon_device *rdev, struct radeon_ib *ib)
int radeon_ib_pool_init(struct radeon_device *rdev)
void radeon_ib_pool_fini(struct radeon_device *rdev)
void radeon_ring_free_size(struct radeon_device *rdev)
int radeon_ring_alloc(struct radeon_device *rdev, unsigned ndw)
int radeon_ring_lock(struct radeon_device *rdev, unsigned ndw)
void radeon_ring_commit(struct radeon_device *rdev)
void radeon_ring_unlock_commit(struct radeon_device *rdev)
void radeon_ring_unlock_undo(struct radeon_device *rdev)
int radeon_ring_init(struct radeon_device *rdev, unsigned ring_size)
void radeon_ring_fini(struct radeon_device *rdev)
#if defined(CONFIG_DEBUG_FS)
static int radeon_debugfs_ib_info(struct seq_file *m, void *data)
static int radeon_debugfs_ib_bogus_info(struct seq_file *m, void *data)
static struct drm_info_list radeon_debugfs_ib_list[RADEON_IB_POOL_SIZE];
static char radeon_debugfs_ib_names[RADEON_IB_POOL_SIZE][32];
static struct drm_info_list radeon_debugfs_ib_bogus_info_list[] = ;
int radeon_debugfs_ib_init(struct radeon_device *rdev)
