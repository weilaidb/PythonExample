#define __ASM_ARM_TS_H
struct s3c2410_ts_mach_info ;
extern void s3c24xx_ts_set_platdata(struct s3c2410_ts_mach_info *);
extern void s3c24xx_ts_cfg_gpio(struct platform_device *dev);
