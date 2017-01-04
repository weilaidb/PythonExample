#define __ASM_ARCH_PWMCLK_H __FILE__
static inline int pwm_cfg_src_is_tclk(unsigned long tcfg)
static inline unsigned long tcfg_to_divisor(unsigned long tcfg1)
static inline unsigned int pwm_tdiv_has_div1(void)
static inline unsigned long pwm_tdiv_div_bits(unsigned int div)
#define S3C_TCFG1_MUX_TCLK 0
