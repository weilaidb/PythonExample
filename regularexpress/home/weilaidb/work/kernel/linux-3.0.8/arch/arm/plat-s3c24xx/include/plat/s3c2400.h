extern  int s3c2400_init(void);
extern void s3c2400_map_io(void);
extern void s3c2400_init_uarts(struct s3c2410_uartcfg *cfg, int no);
extern void s3c2400_init_clocks(int xtal);
#define s3c2400_init_clocks NULL
#define s3c2400_init_uarts NULL
#define s3c2400_map_io NULL
#define s3c2400_init NULL
