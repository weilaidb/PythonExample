static uint32_t radeon_invalid_rreg(struct radeon_device *rdev, uint32_t reg)
static void radeon_invalid_wreg(struct radeon_device *rdev, uint32_t reg, uint32_t v)
static void radeon_register_accessor_init(struct radeon_device *rdev)
void radeon_agp_disable(struct radeon_device *rdev)
static struct radeon_asic r100_asic = ;
static struct radeon_asic r200_asic = ;
static struct radeon_asic r300_asic = ;
static struct radeon_asic r300_asic_pcie = ;
static struct radeon_asic r420_asic = ;
static struct radeon_asic rs400_asic = ;
static struct radeon_asic rs600_asic = ;
static struct radeon_asic rs690_asic = ;
static struct radeon_asic rv515_asic = ;
static struct radeon_asic r520_asic = ;
static struct radeon_asic r600_asic = ;
static struct radeon_asic rs780_asic = ;
static struct radeon_asic rv770_asic = ;
static struct radeon_asic evergreen_asic = ;
static struct radeon_asic sumo_asic = ;
static struct radeon_asic btc_asic = ;
static struct radeon_asic cayman_asic = ;
int radeon_asic_init(struct radeon_device *rdev)
