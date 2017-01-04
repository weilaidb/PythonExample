#define __ASM_ARCH_IIC_H __FILE__
#define S3C_IICFLG_FILTER	(1<<0)
struct s3c2410_platform_i2c ;
extern void s3c_i2c0_set_platdata(struct s3c2410_platform_i2c *i2c);
extern void s3c_i2c1_set_platdata(struct s3c2410_platform_i2c *i2c);
extern void s3c_i2c2_set_platdata(struct s3c2410_platform_i2c *i2c);
extern void s3c_i2c3_set_platdata(struct s3c2410_platform_i2c *i2c);
extern void s3c_i2c4_set_platdata(struct s3c2410_platform_i2c *i2c);
extern void s3c_i2c5_set_platdata(struct s3c2410_platform_i2c *i2c);
extern void s3c_i2c6_set_platdata(struct s3c2410_platform_i2c *i2c);
extern void s3c_i2c7_set_platdata(struct s3c2410_platform_i2c *i2c);
extern void s3c_i2c0_cfg_gpio(struct platform_device *dev);
extern void s3c_i2c1_cfg_gpio(struct platform_device *dev);
extern void s3c_i2c2_cfg_gpio(struct platform_device *dev);
extern void s3c_i2c3_cfg_gpio(struct platform_device *dev);
extern void s3c_i2c4_cfg_gpio(struct platform_device *dev);
extern void s3c_i2c5_cfg_gpio(struct platform_device *dev);
extern void s3c_i2c6_cfg_gpio(struct platform_device *dev);
extern void s3c_i2c7_cfg_gpio(struct platform_device *dev);
