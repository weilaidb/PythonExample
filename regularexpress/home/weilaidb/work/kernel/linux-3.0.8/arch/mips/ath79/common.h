#define __ATH79_COMMON_H
#define ATH79_MEM_SIZE_MIN	(2 * 1024 * 1024)
#define ATH79_MEM_SIZE_MAX	(128 * 1024 * 1024)
void ath79_clocks_init(void);
void ath79_ddr_wb_flush(unsigned int reg);
void ath79_gpio_function_enable(u32 mask);
void ath79_gpio_function_disable(u32 mask);
void ath79_gpio_function_setup(u32 set, u32 clear);
void ath79_gpio_init(void);
