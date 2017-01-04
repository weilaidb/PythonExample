#define FUSE_UID_LOW		0x108
#define FUSE_UID_HIGH		0x10c
#define FUSE_SKU_INFO		0x110
#define FUSE_SPARE_BIT		0x200
static inline u32 fuse_readl(unsigned long offset)
static inline void fuse_writel(u32 value, unsigned long offset)
void tegra_init_fuse(void)
unsigned long long tegra_chip_uid(void)
int tegra_sku_id(void)
int tegra_cpu_process_id(void)
int tegra_core_process_id(void)
