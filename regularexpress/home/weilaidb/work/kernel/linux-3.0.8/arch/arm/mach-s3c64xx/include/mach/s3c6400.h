extern void s3c6400_common_init_uarts(struct s3c2410_uartcfg *cfg, int no);
extern void s3c6400_setup_clocks(void);
extern void s3c64xx_register_clocks(unsigned long xtal, unsigned armclk_limit);
extern  int s3c6400_init(void);
extern void s3c6400_init_irq(void);
extern void s3c6400_map_io(void);
extern void s3c6400_init_clocks(int xtal);
#define s3c6400_init_uarts s3c6400_common_init_uarts
#define s3c6400_init_clocks NULL
#define s3c6400_init_uarts NULL
#define s3c6400_map_io NULL
#define s3c6400_init NULL
