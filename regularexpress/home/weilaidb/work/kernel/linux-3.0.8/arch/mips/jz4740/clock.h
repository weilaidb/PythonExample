#define __MIPS_JZ4740_CLOCK_H__
struct jz4740_clock_board_data ;
extern struct jz4740_clock_board_data jz4740_clock_bdata;
void jz4740_clock_suspend(void);
void jz4740_clock_resume(void);
struct clk;
struct clk_ops ;
struct clk ;
#define JZ4740_CLK_NOT_GATED ((uint32_t)-1)
int clk_is_enabled(struct clk *clk);
void jz4740_clock_debugfs_init(void);
void jz4740_clock_debugfs_add_clk(struct clk *clk);
void jz4740_clock_debugfs_update_parent(struct clk *clk);
static inline void jz4740_clock_debugfs_init(void) ;
static inline void jz4740_clock_debugfs_add_clk(struct clk *clk) ;
static inline void jz4740_clock_debugfs_update_parent(struct clk *clk) ;
