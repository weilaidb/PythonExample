struct s3c2410_uartcfg;
extern  int s3c2443_init(void);
extern void s3c2443_map_io(void);
extern void s3c2443_init_uarts(struct s3c2410_uartcfg *cfg, int no);
extern void s3c2443_init_clocks(int xtal);
extern  int s3c2443_baseclk_add(void);
#define s3c2443_init_clocks NULL
#define s3c2443_init_uarts NULL
#define s3c2443_map_io NULL
#define s3c2443_init NULL
struct clk;
typedef unsigned int (*pll_fn)(unsigned int reg, unsigned int base);
typedef unsigned int (*fdiv_fn)(unsigned long clkcon0);
extern void s3c2443_common_setup_clocks(pll_fn get_mpll, fdiv_fn fdiv);
extern void s3c2443_common_init_clocks(int xtal, pll_fn get_mpll, fdiv_fn fdiv);
extern int s3c2443_clkcon_enable_h(struct clk *clk, int enable);
extern int s3c2443_clkcon_enable_p(struct clk *clk, int enable);
extern int s3c2443_clkcon_enable_s(struct clk *clk, int enable);
extern struct clksrc_clk clk_epllref;
extern struct clksrc_clk clk_esysclk;
extern struct clksrc_clk clk_msysclk;
