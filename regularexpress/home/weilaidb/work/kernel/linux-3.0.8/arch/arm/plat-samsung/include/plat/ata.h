#define __ASM_PLAT_ATA_H __FILE__
struct s3c_ide_platdata ;
extern void s3c_ide_set_platdata(struct s3c_ide_platdata *pdata);
extern void s3c64xx_ide_setup_gpio(void);
extern void s5pc100_ide_setup_gpio(void);
extern void s5pv210_ide_setup_gpio(void);
