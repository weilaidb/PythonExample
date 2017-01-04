extern void exynos4_common_init_uarts(struct s3c2410_uartcfg *cfg, int no);
extern void exynos4_register_clocks(void);
extern void exynos4_setup_clocks(void);
extern  int exynos4_init(void);
extern void exynos4_init_irq(void);
extern void exynos4_map_io(void);
extern void exynos4_init_clocks(int xtal);
extern struct sys_timer exynos4_timer;
#define exynos4_init_uarts exynos4_common_init_uarts
#define exynos4_init_clocks NULL
#define exynos4_init_uarts NULL
#define exynos4_map_io NULL
#define exynos4_init NULL
