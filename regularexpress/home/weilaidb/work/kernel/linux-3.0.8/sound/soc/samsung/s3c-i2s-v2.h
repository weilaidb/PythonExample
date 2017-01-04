#define __SND_SOC_S3C24XX_S3C_I2SV2_I2S_H __FILE__
#define S3C_I2SV2_DIV_BCLK	(1)
#define S3C_I2SV2_DIV_RCLK	(2)
#define S3C_I2SV2_DIV_PRESCALER	(3)
#define S3C_I2SV2_CLKSRC_PCLK		0
#define S3C_I2SV2_CLKSRC_AUDIOBUS	1
#define S3C_I2SV2_CLKSRC_CDCLK		2
#define S3C_FEATURE_CDCLKCON	(1 << 0)
struct s3c_i2sv2_info ;
extern struct clk *s3c_i2sv2_get_clock(struct snd_soc_dai *cpu_dai);
struct s3c_i2sv2_rate_calc ;
extern int s3c_i2sv2_iis_calc_rate(struct s3c_i2sv2_rate_calc *info,
unsigned int *fstab,
unsigned int rate, struct clk *clk);
extern int s3c_i2sv2_probe(struct snd_soc_dai *dai,
struct s3c_i2sv2_info *i2s,
unsigned long base);
extern int s3c_i2sv2_register_dai(struct device *dev, int id,
struct snd_soc_dai_driver *drv);
