#define _BFIN_CLOCKS_H
# define CONFIG_CCLK_ACT_DIV   CCLK_DIV1
# define CONFIG_CCLK_DIV 1
# define CONFIG_CCLK_ACT_DIV   CCLK_DIV2
# define CONFIG_CCLK_DIV 2
# define CONFIG_CCLK_ACT_DIV   CCLK_DIV4
# define CONFIG_CCLK_DIV 4
# define CONFIG_CCLK_ACT_DIV   CCLK_DIV8
# define CONFIG_CCLK_DIV 8
# ifndef CONFIG_CLKIN_HALF
#  define CONFIG_VCO_HZ   (CONFIG_CLKIN_HZ * CONFIG_VCO_MULT)
# else
#  define CONFIG_VCO_HZ   ((CONFIG_CLKIN_HZ * CONFIG_VCO_MULT)/2)
# endif
# define CONFIG_CCLK_HZ  (CONFIG_VCO_HZ/CONFIG_CCLK_DIV)
# define CONFIG_SCLK_HZ  (CONFIG_VCO_HZ/CONFIG_SCLK_DIV)
# define CONFIG_VCO_HZ   (CONFIG_CLKIN_HZ)
# define CONFIG_CCLK_HZ  (CONFIG_CLKIN_HZ)
# define CONFIG_SCLK_HZ  (CONFIG_CLKIN_HZ)
# define CONFIG_VCO_MULT 0