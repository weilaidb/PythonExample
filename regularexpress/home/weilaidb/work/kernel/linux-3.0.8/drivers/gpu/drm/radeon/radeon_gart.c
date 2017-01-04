int radeon_gart_table_ram_alloc(struct radeon_device *rdev)
void radeon_gart_table_ram_free(struct radeon_device *rdev)
int radeon_gart_table_vram_alloc(struct radeon_device *rdev)
int radeon_gart_table_vram_pin(struct radeon_device *rdev)
void radeon_gart_table_vram_free(struct radeon_device *rdev)
void radeon_gart_unbind(struct radeon_device *rdev, unsigned offset,
int pages)
int radeon_gart_bind(struct radeon_device *rdev, unsigned offset,
int pages, struct page **pagelist, dma_addr_t *dma_addr)
void radeon_gart_restore(struct radeon_device *rdev)
int radeon_gart_init(struct radeon_device *rdev)
void radeon_gart_fini(struct radeon_device *rdev)
