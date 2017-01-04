#define __ASM_ARM_ARCH_UDC_H
enum s3c2410_udc_cmd_e ;
struct s3c2410_udc_mach_info ;
extern void __init s3c24xx_udc_set_platdata(struct s3c2410_udc_mach_info *);
struct s3c24xx_hsudc_platdata ;
extern void __init s3c24xx_hsudc_set_platdata(struct s3c24xx_hsudc_platdata *pd);
