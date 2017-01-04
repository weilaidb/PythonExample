extern void s5pc100_common_init_uarts(struct s3c2410_uartcfg *cfg, int no);
extern void s5pc100_register_clocks(void);
extern void s5pc100_setup_clocks(void);
extern  int s5pc100_init(void);
extern void s5pc100_init_irq(void);
extern void s5pc100_map_io(void);
extern void s5pc100_init_clocks(int xtal);
#define s5pc100_init_uarts s5pc100_common_init_uarts
#define s5pc100_init_clocks NULL
#define s5pc100_init_uarts NULL
#define s5pc100_map_io NULL
#define s5pc100_init NULL
