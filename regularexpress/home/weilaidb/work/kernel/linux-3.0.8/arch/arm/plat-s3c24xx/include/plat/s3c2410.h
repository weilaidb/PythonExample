extern  int s3c2410_init(void);
extern  int s3c2410a_init(void);
extern void s3c2410_map_io(void);
extern void s3c2410_init_uarts(struct s3c2410_uartcfg *cfg, int no);
extern void s3c2410_init_clocks(int xtal);
#define s3c2410_init_clocks NULL
#define s3c2410_init_uarts NULL
#define s3c2410_map_io NULL
#define s3c2410_init NULL
#define s3c2410a_init NULL
extern int s3c2410_baseclk_add(void);
