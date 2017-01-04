extern void s5p6440_register_clocks(void);
extern void s5p6440_setup_clocks(void);
extern  int s5p64x0_init(void);
extern void s5p6440_init_irq(void);
extern void s5p6440_map_io(void);
extern void s5p6440_init_clocks(int xtal);
extern void s5p6440_init_uarts(struct s3c2410_uartcfg *cfg, int no);
#define s5p6440_init_clocks NULL
#define s5p6440_init_uarts NULL
#define s5p6440_map_io NULL
#define s5p64x0_init NULL
extern struct sys_timer s5p6440_timer;
