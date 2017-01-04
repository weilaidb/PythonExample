#define __OMAP_COMMON_BOARD_DEVICES__
#define NAND_BLOCK_SIZE	SZ_128K
struct twl4030_platform_data;
struct mtd_partition;
void omap_pmic_init(int bus, u32 clkrate, const char *pmic_type, int pmic_irq,
struct twl4030_platform_data *pmic_data);
static inline void omap2_pmic_init(const char *pmic_type,
struct twl4030_platform_data *pmic_data)
static inline void omap3_pmic_init(const char *pmic_type,
struct twl4030_platform_data *pmic_data)
static inline void omap4_pmic_init(const char *pmic_type,
struct twl4030_platform_data *pmic_data)
struct ads7846_platform_data;
void omap_ads7846_init(int bus_num, int gpio_pendown, int gpio_debounce,
struct ads7846_platform_data *board_pdata);
void omap_nand_flash_init(int opts, struct mtd_partition *parts, int n_parts);
