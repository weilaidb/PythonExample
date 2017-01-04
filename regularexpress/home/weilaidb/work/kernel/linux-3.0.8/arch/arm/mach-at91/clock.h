#define CLK_TYPE_PRIMARY	0x1
#define CLK_TYPE_PLL		0x2
#define CLK_TYPE_PROGRAMMABLE	0x4
#define CLK_TYPE_PERIPHERAL	0x8
#define CLK_TYPE_SYSTEM		0x10
struct clk ;
extern int __init clk_register(struct clk *clk);
extern struct clk mck;
extern struct clk utmi_clk;
#define CLKDEV_CON_ID(_id, _clk)			\
#define CLKDEV_CON_DEV_ID(_con_id, _dev_id, _clk)	\
