#define __ARCH_ARM_MACH_MSM_GPIOMUX_H
#if defined(CONFIG_MSM_V2_TLMM)
struct msm_gpiomux_config ;
enum ;
extern struct msm_gpiomux_config msm_gpiomux_configs[GPIOMUX_NGPIOS];
int __must_check msm_gpiomux_get(unsigned gpio);
int msm_gpiomux_put(unsigned gpio);
int msm_gpiomux_write(unsigned gpio,
gpiomux_config_t active,
gpiomux_config_t suspended);
void __msm_gpiomux_write(unsigned gpio, gpiomux_config_t val);
static inline int __must_check msm_gpiomux_get(unsigned gpio)
static inline int msm_gpiomux_put(unsigned gpio)
static inline int msm_gpiomux_write(unsigned gpio,
gpiomux_config_t active,
gpiomux_config_t suspended)
