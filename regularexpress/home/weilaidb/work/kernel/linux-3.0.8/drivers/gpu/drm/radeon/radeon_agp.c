#if __OS_HAS_AGP
struct radeon_agpmode_quirk ;
static struct radeon_agpmode_quirk radeon_agpmode_quirk_list[] = ;
int radeon_agp_init(struct radeon_device *rdev)
void radeon_agp_resume(struct radeon_device *rdev)
void radeon_agp_fini(struct radeon_device *rdev)
void radeon_agp_suspend(struct radeon_device *rdev)
