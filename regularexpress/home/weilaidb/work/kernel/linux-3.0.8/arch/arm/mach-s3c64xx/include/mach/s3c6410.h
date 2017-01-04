extern  int s3c6410_init(void);
extern void s3c6410_init_irq(void);
extern void s3c6410_map_io(void);
extern void s3c6410_init_clocks(int xtal);
#define s3c6410_init_uarts s3c6400_common_init_uarts
#define s3c6410_init_clocks NULL
#define s3c6410_init_uarts NULL
#define s3c6410_map_io NULL
#define s3c6410_init NULL
